#pragma once
#include "Common.h"
#include "ErdTools_globals.h"


class FeHook
{
public:
	bool EnableBossPoiseMeter();
	bool EnableEntityPoiseMeter();
	bool EnableLootChangeHook();
	void EnableLootPrefs();
	LootPreferences LootPrefs = no_loot_changes;
	static inline bool BossBarPoiseMeterEnabled = false;
	static inline ApplyEntityBarDamage ApplyEntityBarDamageOriginal = nullptr;
	static inline UpdateUIBarStructs UpdateUIBarStructsOriginal = nullptr;
	GetChrInsFromEntityId* GetChrInsFromEntityIdFunc = nullptr;
	CSFeManImp** CSFeMan;
	uintptr_t _applyEntityBarDmg = 0;
	uintptr_t _updateUIBarStructs = 0;
	uintptr_t _executeActionButtonParamProxy = 0;
	uintptr_t _actionButtonParamImp = 0;
	std::vector<int> autoPickupList;
	std::vector<int> lockPickupList;
	//unused right now
	uintptr_t _getBossBarPtr = 0;
	uintptr_t _applyBossBarDmg = 0;
	uintptr_t _enableBossBarAddr = 0;
	uintptr_t _disableBossBarAddr = 0;
	uintptr_t _feManCtor = 0;
	uintptr_t _enemyInsDtor = 0;
	uintptr_t _chrInsDtor = 0;
	uintptr_t _handleDmg = 0;
private:
	static void updateUIBarStructs(uintptr_t moveMapStep, uintptr_t time);
	bool enableUpdateHooks();
	bool _updateHooksEnabled = false;
	static void applyEntityBarDmgHook(EntityHpBar* entityHealthBarStruct, uint64_t chrInsHandle, int32_t damage, uint32_t unk,
						   bool skipSetDamage);
	static void writePoiseToBossBar();
	static void writePoiseToEntityBar();
};

