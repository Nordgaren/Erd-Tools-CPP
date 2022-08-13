#include "../Include/ErdHook.h"

bool ErdHook::CreateMemoryEdits() {
	_minhookActive = MH_Initialize();
	if (_minhookActive != MH_OK) {
		throw std::runtime_error("MH_Initialize != MH_OK");
	}

	if (!FindNeededSignatures()) {
		//throw std::runtime_error("Failed to find function signatures");
	}

	return true;
}

uint64_t ErdHook::GetRelativeOffset(void* pointer, int address_offset, int instruction_size) {
	char* relativeAddr = (char*)pointer;
	int offset = *(int*)(relativeAddr + address_offset);
	relativeAddr += offset + instruction_size;
	return (uint64_t)relativeAddr;
}

uint64_t* EventHook::EventMan = 0;


bool ErdHook::FindNeededSignatures() {
	if (!_signatureClass.GetImageInfo()) {
		//
		return false;
	}

	Signature event_man = {
		"\x48\x8B\x3D\xFF\xFF\xFF\xFF\x48\x85\xFF\xFF\xFF\x32\xC0\xE9",
		"xxx????xxx??xxx",
		15,
		0,
	};
	void* result = _signatureClass.FindSignature(event_man);
	uint64_t relativeAddr = GetRelativeOffset(result, 0x3, 0x7);
	EventHook::EventMan = (uint64_t*)relativeAddr;

	Signature set_event = {
		"\xFF\xFF\xFF\xFF\xFF\x48\x89\x74\x24\x18\x57\x48\x83\xEC\x30\x48\x8B\xDA\x41\x0F\xB6\xF8\x8B\x12\x48\x8B\xF1\x85\xD2\x0F\x84\xFF\xFF\xFF\xFF\x45\x84\xC0",
		"?????xxxxxxxxxxxxxxxxxxxxxxxxxx????xxx",
		38,
		0,
	};
	EventMan->SetEventFlagAddress = (uint64_t)_signatureClass.FindSignature(set_event);

	Signature is_event = {
		"\x48\x83\xEC\x28\x8B\x12\x85\xD2",
		"xxxxxxxx",
		8,
		0,
	};
	EventMan->IsEventFlagAddress = (uint64_t)_signatureClass.FindSignature(is_event);
	*(void**)&EventHook::IsEventFlag = (void*)EventMan->IsEventFlagAddress;

	Signature disable_map = {
		"\x74\xFF\xC7\x45\x38\x58\x02\x00\x00\xC7\x45\x3C\x02\x00\x00\x00\xC7\x45\x40\x01\x00\x00\x00\x48\xFF\xFF\xFF\xFF\xFF\xFF\x48\x89\x45\x48\x48\x8D\x4D\x38\xE8\xFF\xFF\xFF\xFF\xE9",
		"x?xxxxxxxxxxxxxxxxxxxxxx??????xxxxxxxxx????x",
		44,
		0,
	};
	DebugMan->DisableOpenMapInCombatLocation = (uint64_t)_signatureClass.FindSignature(disable_map);

	Signature combat_map = {
		"\xE8\xFF\xFF\xFF\xFF\x84\xC0\x75\xFF\x38\x83\xFF\xFF\xFF\xFF\x75\xFF\x83\xE7\xFE",
		"x????xxx?xx????x?xxx",
		20,
		0,
	};
	DebugMan->CloseMapInCombatLocation = (uint64_t)_signatureClass.FindSignature(combat_map);

	/*Signature disable_crafting = {
		"\xE8\xFF\xFF\xFF\xFF\x84\xC0\x0F\x94\xC0\x48\x83\xC4\xFF\xC3",
		"x????xxxxxxxx?x",
		15,
		0,
	};*/
	Signature disable_crafting = {
	"\x48\x83\xEC\xFF\x48\x8B\x0D\xFF\xFF\xFF\xFF\x48\x85\xC9\x75\xFF\x48\x8D\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x4C\x8B\xC8\x4C\x8D\x05\xFF\xFF\xFF\xFF\xBA\xB4\x00\x00\x00\x48\x8D\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x48\x8B\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x84\xC0\x0F\x94\xC0\x48\x83\xC4\xFF\xC3",
	"xxx?xxx????xxxx?xxx????x????xxxxxx????xxxxxxxx????x????xxx????x????xxxxxxxx?x",
	77,
	62,
	};

	DebugMan->DisableCrafingInCombatLocation = (uint64_t)_signatureClass.FindSignature(disable_crafting);

	return EventMan->EventMan && EventMan->SetEventFlagAddress && EventMan->IsEventFlagAddress && DebugMan->DisableOpenMapInCombatLocation && DebugMan->CloseMapInCombatLocation && DebugMan->DisableCrafingInCombatLocation;
}

bool SigScan::GetImageInfo() {

	bool bSuccess = false;

	_moduleHandle = GetModuleHandleA("eldenring.exe");
	if (_moduleHandle) {
		MEMORY_BASIC_INFORMATION memInfo;
		if (VirtualQuery((void*)_moduleHandle, &memInfo, sizeof(memInfo)) != 0) {
			IMAGE_DOS_HEADER* hDos = (IMAGE_DOS_HEADER*)_moduleHandle;
			IMAGE_NT_HEADERS* hPe = (IMAGE_NT_HEADERS*)((ULONG64)memInfo.AllocationBase + (ULONG64)hDos->e_lfanew);

			if ((hDos->e_magic == IMAGE_DOS_SIGNATURE) && (hPe->Signature == IMAGE_NT_SIGNATURE)) {
				bSuccess = true;
				_baseAddress = (void*)memInfo.AllocationBase;
				_imageSize = (SIZE_T)hPe->OptionalHeader.SizeOfImage;
			}
		}
	}

	return bSuccess;
};

void* SigScan::FindSignature(Signature& fnSig) {

	char* pScan = (char*)_baseAddress;
	char* max_address = pScan + _imageSize - fnSig.length;
	SIZE_T iMaxLength = 0;

	while (pScan < max_address) {
		SIZE_T szLength = 0;

		for (SIZE_T i = 0; i < fnSig.length; i++) {
			if (!((pScan[i] == fnSig.signature[i]) || (fnSig.mask[i] == '?'))) break;
			szLength++;
		}

		if (szLength > iMaxLength) iMaxLength = (INT)szLength;
		if (szLength == fnSig.length) return pScan + fnSig.ret;

		pScan++;
	}

	return nullptr;
};