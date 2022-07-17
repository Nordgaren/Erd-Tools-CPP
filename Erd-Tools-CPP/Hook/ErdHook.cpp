#include "../Include/ErdHook.h"

bool ErdHook::CreateMemoryEdits() {
	minhook_active = MH_Initialize();
	if (minhook_active != MH_OK) {
		throw std::runtime_error("MH_Initialize != MH_OK");
	}

	if (!FindNeededSignatures()) {
		throw std::runtime_error("Failed to find function signatures");
	}

	return true;
}


bool ErdHook::FindNeededSignatures() {
	if (!signature_class.GetImageInfo()) {
		//
		return false;
	}

	Signature event_man = {
	"\x48\x8B\x3D\xFF\xFF\xFF\xFF\x48\x85\xFF\xFF\xFF\x32\xC0\xE9",
	"xxx????xxx??xxx",
	15,
	0,
	};
	event_hook->EventMan = (uint64_t)signature_class.FindSignature(event_man);

	Signature set_event = {
		"\xFF\xFF\xFF\xFF\xFF\x48\x89\x74\x24\x18\x57\x48\x83\xEC\x30\x48\x8B\xDA\x41\x0F\xB6\xF8\x8B\x12\x48\x8B\xF1\x85\xD2\x0F\x84\xFF\xFF\xFF\xFF\x45\x84\xC0",
		"?????xxxxxxxxxxxxxxxxxxxxxxxxxx????xxx",
		38,
		0,
	};
	event_hook->SetEventFlagAddress = (uint64_t)signature_class.FindSignature(set_event);

	Signature is_event = {
	"\x48\x83\xEC\x28\x8B\x12\x85\xD2",
	"xxxxxxxx",
	8,
	0,
	};
	event_hook->IsEventFlagAddress = (uint64_t)signature_class.FindSignature(is_event);
	*(void**)&EventHook::IsEventFlag = (LPVOID)event_hook->IsEventFlagAddress;

	Signature disable_map = {
	"\x74\xFF\xC7\x45\x38\x58\x02\x00\x00\xC7\x45\x3C\x02\x00\x00\x00\xC7\x45\x40\x01\x00\x00\x00\x48\xFF\xFF\xFF\xFF\xFF\xFF\x48\x89\x45\x48\x48\x8D\x4D\x38\xE8\xFF\xFF\xFF\xFF\xE9",
	"x?xxxxxxxxxxxxxxxxxxxxxx??????xxxxxxxxx????x",
	44,
	0,
	};
	debug_hook->DisableOpenMapInCombatLocation = (uint64_t)signature_class.FindSignature(disable_map);

	Signature combat_map = {
"\xE8\xFF\xFF\xFF\xFF\x84\xC0\x75\xFF\x38\x83\xFF\xFF\xFF\xFF\x75\xFF\x83\xE7\xFE",
"x????xxx?xx????x?xxx",
20,
0,
	};
	debug_hook->CloseMapInCombatLocation = (uint64_t)signature_class.FindSignature(combat_map);

	Signature disable_crafting = {
"\xE8\xDD\xC2\x43\x00\x84\xC0\x0F\x94\xC0",
"xxxxxxxxxx",
10,
0,
	};
	debug_hook->DisableCrafingInCombatLocation = (uint64_t)signature_class.FindSignature(disable_crafting);

	return event_hook->EventMan && event_hook->SetEventFlagAddress && event_hook->IsEventFlagAddress && debug_hook->DisableOpenMapInCombatLocation && debug_hook->CloseMapInCombatLocation && debug_hook->DisableCrafingInCombatLocation;
}

bool SigScan::GetImageInfo() {

	bool bSuccess = false;

	module_handle = GetModuleHandleA("eldenring.exe");
	if (module_handle) {
		MEMORY_BASIC_INFORMATION memInfo;
		if (VirtualQuery((void*)module_handle, &memInfo, sizeof(memInfo)) != 0) {
			IMAGE_DOS_HEADER* hDos = (IMAGE_DOS_HEADER*)module_handle;
			IMAGE_NT_HEADERS* hPe = (IMAGE_NT_HEADERS*)((ULONG64)memInfo.AllocationBase + (ULONG64)hDos->e_lfanew);

			if ((hDos->e_magic == IMAGE_DOS_SIGNATURE) && (hPe->Signature == IMAGE_NT_SIGNATURE)) {
				bSuccess = true;
				base_address = (void*)memInfo.AllocationBase;
				image_size = (SIZE_T)hPe->OptionalHeader.SizeOfImage;
			}
		}
	}

	return bSuccess;
};

void* SigScan::FindSignature(Signature& fnSig) {

	char* pScan = (char*)base_address;
	char* max_address = pScan + image_size - fnSig.length;
	SIZE_T iMaxLength = 0;

	while (pScan < max_address) {
		SIZE_T szLength = 0;

		for (SIZE_T i = 0; i < fnSig.length; i++) {
			if (!((pScan[i] == fnSig.signature[i]) || (fnSig.mask[i] == '?'))) break;
			szLength++;
		}

		if (szLength > iMaxLength) iMaxLength = (INT)szLength;
		if (szLength == fnSig.length) return pScan;

		pScan++;
	}

	return nullptr;
};