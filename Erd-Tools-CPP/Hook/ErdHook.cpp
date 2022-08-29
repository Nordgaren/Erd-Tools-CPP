#include "../Include/ErdHook.h"

bool ErdHook::CreateMemoryEdits() {
	_minhookActive = MH_Initialize();
	if (_minhookActive != MH_OK) {
		throw std::runtime_error("MH_Initialize != MH_OK");
	}

	if (!FindNeededSignatures()) {
		printf("Find Sig Failed");
		//throw std::runtime_error("Failed to find function signatures");
	}

	if constexpr (DEBUG_CONSOLE) debugPrint();

	return true;
}

uint64_t ErdHook::GetRelativeOffset(void* pointer, int address_offset, int instruction_size) {
	uint64_t relativeAddr = (uint64_t)pointer;
	int offset = *(int*)(relativeAddr + address_offset);
	relativeAddr += offset + instruction_size;
	return relativeAddr;
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
		0,
	};
	void* result = _signatureClass.FindSignature(event_man);
	uint64_t relativeAddr = GetRelativeOffset(result, 0x3, 0x7);
	EventHook::EventMan = (uint64_t*)relativeAddr;

	Signature set_event = {
		"\xFF\xFF\xFF\xFF\xFF\x48\x89\x74\x24\x18\x57\x48\x83\xEC\x30\x48\x8B\xDA\x41\x0F\xB6\xF8\x8B\x12\x48\x8B\xF1\x85\xD2\x0F\x84\xFF\xFF\xFF\xFF\x45\x84\xC0",
		"?????xxxxxxxxxxxxxxxxxxxxxxxxxx????xxx",
		0,
	};
	EventMan->SetEventFlagAddress = (uint64_t)_signatureClass.FindSignature(set_event);

	Signature is_event = {
		"\x48\x83\xEC\x28\x8B\x12\x85\xD2",
		"xxxxxxxx",
		0,
	};
	EventMan->IsEventFlagAddress = (uint64_t)_signatureClass.FindSignature(is_event);
	*(void**)&EventHook::IsEventFlag = (void*)EventMan->IsEventFlagAddress;

	Signature disable_map = {
		"\x74\xFF\xC7\x45\x38\x58\x02\x00\x00\xC7\x45\x3C\x02\x00\x00\x00\xC7\x45\x40\x01\x00\x00\x00\x48\xFF\xFF\xFF\xFF\xFF\xFF\x48\x89\x45\x48\x48\x8D\x4D\x38\xE8\xFF\xFF\xFF\xFF\xE9",
		"x?xxxxxxxxxxxxxxxxxxxxxx??????xxxxxxxxx????x",
		0,
	};
	DebugMan->DisableOpenMapInCombatLocation = (uint64_t)_signatureClass.FindSignature(disable_map);

	Signature combat_map = {
		"\xE8\xFF\xFF\xFF\xFF\x84\xC0\x75\xFF\x38\x83\xFF\xFF\xFF\xFF\x75\xFF\x83\xE7\xFE",
		"x????xxx?xx????x?xxx",
		0,
	};
	DebugMan->CloseMapInCombatLocation = (uint64_t)_signatureClass.FindSignature(combat_map);

	Signature disable_crafting = {
	"\x48\x83\xEC\xFF\x48\x8B\x0D\xFF\xFF\xFF\xFF\x48\x85\xC9\x75\xFF\x48\x8D\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x4C\x8B\xC8\x4C\x8D\x05\xFF\xFF\xFF\xFF\xBA\xB4\x00\x00\x00\x48\x8D\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x48\x8B\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x84\xC0\x0F\x94\xC0\x48\x83\xC4\xFF\xC3",
	"xxx?xxx????xxxx?xxx????x????xxxxxx????xxxxxxxx????x????xxx????x????xxxxxxxx?x",
	62,
	};

	DebugMan->DisableCrafingInCombatLocation = (uint64_t)_signatureClass.FindSignature(disable_crafting);

	DebugMan->AutoHarvestLocation = _signatureClass.PtrFromOffset(0x6C947D);

	Signature soloParamRepositorySig = {
		"\x48\x8B\x0D\xFF\xFF\xFF\xFF\x48\x85\xC9\x0F\x84\xFF\xFF\xFF\xFF\x45\x33\xC0\xBA\x90",
		"xxx????xxxxx????xxxxx",
	};
	ParamMan->_soloParamRepositoryAddr = (uint64_t)_signatureClass.FindSignature(soloParamRepositorySig);
	ParamMan->SoloParamRepository = GetRelativeOffset((void*)ParamMan->_soloParamRepositoryAddr, 3, 7);

	Signature find_equipparamweapon_signature = {
			"\x40\x57\x41\x56\x41\x57\x48\x83\xEC\x40\x48\xC7\x44\x24\x20\xFE\xFF\xFF\xFF\x48\x89\x5C\x24\x60\x48\x89\x6C\x24\x68\x48\x89\x74\x24\x70\x8B",
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
	};
	ParamMan->FindEquipParamWeaponFunc = (FindEquipParamWeaponEntry*)_signatureClass.FindSignature(
		find_equipparamweapon_signature);

	Signature find_equipparamprotector_signature = {
			"\x41\x54\x41\x56\x41\x57\x48\x83\xEC\x40\x48\xC7\x44\x24\x20\xFE\xFF\xFF\xFF\x48\x89\x5C\x24\x60\x48\x89\x6C\x24\x68\x48\x89\x74\x24\x70\x48\x89\x7C\x24\x78\x8B\xEA\x4C\x8B\xF1\x33",
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
	};
	ParamMan->FindEquipParamProtectorFunc = (FindEquipParamProtectorEntry*)_signatureClass.FindSignature(
		find_equipparamprotector_signature);

	Signature find_equipparamgoods_signature = {
			"\x45\x33\xC0\x41\x8D\x50\x03\xE8\xFF\xFF\xFF\xFF\x48\x85\xC0\x0F\x84\xFF\xFF\xFF\xFF\x48\x8B\x80\x80\x00\x00\x00\x48\x8B\x90",
			"xxxxxxxx????xxxxx????xxxxxxxxxx",
	};
	ParamMan->FindEquipParamGoodsFunc = (FindEquipParamGoodsEntry*)(
		(uint64_t)_signatureClass.FindSignature(find_equipparamgoods_signature) - 103);

	Signature find_equipmtrlsetparam_signature = {
			"\x45\x33\xC0\x41\x8D\x50\x18\xE8\xFF\xFF\xFF\xFF\x48\x85\xC0\x0F\x84",
			"xxxxxxxx????xxxxx",
	};
	ParamMan->FindEquipMtrlSetParamFunc = (FindEquipMtrlSetParamEntry*)((uint64_t)_signatureClass.FindSignature(find_equipmtrlsetparam_signature) - 103);

	Signature get_menucommonparam_signature = {
			"\x40\x57\x48\x83\xEC\x40\x48\xC7\x44\x24\x20\xFE\xFF\xFF\xFF\x48\x89\x5C\x24\x50\x48\x8B\xF9\x33\xDB\x48\x89\x19\x48\x8B\x0D\xFF\xFF\xFF\xFF\x48\x85\xC9\x0F\x84\xCA\x00\x00\x00\x45\x33\xC0\xBA\x8F\x00\x00\x00",
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxx",
	};
	ParamMan->GetMenuCommonParamEntry = (GetMenuCommonParamEntry*)_signatureClass.FindSignature(get_menucommonparam_signature);

	Signature get_actionbuttonparam_signature = {
		"\x40\x57\x48\x83\xEC\x40\x48\xC7\x44\x24\x20\xFE\xFF\xFF\xFF\x48\x89\x5C\x24\x50\x48\x89\x6C\x24\x58\x48\x89\x74\x24\x60\x8B\xFA\x48\x8B\xF1\x33\xDB\x85\xD2\x0F\x88\x21\x01\x00\x00\x48\x8B\x0D\xFF\xFF\xFF\xFF\x48\x85\xC9\x75\xFF\x48\x8D\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x4C\x8B\xC8\x4C\x8D\x05\xFF\xFF\xFF\xFF\xBA\xB4\x00\x00\x00\x48\x8D\x0D\xFF\xFF\xFF\xFF\xE8\xFF\xFF\xFF\xFF\x48\x8B\x0D\xFF\xFF\xFF\xFF\x45\x33\xC0\x41\x8D\x50\x24",
		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxx?xxx????x????xxxxxx????xxxxxxxx????x????xxx????xxxxxxx",
	};
	ParamMan->FindActionButtonParamEntry = (FindActionButtonParamEntry*)_signatureClass.FindSignature(get_actionbuttonparam_signature);

	return EventMan && EventMan->SetEventFlagAddress && EventMan->IsEventFlagAddress && DebugMan->DisableOpenMapInCombatLocation
	&& DebugMan->CloseMapInCombatLocation && DebugMan->DisableCrafingInCombatLocation && ParamMan->_soloParamRepositoryAddr && ParamMan->FindEquipParamWeaponFunc && ParamMan->FindEquipParamProtectorFunc &&
		ParamMan->FindEquipParamGoodsFunc && ParamMan->FindEquipMtrlSetParamFunc && ParamMan->GetMenuCommonParamEntry && ParamMan->FindActionButtonParamEntry;
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
	size_t maskLen = strlen(fnSig.mask);

	char* pScan = (char*)_baseAddress;
	char* max_address = pScan + _imageSize - maskLen;
	while (pScan < max_address) {
		size_t szLength = 0;

		for (size_t i = 0; i < maskLen; i++) {
			if (!((pScan[i] == fnSig.signature[i]) || (fnSig.mask[i] == '?'))) break;
			szLength++;
		}

		if (szLength == maskLen) return pScan + fnSig.offset;

		pScan++;
	}

	return nullptr;
};


