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
	static inline HandleDamage HandleDamageOriginal = nullptr;
	GetChrInsFromEntityId* GetChrInsFromEntityIdFunc = nullptr;
	CSFeManImp** CSFeMan;
	uintptr_t _enableBossBarAddr = 0;
	uintptr_t _applyBossBarDmg = 0;
	uintptr_t _applyEntityBarDmg = 0;
	uintptr_t _handleDmg = 0;
	uintptr_t _executeActionButtonParamProxy = 0;
	uintptr_t _actionButtonParamImp = 0;
	//static int ExecActionButtonParam(int entryId);
	std::vector<int> autoPickupList;
	std::vector<int> lockPickupList;

private:
	static void enableBossBar(int* entityId, int bossBarIndex, int displayId);
	static void handleDamage(ChrDamageModule* chrDamageModule, int damage, char param_3, char param_4, uint32_t param_5, bool param_6);
	static void writePoiseToBossBar();
	void writePoiseToEntityBar();
};

