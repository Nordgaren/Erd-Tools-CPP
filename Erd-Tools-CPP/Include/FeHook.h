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
	static inline EnableBossBar EnableBossBarOriginal = nullptr;
	static inline bool EnableBossBar = false;
	static inline DisableBossBar DisableBossBarOriginal = nullptr;
	static inline HandleDamage HandleDamageOriginal = nullptr;
	static inline ApplyEntityBarDamage ApplyEntityBarDamageOriginal = nullptr;
	static inline FeManCtor FeManCtorOriginal = nullptr;
	static inline ChrInsDtor ChrInsDtorOriginal = nullptr;
	static inline UpdateUIBarStructs UpdateUIBarStructsOriginal = nullptr;
	GetChrInsFromEntityId* GetChrInsFromEntityIdFunc = nullptr;
	CSFeManImp** CSFeMan;
	uintptr_t _getBossBarPtr = 0;
	uintptr_t _enableBossBarAddr = 0;
	uintptr_t _disableBossBarAddr = 0;
	uintptr_t _applyBossBarDmg = 0;
	uintptr_t _applyEntityBarDmg = 0;
	uintptr_t _feManCtor = 0;
	uintptr_t _enemyInsDtor = 0;
	uintptr_t _chrInsDtor = 0;
	uintptr_t _updateUIBarStructs = 0;
	uintptr_t _handleDmg = 0;
	uintptr_t _executeActionButtonParamProxy = 0;
	uintptr_t _actionButtonParamImp = 0;
	std::vector<int> autoPickupList;
	std::vector<int> lockPickupList;

private:
	static void feManCtor(CSFeManImp* feManImp, uintptr_t gameRend, uintptr_t menuMan);
	static void chrInsDtor(ChrIns* enemyIns);
	static void updateUIBarStructs(uintptr_t moveMapStep, uintptr_t time);
	bool enableUpdateHooks();
	bool _updateHooksEnabled = false;
	static void enableBossBarHook(int* entityId, int bossBarIndex, int displayId);
	static void disableBossBarHook(int bossBarIndex);
	static void handleDamage(ChrDamageModule* chrDamageModule, int damage, char param_3, char param_4, uint32_t param_5, bool param_6);
	static void applyEntityBarDmgHook(EntityHpBar* entityHealthBarStruct, uint64_t chrInsHandle, int32_t damage, uint32_t unk,
						   bool skipSetDamage);
	static void writePoiseToBossBar();
	static void writePoiseToEntityBar();
};

