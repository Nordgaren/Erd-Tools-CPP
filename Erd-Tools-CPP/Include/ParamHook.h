#pragma once
#include "Common.h"
#include "ErdTools_globals.h"

class ParamHook
{
public:
	void InitParamTools();
	void EditActionButtonParam();
	void EditMenuCommonParam();
	void EditEquipParamWeapon();
	uint64_t GetParamResCapByName(uint64_t soloParamRepository, std::wstring paramName);
	void PrintParamResCapEnum(uint64_t soloParamRepository);
	uintptr_t SoloParamRepository = 0;
	FindEquipParamWeaponEntry* FindEquipParamWeaponFunc = nullptr;
	FindEquipParamProtectorEntry* FindEquipParamProtectorFunc = nullptr;
	FindEquipParamGoodsEntry* FindEquipParamGoodsFunc = nullptr;
	FindEquipMtrlSetParamEntry* FindEquipMtrlSetParamFunc = nullptr;
	GetMenuCommonParamEntry* GetMenuCommonParamEntry = nullptr;
	FindActionButtonParamEntry* FindActionButtonParamEntry = nullptr;
	float _autoHarvestMultiplier = 1.0;
	float _mapSpeedMultiplier = 1.0;
	bool _removeWepStatRequirements = false;
	ParamHook() {
	}
	~ParamHook() {
	}

private:

};

