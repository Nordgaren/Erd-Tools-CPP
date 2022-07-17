#include "../Include/ErdHook.h"

bool ErdHook::create_memory_edits() {
	minhook_active = MH_Initialize();
	if (minhook_active != MH_OK) {
		throw std::runtime_error("MH_Initialize != MH_OK");
	}

	if (!find_needed_signatures()) {
		throw std::runtime_error("Failed to find function signatures");
	}

	return true;
}


bool ErdHook::find_needed_signatures() {
	if (!signature_class.get_image_info()) {
		//
		return false;
	}

	Signature set_event = {
		"\xFF\xFF\xFF\xFF\xFF\x48\x89\x74\x24\x18\x57\x48\x83\xEC\x30\x48\x8B\xDA\x41\x0F\xB6\xF8\x8B\x12\x48\x8B\xF1\x85\xD2\x0F\x84\xFF\xFF\xFF\xFF\x45\x84\xC0",
		"?????xxxxxxxxxxxxxxxxxxxxxxxxxx????xxx",
		38,
		0,
	};
	set_event_flag_address = (uint64_t)signature_class.find_signature(set_event);

	Signature disable_map = {
	"\x74\xFF\xC7\x45\x38\x58\x02\x00\x00\xC7\x45\x3C\x02\x00\x00\x00\xC7\x45\x40\x01\x00\x00\x00\x48\xFF\xFF\xFF\xFF\xFF\xFF\x48\x89\x45\x48\x48\x8D\x4D\x38\xE8\xFF\xFF\xFF\xFF\xE9",
	"x?xxxxxxxxxxxxxxxxxxxxxx??????xxxxxxxxx????x",
	44,
	0,
	};
	disable_open_map = (uint64_t)signature_class.find_signature(disable_map);

	Signature combat_map = {
"\xE8\xFF\xFF\xFF\xFF\x84\xC0\x75\xFF\x38\x83\xFF\xFF\xFF\xFF\x75\xFF\x83\xE7\xFE",
"x????xxx?xx????x?xxx",
20,
0,
	};
	combat_close_map = (uint64_t)signature_class.find_signature(combat_map);

	return set_event_flag_address && disable_open_map && combat_close_map;
}

bool SigScan::get_image_info() {

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

void* SigScan::find_signature(Signature& fnSig) {

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