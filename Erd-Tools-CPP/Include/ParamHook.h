#pragma once
#include "Common.h"
#include "ErdTools_globals.h"

class ParamHook
{
public:
	void InitParamTools();
	void ApplyABParamRangeMultiplier(std::vector<int> paramIds, float multiplier);
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
	float _mapSpeedMultiplier = 1.0;
	bool _removeWepStatRequirements = false;
	float _rangeAutoHarvestMultiplier = 1.0;
	float _rangeItemPickupMultiplier = 1.0;
	float _rangeCorpseLootMultiplier = 1.0;
	float _rangeLostRunesRangeMultiplier = 1.0;

	ParamHook() {
	}
	~ParamHook() {
	}

private:

};

