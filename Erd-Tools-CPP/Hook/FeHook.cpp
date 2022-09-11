#include "..\Include\FeHook.h"
#include "..\Include\ErdToolsMain.h"
#define BOSS_CHR_ARRAY_LEN 3
#define ENTITY_CHR_ARRAY_LEN 8

extern ErdToolsMain* main_mod;
extern "C" int ExecActionButtonParamProxyWrapper();
extern "C" uint64_t ExecuteActionButtonParamProxyReturn = 0;

bool FeHook::EnableBossPoiseMeter() {

	if (MH_CreateHook((void*)_enableBossBarAddr, &enableBossBar, (void**)&FeHook::EnableBossBarOriginal) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_enableBossBarAddr);

	if (MH_CreateHook((void*)_disableBossBarAddr, &disableBossBar, (void**)&FeHook::DisableBossBarOriginal) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_disableBossBarAddr);

	*(int*)_applyBossBarDmg = 0x909090C3;

	enableUpdateHooks();

	//std::thread t(&FeHook::writePoiseToBossBar);
	//t.detach();

	return true;
}

bool FeHook::EnableEntityPoiseMeter() {

	if (MH_CreateHook((void*)_handleDmg, &handleDamage, (void**)&FeHook::HandleDamageOriginal) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_handleDmg);
	*(int*)_applyEntityBarDmg = 0x909090C3;

	//std::thread t(&FeHook::writePoiseToEntityBar);
	//t.detach();
	enableUpdateHooks();

	return true;
}

bool FeHook::EnableLootChangeHook() {

	if (MH_CreateHook((void*)_executeActionButtonParamProxy, &ExecActionButtonParamProxyWrapper, (void**)&ExecuteActionButtonParamProxyReturn) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_executeActionButtonParamProxy);

	return true;
}

void FeHook::EnableLootPrefs() {

	if (LootPrefs & pickup_materials) {
		autoPickupList.insert(autoPickupList.end(),
			{ 7800, 7810, 7811, 7812, 7813, 7814, 7815, 7816, 7817, 7818, 7819, 7820, 7821, 7822, 7823, 7824, 7825, 7826, 7827, 7828, 7850, 7860,
				7861, 7862, 7863, 7864, 7865, 7866, 7867, 7868, 7869, 7870, 7871, 7872, 7873, 7874, 7875, 7876, 7877, 7878 });
	}
	if (LootPrefs & pickup_items) {
		autoPickupList.insert(autoPickupList.end(),
			{ 4000, 4110 ,4200, 4201, 4202, 4250, 4251, 4252, 4253, 4260, 4270, 4280, 4300, 4350, 6361, 9532 });
	}
	if (LootPrefs & pickup_corpse_loot) {
		autoPickupList.insert(autoPickupList.end(),
			{ 4100 });
	}
	if (LootPrefs & pickup_lost_runes) {
		autoPickupList.push_back(1000);
	}
	std::sort(autoPickupList.begin(), autoPickupList.end());

	if (LootPrefs & lock_materials) {
		lockPickupList.insert(lockPickupList.end(),
			{ 7800, 7810, 7811, 7812, 7813, 7814, 7815, 7816, 7817, 7818, 7819, 7820, 7821, 7822, 7823, 7824, 7825, 7826, 7827, 7828, 7850, 7860,
				7861, 7862, 7863, 7864, 7865, 7866, 7867, 7868, 7869, 7870, 7871, 7872, 7873, 7874, 7875, 7876, 7877, 7878 });
	}
	if (LootPrefs & lock_items) {
		lockPickupList.insert(lockPickupList.end(),
			{ 4000, 4110 ,4200, 4201, 4202, 4250, 4251, 4252, 4253, 4260, 4270, 4280, 4300, 4350, 6361, 9532 });
	}
	if (LootPrefs & lock_corpse_loot) {
		lockPickupList.push_back(4100);
	}
	if (LootPrefs & lock_lost_runes) {
		lockPickupList.push_back(1000);
	}
	if (LootPrefs & lock_grace_unlocks) {
		lockPickupList.push_back(6100);
	}
	if (LootPrefs & lock_grace_resting) {
		lockPickupList.push_back(6101);
	}
	std::sort(lockPickupList.begin(), lockPickupList.end());

	if (!autoPickupList.empty() || !lockPickupList.empty()) {
		EnableLootChangeHook();
	}
}

ChrIns* bossChrInsArray[BOSS_CHR_ARRAY_LEN];

