#pragma once
#include "Common.h"
#include "ErdTools_globals.h"

class ParamHook
{
public:
	void InitParamTools();
	void EditActionButtonParam();
	void EditMenuCommonParam();
	uint64_t GetParamResCapByName(uint64_t soloParamRepository, std::wstring paramName);
	uintptr_t SoloParamRepository = 0;
	FindEquipParamWeaponEntry* FindEquipParamWeaponFunc = nullptr;
	FindEquipParamProtectorEntry* FindEquipParamProtectorFunc = nullptr;
	FindEquipParamGoodsEntry* FindEquipParamGoodsFunc = nullptr;
	FindEquipMtrlSetParamEntry* FindEquipMtrlSetParamFunc = nullptr;
	GetMenuCommonParamEntry* GetMenuCommonParamEntry = nullptr;
	FindActionButtonParamEntry* FindActionButtonParamEntry = nullptr;
	uintptr_t _soloParamRepositoryAddr = 0;
	float _autoHarvestMultiplier = 1.0;
	float _mapSpeedMultiplier = 1.0;
	ParamHook() {
		
	}
	~ParamHook() {
		printf("ParamHook Destroy'd \n");
	}

private:

};

