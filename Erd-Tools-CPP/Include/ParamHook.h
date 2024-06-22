#pragma once
#include "Common.h"
#include "ErdTools_globals.h"

struct SoloParamRepository;

class ParamHook
{
public:
	void InitPlayerCommonParam();
	void EnableVanillaPickupAnimations(bool edit) const;
	void InitParamTools();
	void RemoveActionButtonParamMultipliers();
	void ABParam_ApplyWidthMultiplier(std::vector<int> paramIds, float multiplier);
	void ABParam_ApplyHeightMultiplier(std::vector<int> paramIds, float multiplier);
	void ABParam_RemoveWidthMultiplier(std::vector<int> paramIds, float multiplier);
	void ABParam_RemoveHeightMultiplier(std::vector<int> paramIds, float multiplier);
	void InitMenuCommonParam();
	void UpdateMenuCommonParam();
	void ApplyActionButtonParamMultipliers();
	void EditEquipParamWeapon();
	void EditEquipParamGoods();
	void EnablePersistentLantern();
	uint64_t GetParamResCapByName(uint64_t soloParamRepository, std::wstring paramName);
	void PrintParamResCapEnum(uint64_t soloParamRepository);
	SoloParamRepository** SoloParamRepositoryAddress = 0;
	FindEquipParamWeaponEntry* FindEquipParamWeaponFunc = nullptr;
	FindEquipParamProtectorEntry* FindEquipParamProtectorFunc = nullptr;
	FindEquipParamGoodsEntry* FindEquipParamGoodsFunc = nullptr;
	FindEquipMtrlSetParamEntry* FindEquipMtrlSetParamFunc = nullptr;
	GetMenuCommonParamEntry* GetMenuCommonParamEntry = nullptr;
	FindActionButtonParamEntry* FindActionButtonParamEntry = nullptr;
	float _mapSpeedMultiplier = 1.0;
	float _originalMapSpeed = 0.0;
		
	float _widthMultiplier_AutoHarvest = 1.0;
	float _heightMultiplier_AutoHarvest = 1.0;
	float _widthMultiplier_ItemPickup = 1.0;
	float _heightMultiplier_ItemPickup = 1.0;
	float _widthMultiplier_CorpseLoot = 1.0;
	float _heightMultiplier_CorpseLoot = 1.0;
	float _widthMultiplier_LostRunesRange = 1.0;
	float _heightMultiplier_LostRunesRange = 1.0;
	
	bool _removeWepStatRequirements = false;
	bool _persistentLantern = false;
	uint32_t _originalAnimeID_DropItemPick;
	uint32_t _originalAnimeID_SleepCollectorItemPick;
	uint32_t _originalAnimeID_MaterialItemPick;

	ParamHook() {
	}
	~ParamHook() {
	}

private:

};

