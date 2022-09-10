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
	static inline DisableBossBar DisableBossBarOriginal = nullptr;
	static inline HandleDamage HandleDamageOriginal = nullptr;
	static inline FeManCtor FeManCtorOriginal = nullptr;
	static inline EnemyInsDtor EnemyInsDtorOriginal = nullptr;
	static inline UpdateUIBarStructs UpdateUIBarStructsOriginal = nullptr;
	GetChrInsFromEntityId* GetChrInsFromEntityIdFunc = nullptr;
	CSFeManImp** CSFeMan;
	uintptr_t _enableBossBarAddr = 0;
	uintptr_t _disableBossBarAddr = 0;
	uintptr_t _applyBossBarDmg = 0;
	uintptr_t _applyEntityBarDmg = 0;
	uintptr_t _feManCtor = 0;
	uintptr_t _enemyInsDtor = 0;
	uintptr_t _updateUIBarStructs = 0;
	uintptr_t _handleDmg = 0;
	uintptr_t _executeActionButtonParamProxy = 0;
	uintptr_t _actionButtonParamImp = 0;
	std::vector<int> autoPickupList;
	std::vector<int> lockPickupList;

private:
	static void feManCtor(CSFeManImp* feManImp, uintptr_t gameRend, uintptr_t menuMan);
	static void enemyInsDtor(ChrIns* enemyIns, uintptr_t unk);
	static void updateUIBarStructs(uintptr_t moveMapStep, uintptr_t time);
	bool enableUpdateHooks();
	bool _updateHooksEnabled = false;
	static void enableBossBar(int* entityId, int bossBarIndex, int displayId);
	static void disableBossBar(int bossBarIndex);
	static void handleDamage(ChrDamageModule* chrDamageModule, int damage, char param_3, char param_4, uint32_t param_5, bool param_6);
	static void writePoiseToBossBar();
	static void writePoiseToEntityBar();
};

