#include "../Include/ParamHook.h"

#include "../Include/ErdToolsMain.h"
#include "../param/ActionButtonParam.h"
#include "../param/EquipParamWeapon.h"
#include "../param/EquipParamGoods.h"
#include "../param/PlayerCommonParam.h"
#include "../param/SpEffectParam.h"
#include "../Util/ParamEditor.h"

#define ACQUIRE_MATERIAL_START 7800
#define ACQUIRE_MATERIAL_END 7879

extern ErdToolsMain* main_mod;

void ParamHook::EditPlayerCommonParam() const {
	ParamEditor<PlayerCommonParam> pEditor(SoloParamRepositoryAddress);

	PlayerCommonParam *pParam = pEditor.RetrieveEntry(0);
	pParam->animeID_DropItemPick = 60070;
	pParam->animeID_SleepCollectorItemPick = 50250;
	pParam->animeID_MaterialItemPick = 999999;
}

void ParamHook::InitParamTools() {

	using namespace std::chrono_literals;

	while (!*SoloParamRepositoryAddress) {
		std::this_thread::sleep_for(5s);
	}
	
    SoloParamRepository *soloParamRepository = *SoloParamRepositoryAddress;
    while (!soloParamRepository->repositoryEntries[0xB9].paramLoaded) {
        std::this_thread::sleep_for(5s);
    }

	EditMenuCommonParam();
	if (main_mod->Preferences & vanilla_pickup_animations) {
		EditPlayerCommonParam();
	}

	ABParam_ApplyWidthMultiplier(ABParam_list_materials, _widthMultiplier_AutoHarvest);
	ABParam_ApplyWidthMultiplier(ABParam_list_items, _widthMultiplier_ItemPickup);
	ABParam_ApplyWidthMultiplier(ABParam_list_corpse_loot, _widthMultiplier_CorpseLoot);
	ABParam_ApplyWidthMultiplier(ABParam_list_lost_runes, _widthMultiplier_LostRunesRange);

	ABParam_ApplyHeightMultiplier(ABParam_list_materials, _heightMultiplier_AutoHarvest);
	ABParam_ApplyHeightMultiplier(ABParam_list_items, _heightMultiplier_ItemPickup);
	ABParam_ApplyHeightMultiplier(ABParam_list_corpse_loot, _heightMultiplier_CorpseLoot);
	ABParam_ApplyHeightMultiplier(ABParam_list_lost_runes, _heightMultiplier_LostRunesRange);

	if (_removeWepStatRequirements)
		EditEquipParamWeapon();

	if (_permanentLantern)
		EnablePermanentLantern();
	//PrintParamResCapEnum(solo_param_repository_ld); 

}
void ParamHook::EditEquipParamWeapon() {
	
	ParamEditor<EquipParamWeapon> pEditor(SoloParamRepositoryAddress);

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

void ParamHook::ABParam_ApplyWidthMultiplier(std::vector<int> paramIds, float multiplier) {

	for (unsigned int i = 0; i < paramIds.size(); i++) {
		ActionButtonParamParamContainer buttonContainer = ActionButtonParamParamContainer();
		std::invoke(FindActionButtonParamEntry, &buttonContainer, paramIds[i]);
		ActionButtonParam* actionParam = buttonContainer.param_entry;
		if (actionParam != nullptr)
			actionParam->radius *= multiplier;
	}
}

void ParamHook::ABParam_ApplyHeightMultiplier(std::vector<int> paramIds, float multiplier) {

	for (unsigned int i = 0; i < paramIds.size(); i++) {
		ActionButtonParamParamContainer buttonContainer = ActionButtonParamParamContainer();
		std::invoke(FindActionButtonParamEntry, &buttonContainer, paramIds[i]);
		ActionButtonParam* actionParam = buttonContainer.param_entry;
		if (actionParam != nullptr)
			actionParam->height *= multiplier;
			actionParam->baseHeightOffset *= multiplier;
	}
}


void ParamHook::EditMenuCommonParam() {

	MenuCommonParamParamContainer menuContainer = MenuCommonParamParamContainer();
	std::invoke(main_mod->Hook.ParamMan->GetMenuCommonParamEntry, &menuContainer);
	menuContainer.param_entry->worldMapCursorSpeed *= _mapSpeedMultiplier;
}

void ParamHook::EnablePermanentLantern() {
	ParamEditor<SpEffectParam> pEditor(SoloParamRepositoryAddress);
	SpEffectParam *pParam = pEditor.RetrieveEntry(3245);

	pParam->saveCategory = 0;
}

uint64_t ParamHook::GetParamResCapByName(uint64_t soloParamRepository, std::wstring paramName) {
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
