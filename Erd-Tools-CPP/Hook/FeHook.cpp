#include "..\Include\FeHook.h"
#include "..\Include\ErdToolsMain.h"
#define BOSS_CHR_ARRAY_LEN 3
#define ENTITY_CHR_ARRAY_LEN 8

extern ErdToolsMain* main_mod;
extern "C" int ExecActionButtonParamProxyWrapper();
extern "C" uint64_t ExecuteActionButtonParamProxyReturn = 0;

bool FeHook::EnableBossPoiseMeter() {
    if (BossBarPoiseMeterEnabled == true) {
        return true;
    }

    BossBarPoiseMeterEnabled = true;
    *(int*)_applyBossBarDmg = 0x909090C3;

    enableUpdateHooks();

    return true;
}

bool FeHook::EnableEntityPoiseMeter() {
    if (EntityPoiseMeterEnabled)
        return true;

    if (MH_CreateHook((void*)_applyEntityBarDmg, &applyEntityBarDmgHook,
                      (void**)&FeHook::ApplyEntityBarDamageOriginal) != MH_OK) {
        return false;
    }

    MH_EnableHook((void*)_applyEntityBarDmg);

    enableUpdateHooks();

    EntityPoiseMeterEnabled = true;
    return true;
}

void FeHook::applyEntityBarDmgHook(EntityHpBar* entityHealthBarStruct, uint64_t chrInsHandle,
                                   int32_t damage, uint32_t unk, bool skipSetDamage) {
    ApplyEntityBarDamageOriginal(entityHealthBarStruct, chrInsHandle, 0, unk, true);
}

bool FeHook::EnableLootChangeHook() {
    if (MH_CreateHook((void*)_executeActionButtonParamProxy, &ExecActionButtonParamProxyWrapper,
                      (void**)&ExecuteActionButtonParamProxyReturn) != MH_OK) {
        return false;
    }

    MH_EnableHook((void*)_executeActionButtonParamProxy);

    return true;
}


void FeHook::EnableLootPrefs() {
    if (LootPrefs & pickup_materials) {
        autoPickupList.insert(autoPickupList.end(), ABParam_list_materials.begin(), ABParam_list_materials.end());
    }
    if (LootPrefs & pickup_items) {
        autoPickupList.insert(autoPickupList.end(), ABParam_list_items.begin(), ABParam_list_items.end());
    }
    if (LootPrefs & pickup_corpse_loot) {
        autoPickupList.insert(autoPickupList.end(), ABParam_list_corpse_loot.begin(), ABParam_list_corpse_loot.end());
    }
    if (LootPrefs & pickup_lost_runes) {
        autoPickupList.insert(autoPickupList.end(), ABParam_list_lost_runes.begin(), ABParam_list_lost_runes.end());
    }
    std::sort(autoPickupList.begin(), autoPickupList.end());

    if (LootPrefs & lock_materials) {
        lockPickupList.insert(lockPickupList.end(), ABParam_list_materials.begin(), ABParam_list_materials.end());
    }
    if (LootPrefs & lock_items) {
        lockPickupList.insert(lockPickupList.end(), ABParam_list_items.begin(), ABParam_list_items.end());
    }
    if (LootPrefs & lock_corpse_loot) {
        lockPickupList.insert(lockPickupList.end(), ABParam_list_corpse_loot.begin(), ABParam_list_corpse_loot.end());
    }
    if (LootPrefs & lock_lost_runes) {
        lockPickupList.insert(lockPickupList.end(), ABParam_list_lost_runes.begin(), ABParam_list_lost_runes.end());
    }
    if (LootPrefs & lock_grace_unlocks) {
        lockPickupList.insert(lockPickupList.end(), unlock_grace_ABParam_list.begin(), unlock_grace_ABParam_list.end());
    }
    if (LootPrefs & lock_grace_resting) {
        lockPickupList.insert(lockPickupList.end(), grace_resting_ABParam_list.begin(),
                              grace_resting_ABParam_list.end());
    }
    std::sort(lockPickupList.begin(), lockPickupList.end());

    if (!autoPickupList.empty() || !lockPickupList.empty()) {
        EnableLootChangeHook();
    }
}