inline uint64_t SigScan::PtrFromOffset(uint64_t offset) {
	return ((uint64_t)_baseAddress) + offset;
}

void ErdHook::debugPrint() {
	
	printf("Ptrs: \n");
	printf("EventMan->EventMan: %p\n", EventMan->EventMan);
	printf("EventMan->SetEventFlagAddress  %p\n", EventMan->SetEventFlagAddress);
	printf("EventMan->IsEventFlagAddress  %p\n", EventMan->IsEventFlagAddress);
	printf("DebugMan->DisableOpenMapInCombatLocation  %p\n", DebugMan->DisableOpenMapInCombatLocation);
	printf("DebugMan->CloseMapInCombatLocation  %p\n", DebugMan->CloseMapInCombatLocation);
	printf("DebugMan->DisableCrafingInCombatLocation  %p\n", DebugMan->DisableCrafingInCombatLocation);
	printf("ParamMan->_soloParamRepositoryAddr   %p\n", ParamMan->_soloParamRepositoryAddr);
	printf("ParamMan->SoloParamRepository   %p\n", ParamMan->SoloParamRepository);
	printf("ParamMan->FindEquipParamWeaponFunc   %p\n", ParamMan->FindEquipParamWeaponFunc);
	printf("ParamMan->FindEquipParamProtectorFunc   %p\n", ParamMan->FindEquipParamProtectorFunc);
	printf("ParamMan->FindEquipParamGoodsFunc   %p\n", ParamMan->FindEquipParamGoodsFunc);
	printf("ParamMan->FindEquipMtrlSetParamFunc   %p\n", ParamMan->FindEquipMtrlSetParamFunc);
	printf("ParamMan->GetMenuCommonParamEntry   %p\n", ParamMan->GetMenuCommonParamEntry);
	printf("ParamMan->FindActionButtonParamEntry   %p\n", ParamMan->FindActionButtonParamEntry);

}