void FeHook::writePoiseToBossBar() {
	using namespace std::chrono_literals;

	CSFeManImp* feMan = *main_mod->Hook.FeMan->CSFeMan;
	for (int i = 0; i < BOSS_CHR_ARRAY_LEN; i++) {

		if (feMan->bossHpBars[i].bossHandle != __UINT64_MAX__ && bossChrInsArray[i] != nullptr) {

			float stagger = bossChrInsArray[i]->chrModulelBag->staggerModule->staggerMax - bossChrInsArray[i]->chrModulelBag->staggerModule->stagger;
			int staggerInt = (int)bossChrInsArray[i]->chrModulelBag->staggerModule->stagger;
			if (stagger > 0) {
				feMan->bossHpBars[i].currentDisplayDamage = staggerInt;
				feMan->bossHpBars[i].isHit = true;
			} else if (feMan->bossHpBars[i].displayTime > 0 && feMan->bossHpBars[i].currentDisplayDamage != staggerInt) {
				feMan->bossHpBars[i].currentDisplayDamage = staggerInt;
				feMan->bossHpBars[i].isHit = true;
			}
		}
	}
}

void FeHook::enableBossBar(int* entityId, int bossBarIndex, int displayId) {

	//prevent an oops
	if (bossBarIndex >= BOSS_CHR_ARRAY_LEN)
		return;

	bossChrInsArray[bossBarIndex] = main_mod->Hook.FeMan->GetChrInsFromEntityIdFunc(entityId, 0, nullptr);
	EnableBossBarOriginal(entityId, bossBarIndex, displayId);

}

void FeHook::disableBossBar(int bossBarIndex) {

	//prevent an oops
	if (bossBarIndex >= BOSS_CHR_ARRAY_LEN)
		return;

	bossChrInsArray[bossBarIndex] = nullptr;
	DisableBossBarOriginal(bossBarIndex);

}

EntityHpBarSlots entityPoiseArray[ENTITY_CHR_ARRAY_LEN];

void FeHook::writePoiseToEntityBar() {
	using namespace std::chrono_literals;

	CSFeManImp* feMan = *main_mod->Hook.FeMan->CSFeMan;

	for (int i = 0; i < ENTITY_CHR_ARRAY_LEN; i++) {

		if (feMan->entityHpBars[i].entityHandle != __UINT64_MAX__ && entityPoiseArray->handle != __UINT64_MAX__) {
			StaggerModule* staggerModule = entityPoiseArray[i].chrIns->chrModulelBag->staggerModule;
			feMan->entityHpBars[i].entityHandle = entityPoiseArray[i].handle;
			if (staggerModule->staggerMax == -1.0f) {
				entityPoiseArray[i].handle = __UINT64_MAX__;
				entityPoiseArray[i].chrIns = nullptr;
				continue;
			}

			float stagger = staggerModule->staggerMax - staggerModule->stagger;
			int staggerInt = (int)entityPoiseArray[i].chrIns->chrModulelBag->staggerModule->stagger;
			if (stagger > 0) {
				feMan->entityHpBars[i].totalTimeDisplayed = 0.0f;
				feMan->entityHpBars[i].currentDisplayDamage = staggerInt;
			} else if (feMan->entityHpBars[i].currentDisplayDamage != staggerModule->staggerMax) {
				feMan->entityHpBars[i].totalTimeDisplayed = 0.0f;
				feMan->entityHpBars[i].currentDisplayDamage = staggerInt;
				entityPoiseArray[i].handle = __UINT64_MAX__;
				entityPoiseArray[i].chrIns = nullptr;
			}
		}
	}

}