void FeHook::writePoiseToBossBar() {
    CSFeManImp* feMan = *main_mod->Hook.FeMan->CSFeMan;
    for (int i = 0; i < BOSS_CHR_ARRAY_LEN; i++) {
        if (feMan->bossHpBars[i].bossHandle != __UINT64_MAX__) {
            ChrIns* chrIns = main_mod->Hook.GetChrInsFromHandleFunc(*main_mod->Hook.WorldChrManIns,
                                                                    &feMan->bossHpBars[i].bossHandle);
            if (chrIns == nullptr) continue;
            float stagger = chrIns->chrModulelBag->staggerModule->staggerMax - chrIns->chrModulelBag->staggerModule->
                stagger;
            int staggerInt = (int)chrIns->chrModulelBag->staggerModule->stagger;
            if (stagger > 0) {
                feMan->bossHpBars[i].currentDisplayDamage = staggerInt;
                feMan->bossHpBars[i].isHit = true;
            }
            else if (feMan->bossHpBars[i].currentDisplayDamage > 0 && feMan->bossHpBars[i].currentDisplayDamage !=
                staggerInt) {
                feMan->bossHpBars[i].currentDisplayDamage = staggerInt;
                feMan->bossHpBars[i].isHit = true;
            }
        }
    }
}

void FeHook::writePoiseToEntityBar() {
    CSFeManImp* feMan = *main_mod->Hook.FeMan->CSFeMan;
    for (int i = 0; i < ENTITY_CHR_ARRAY_LEN; i++) {
        if (feMan->entityHpBars[i].entityHandle != __UINT64_MAX__) {
            ChrIns* chrIns = main_mod->Hook.GetChrInsFromHandleFunc(*main_mod->Hook.WorldChrManIns,
                                                                    &feMan->entityHpBars[i].entityHandle);
            if (chrIns == nullptr) continue;
            StaggerModule* staggerModule = chrIns->chrModulelBag->staggerModule;
            if (staggerModule->staggerMax < 0) {
                continue;
            }

            float stagger = staggerModule->staggerMax - staggerModule->stagger;
            int staggerInt = (int)chrIns->chrModulelBag->staggerModule->stagger;
            if (stagger > 0) {
                feMan->entityHpBars[i].totalTimeDisplayed = 0.0f;
                feMan->entityHpBars[i].timeDisplayed = 0.0f;
                feMan->entityHpBars[i].currentDisplayDamage = staggerInt;
            }
            else if (feMan->entityHpBars[i].currentDisplayDamage > 0 && feMan->entityHpBars[i].currentDisplayDamage !=
                staggerInt) {
                feMan->entityHpBars[i].totalTimeDisplayed = 0.0f;
                feMan->entityHpBars[i].timeDisplayed = 0.0f;
                feMan->entityHpBars[i].currentDisplayDamage = (int)staggerModule->staggerMax;
            }
        }
    }
}

extern "C" int CheckExecActionButtonParamFilters(uintptr_t actionButtonRegionSystemImp, int entryId) {
    std::vector<int> lockList = main_mod->Hook.FeMan->lockPickupList;
    const bool inCombat = (*main_mod->Hook.SoundIns)->soundCombatStruct->isInCombat;
    if (!lockList.empty() && inCombat && std::binary_search(
        lockList.begin(), lockList.end(), entryId)) {
        return 0;
    }

    if (!(main_mod->Hook.FeMan->LootPrefs & enable_auto_pickup_in_combat) && inCombat) {
        return -1;
    }

    std::vector<int> pickupList = main_mod->Hook.FeMan->autoPickupList;
    if (!pickupList.empty() && std::binary_search(pickupList.begin(), pickupList.end(), entryId)) {
        return 1;
    }

    return -1;
}

void FeHook::updateUIBarStructs(uintptr_t moveMapStep, uintptr_t time) {
    UpdateUIBarStructsOriginal(moveMapStep, time);

    if (BossBarPoiseMeterEnabled)
        writePoiseToBossBar();
    if (ApplyEntityBarDamageOriginal)
        writePoiseToEntityBar();
}

bool FeHook::enableUpdateHooks() {
    if (_updateHooksEnabled)
        return true;

    if (MH_CreateHook((void*)_updateUIBarStructs, &updateUIBarStructs,
                      (void**)&FeHook::UpdateUIBarStructsOriginal) != MH_OK) {
        return false;
    }
    MH_EnableHook((void*)_updateUIBarStructs);

    _updateHooksEnabled = true;
    return true;
}
