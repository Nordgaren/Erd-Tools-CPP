#include "../Include/ParamHook.h"

#include "../Include/ErdToolsMain.h"
#include "../Util/ParamEditor.h"
#include"../param/EquipParamWeapon.h"

#define AQCUIRE_MATERIAL_START 7800
#define AQCUIRE_MATERIAL_END 7879

extern ErdToolsMain* main_mod;

void ParamHook::InitParamTools() {

	using namespace std::chrono_literals;

	uint64_t solo_param_repository_ld = *(uint64_t*)(SoloParamRepository);
	while (!solo_param_repository_ld) {
		solo_param_repository_ld = *(uint64_t*)(SoloParamRepository);
		std::this_thread::sleep_for(1s);
	}
	// As a standard, make sure this param is loaded already
	uint64_t itemlotparam_map = *(uint64_t*)(solo_param_repository_ld + 0x3448);
	while (!itemlotparam_map) {
		itemlotparam_map = *(uint64_t*)(solo_param_repository_ld + 0x3448);
		std::this_thread::sleep_for(1s);
	}

	EditMenuCommonParam();

	EditActionButtonParam();

	if (_removeWepStatRequirements)
		EditEquipParamWeapon();

	//PrintParamResCapEnum(solo_param_repository_ld); 

}
void ParamHook::EditEquipParamWeapon() {
	
	ParamEditor<EquipParamWeapon> pEditor(*(uint64_t*)SoloParamRepository);

	ParamHeader *header = pEditor.GetParamHeader();
	EquipParamWeapon *pParam = pEditor.GetParamDataPtr();

	for (int i = 0; i < header->RowCount; i++) {
		pParam[i].attainmentWepStatusStr = 0;
		pParam[i].attainmentWepStatusDex = 0;
		pParam[i].attainmentWepStatusMag = 0;
		pParam[i].attainmentWepStatusFai = 0;
		pParam[i].attainmentWepStatusLuc = 0;
		pParam[i].properStrength = 0;
		pParam[i].properAgility = 0;
		pParam[i].properMagic = 0;
		pParam[i].properFaith = 0;
		pParam[i].properLuck = 0;
	}
	
}

void ParamHook::EditActionButtonParam() {

	for (unsigned int i = AQCUIRE_MATERIAL_START; i < AQCUIRE_MATERIAL_END; i++) {
		ActionButtonParamParamContainer buttonContainer = ActionButtonParamParamContainer();
		std::invoke(FindActionButtonParamEntry, &buttonContainer, i);
		ActionButtonParam* actionParam = buttonContainer.param_entry;

		if (actionParam != nullptr)
			actionParam->radius *= _autoHarvestMultiplier;
	}
}

void ParamHook::EditMenuCommonParam() {

	MenuCommonParamParamContainer menuContainer = MenuCommonParamParamContainer();
	std::invoke(main_mod->Hook.ParamMan->GetMenuCommonParamEntry, &menuContainer);
	menuContainer.param_entry->worldMapCursorSpeed *= _mapSpeedMultiplier;
}

uint64_t ParamHook::GetParamResCapByName(uint64_t soloParamRepository, std::wstring paramName) {
	for (int i = 0; i < 185; i++) {
		int paramOffset = i * 0x48;
		int* param = (int*)(soloParamRepository + paramOffset + 0x80);
		if (*param > 0) {
			uint64_t paramContainer = *(uint64_t*)(soloParamRepository + paramOffset + 0x88);
			wchar_t* containerName = (wchar_t*)(paramContainer + 0x18);
			//small string optimization? fbstring?!?!
			if (*(uint32_t*)(paramContainer + 0x28) >= 8) {
				containerName = (wchar_t*)(*(uint64_t*)containerName);
			}

			if (wcsncmp(paramName.c_str(), containerName, paramName.size()) == 0) {
				return paramContainer;
			}
		}
	}
	return 0;
}

void ParamHook::PrintParamResCapEnum(uint64_t soloParamRepository) {

	printf("\nParamIndex {\n");
	for (int i = 0; i < 186; i++) {
		int paramOffset = i * 0x48;
		int* param = (int*)(soloParamRepository + paramOffset + 0x80);
		if (*param > 0) {
			uint64_t paramContainer = *(uint64_t*)(soloParamRepository + paramOffset + 0x88);
			wchar_t* containerName = (wchar_t*)(paramContainer + 0x18);
			//small string optimization? fbstring?!?!
			if (*(uint32_t*)(paramContainer + 0x28) >= 8) {
				containerName = (wchar_t*)(*(uint64_t*)containerName);
			}

			printf("\t%ws = 0x%x,\n", containerName, i);
		}
	}
	
	printf("\n}\n");
}