void FeHook::handleDamage(ChrDamageModule* chrDamageModule, int damage, char param_3, char param_4, uint32_t param_5, bool param_6) {

	if (damage > 0 && chrDamageModule->chrModuleBase.owningChrIns != nullptr && chrDamageModule->chrModuleBase.owningChrIns->handle != 0xFFFFFFFF16600000) {
		bool found = false;
		for (int i = 0; i < BOSS_CHR_ARRAY_LEN; ++i) {
			if ((*main_mod->Hook.FeMan->CSFeMan)->bossHpBars[i].bossHandle == chrDamageModule->chrModuleBase.owningChrIns->handle) {
				found = true;
				break;
			}
		}

		for (int i = 0; i < ENTITY_CHR_ARRAY_LEN; ++i) {
			if ((*main_mod->Hook.FeMan->CSFeMan)->entityHpBars[i].entityHandle == chrDamageModule->chrModuleBase.owningChrIns->handle) {
				if (found) {
					entityPoiseArray[i].handle = __UINT64_MAX__;
					entityPoiseArray[i].chrIns = nullptr;
					(*main_mod->Hook.FeMan->CSFeMan)->entityHpBars[i].entityHandle = __UINT64_MAX__;
					(*main_mod->Hook.FeMan->CSFeMan)->entityHpBars[i].currentDisplayDamage = 0;
					break;
				}

				(*main_mod->Hook.FeMan->CSFeMan)->entityHpBars[i].entityHandle = chrDamageModule->chrModuleBase.owningChrIns->handle;
				entityPoiseArray[i].chrIns = chrDamageModule->chrModuleBase.owningChrIns;
				entityPoiseArray[i].handle = chrDamageModule->chrModuleBase.owningChrIns->handle;
				found = true;
				break;
			}
		}

		if (!found) {
			for (int i = 0; i < ENTITY_CHR_ARRAY_LEN; ++i) {
				if ((*main_mod->Hook.FeMan->CSFeMan)->entityHpBars[i].entityHandle == __UINT64_MAX__) {

					(*main_mod->Hook.FeMan->CSFeMan)->entityHpBars[i].entityHandle = chrDamageModule->chrModuleBase.owningChrIns->handle;
					entityPoiseArray[i].chrIns = chrDamageModule->chrModuleBase.owningChrIns;
					entityPoiseArray[i].handle = chrDamageModule->chrModuleBase.owningChrIns->handle;
					break;
				}
			}
		}

	}

	HandleDamageOriginal(chrDamageModule, damage, param_3, param_4, param_5, param_6);

}

extern "C" int CheckExecActionButtonParamFilters(uintptr_t actionButtonRegionSystemImp, int entryId) {

	std::vector<int> lockList = main_mod->Hook.FeMan->lockPickupList;
	if (!lockList.empty() && (*main_mod->Hook.SoundIns)->soundCombatStruct->isInCombat && std::binary_search(lockList.begin(), lockList.end(), entryId)) {
		return 0;
	}

	std::vector<int> pickupList = main_mod->Hook.FeMan->autoPickupList;
	if (!pickupList.empty() && std::binary_search(pickupList.begin(), pickupList.end(), entryId)) {
		return 1;
	}

	return -1;
}

void FeHook::feManCtor(CSFeManImp* feManImp, uintptr_t gameRend, uintptr_t menuMan) {

	for (int i = 0; i < BOSS_CHR_ARRAY_LEN; i++) {
		bossChrInsArray[i] = nullptr;
	}

	for (int i = 0; i < ENTITY_CHR_ARRAY_LEN; i++) {
		entityPoiseArray[i].handle = __UINT64_MAX__;
		entityPoiseArray[i].chrIns = nullptr;
	}

	FeManCtorOriginal(feManImp, gameRend, menuMan);
}

void FeHook::enemyInsDtor(ChrIns* enemyIns, uintptr_t unk) {

	for (int i = 0; i < BOSS_CHR_ARRAY_LEN; i++) {
		if (bossChrInsArray[i] == enemyIns)
			bossChrInsArray[i] = nullptr;
	}

	for (int i = 0; i < ENTITY_CHR_ARRAY_LEN; i++) {

		if (entityPoiseArray[i].chrIns == enemyIns) {
			entityPoiseArray[i].handle = __UINT64_MAX__;
			entityPoiseArray[i].chrIns = nullptr;
		}
	}

	EnemyInsDtorOriginal(enemyIns, unk);
}

void FeHook::updateUIBarStructs(uintptr_t moveMapStep, uintptr_t time) {

	if (EnableBossBarOriginal)
		writePoiseToBossBar();
	if (HandleDamageOriginal)
		writePoiseToEntityBar();

	UpdateUIBarStructsOriginal(moveMapStep, time);
}

bool FeHook::enableUpdateHooks() {

	if (_updateHooksEnabled)
		return true;


	if (MH_CreateHook((void*)_enemyInsDtor, &enemyInsDtor, (void**)&FeHook::EnemyInsDtorOriginal) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_enemyInsDtor);

	if (MH_CreateHook((void*)_feManCtor, &feManCtor, (void**)&FeHook::FeManCtorOriginal) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_enemyInsDtor);

	if (MH_CreateHook((void*)_updateUIBarStructs, &updateUIBarStructs, (void**)&FeHook::UpdateUIBarStructsOriginal) != MH_OK) {
		return false;
	}

	MH_EnableHook((void*)_updateUIBarStructs);


	_updateHooksEnabled = true;

	return true;
}