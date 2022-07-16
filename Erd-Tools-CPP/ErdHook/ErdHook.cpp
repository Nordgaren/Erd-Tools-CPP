#include "../Include/ErdHook.h"

set_event_flag set_event_flag_original = nullptr;

bool ErdHook::create_memory_edits() {
	minhook_active = MH_Initialize();
	if (minhook_active != MH_OK) {
		throw std::runtime_error("MH_Initialize != MH_OK");
		return false;
	}

	if (!find_needed_signatures()) {
		throw std::runtime_error("Failed to find function signatures");
		return false;
	}

	DWORD old_protect = 0;
	if (MH_CreateHook((void*)set_event_flag_address, (LPVOID*)&set_event_flag_hook, (void**)&set_event_flag_original) == MH_OK) {
		MH_EnableHook((void*)set_event_flag_address);
		/*if (VirtualProtect((void*)set_event_flag_address, 8, PAGE_EXECUTE_READWRITE, &old_protect)) {
			uint8_t call_bytes = 0xE8;
			memcpy((void*)set_event_flag_address, &call_bytes, sizeof(call_bytes));
			VirtualProtect((void*)set_event_flag_address, 8, old_protect, &old_protect);
		}*/
		return true;
	}

	return false;
}

void set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value) {
	printf("Event Flag Set: %u %d\n", *event_id, event_value);
	set_event_flag_original(event_flag_man, event_id, event_value);
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

	return set_event_flag_address;
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
	INT iMaxLength = 0;

	while (pScan < max_address) {
		SIZE_T szLength = 0;

		for (INT i = 0; i < fnSig.length; i++) {
			if (!((pScan[i] == fnSig.signature[i]) || (fnSig.mask[i] == '?'))) break;
			szLength++;
		};

		if (szLength > iMaxLength) iMaxLength = (INT)szLength;
		if (szLength == fnSig.length) return pScan;

		pScan++;
	};

	return nullptr;
};