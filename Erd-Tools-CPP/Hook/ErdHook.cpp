#include "../Include/ErdHook.h"
#include "../Include/ErdToolsMain.h"
#include "../Include/Signature.h"
#include "../Util/ParamEditor.h"


extern ErdToolsMain* main_mod;
ModuleData EldenRingData("eldenring.exe");

bool ErdHook::CreateMemoryEdits() {
    _minhookActive = MH_Initialize();

    if (_minhookActive != MH_OK) {
        throw std::runtime_error("MH_Initialize != MH_OK");
    }

    if (!FindNeededSignatures()) {
        printf("Find Sig Failed\n");
        //throw std::runtime_error("Failed to find function signatures");
    }

    if constexpr (DEBUG_CONSOLE) debugPrint();

    return true;
}

uint64_t* EventHook::EventMan = nullptr;

bool ErdHook::FindNeededSignatures() {
    if (!EldenRingData.BaseAddress) {
        //
        return false;
    }

    Signature eventMan = Signature("48 8B 3D ?? ?? ?? ?? 48 85 FF ?? ?? 32 C0 E9");
    EventHook::EventMan = (uint64_t*)eventMan.Scan(&EldenRingData, 0x3, 0x7);

    Signature setEvent = Signature(
        "?? ?? ?? ?? ?? 48 89 74 24 18 57 48 83 EC 30 48 8B DA 41 0F B6 F8 8B 12 48 8B F1 85 D2 0F 84 ?? ?? ?? ?? 45 84 C0");
    EventMan->SetEventFlagAddress = (uint64_t)setEvent.Scan(&EldenRingData, Align16);

    Signature isEvent = Signature("48 83 EC 28 8B 12 85 D2");
    *(void**)&EventHook::IsEventFlag = isEvent.Scan(&EldenRingData, Align16);

    Signature disableMap = Signature(
        "74 ?? C7 45 ?? ?? ?? ?? ?? C7 45 ?? ?? ?? ?? ?? C7 45 ?? ?? ?? ?? ?? 48 8D 05 ?? ?? ?? ?? 48 89 45 ?? 48 8D 4D ?? E8 ?? ?? ?? ?? E9 ?? ?? ?? ?? 48 83 BF");
    DebugMan->DisableOpenMapInCombatLocation = (uint64_t)disableMap.Scan(&EldenRingData);

    Signature closeMap = Signature("E8 ?? ?? ?? ?? 84 C0 75 ?? 38 83 ?? ?? ?? ?? 75 ?? 83 E6 FE");
    DebugMan->CloseMapInCombatLocation = (uint64_t)closeMap.Scan(&EldenRingData);

    Signature disableCrafting = Signature(
        "48 83 EC ?? 48 8B 0D ?? ?? ?? ?? 48 85 C9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C 8B C8 4C 8D 05 ?? ?? ?? ?? BA B4 00 00 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 84 C0 0F 94 C0 48 83 C4 ?? C3",
        0x3E);
    DebugMan->DisableCrafingInCombatLocation = (uint64_t)disableCrafting.Scan(&EldenRingData);

    Signature soloParamRepositorySig = Signature("48 8B 0D ?? ?? ?? ?? 48 85 C9 0F 84 ?? ?? ?? ?? 45 33 C0 BA 90");
    ParamMan->SoloParamRepositoryAddress = (SoloParamRepository**)soloParamRepositorySig.Scan(&EldenRingData, 0x3, 0x7);

    Signature findEquipParamWeaponEntrySig = Signature(
        "40 57 41 56 41 57 48 83 EC 40 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 60 48 89 6C 24 68 48 89 74 24 70 8B");
    ParamMan->FindEquipParamWeaponFunc = (FindEquipParamWeaponEntry*)findEquipParamWeaponEntrySig.Scan(
        &EldenRingData, Align16);

    Signature findEquipParamProtectorEntrySig = Signature(
        "41 54 41 56 41 57 48 83 EC 40 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 60 48 89 6C 24 68 48 89 74 24 70 48 89 7C 24 78 8B EA 4C 8B F1 33");
    ParamMan->FindEquipParamProtectorFunc = (FindEquipParamProtectorEntry*)findEquipParamProtectorEntrySig.Scan(
        &EldenRingData, Align16);

    Signature findEquipParamGoodsEntrySig = Signature(
        "45 33 C0 41 8D 50 03 E8 ?? ?? ?? ?? 48 85 C0 0F 84 ?? ?? ?? ?? 48 8B 80 80 00 00 00 48 8B 90", -0x67);
    ParamMan->FindEquipParamGoodsFunc = (FindEquipParamGoodsEntry*)findEquipParamGoodsEntrySig.Scan(&EldenRingData);

    Signature findMtrlSetParamEntrySig = Signature("45 33 C0 41 8D 50 18 E8 ?? ?? ?? ?? 48 85 C0 0F 84", -0x67);
    ParamMan->FindEquipMtrlSetParamFunc = (FindEquipMtrlSetParamEntry*)findMtrlSetParamEntrySig.Scan(&EldenRingData);

    Signature getMenuCommonParamEntrySig = Signature(
        "40 57 48 83 EC 40 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 50 48 8B F9 33 DB 48 89 19 48 8B 0D ?? ?? ?? ?? 48 85 C9 0F 84 CA 00 00 00 45 33 C0 BA 8F 00 00 00");
    ParamMan->GetMenuCommonParamEntry = (GetMenuCommonParamEntry*)getMenuCommonParamEntrySig.Scan(
        &EldenRingData, Align16);

    Signature getActionButtonParamEntrySig = Signature(
        "40 57 48 83 EC 40 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 50 48 89 6C 24 58 48 89 74 24 60 8B FA 48 8B F1 33 DB 85 D2 0F 88 21 01 00 00 48 8B 0D ?? ?? ?? ?? 48 85 C9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C 8B C8 4C 8D 05 ?? ?? ?? ?? BA B4 00 00 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B 0D ?? ?? ?? ?? 45 33 C0 41 8D 50 24");
    ParamMan->FindActionButtonParamEntry = (FindActionButtonParamEntry*)getActionButtonParamEntrySig.Scan(
        &EldenRingData, Align16);

    Signature getBossBarPtrSig = Signature("83 FA 02 77 ?? 48 63 C2 48 ?? ?? ?? ?? ?? ?? ?? ?? ?? 48 03 C1 C3");
    FeMan->_getBossBarPtr = reinterpret_cast<uintptr_t>(getBossBarPtrSig.Scan(&EldenRingData, Align16));

    Signature enableBossBarSig = Signature(
        "?? ?? ?? ?? ?? 48 89 74 24 10 57 48 83 EC 20 48 8B F9 41 8B F0 48 8B 0D ?? ?? ?? ?? 8B DA 48 85 C9"
        );
    FeMan->_enableBossBarAddr = (uintptr_t)enableBossBarSig.Scan(&EldenRingData, Align16);
    FeMan->GetChrInsFromEntityIdFunc = (GetChrInsFromEntityId*)enableBossBarSig.GetRelativeOffset(0x69, 0x6D);

    Signature disableBossBarSig = Signature(
        "40 53 48 83 EC 20 8B D9 48 8B 0D ?? ?? ?? ?? 48 85 C9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C 8B C8 4C 8D 05 ?? ?? ?? ?? BA B4 00 00 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B 0D ?? ?? ?? ?? 8B D3 E8");
    FeMan->_disableBossBarAddr = (uintptr_t)disableBossBarSig.Scan(&EldenRingData, Align16);

    Signature csFeManImp = Signature(
        "48 8B 0D ?? ?? ?? ?? 8B DA 48 85 C9 75 ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C 8B C8 4C 8D 05 ?? ?? ?? ?? BA B4 00 00 00 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B 0D ?? ?? ?? ?? 8B D3 E8 ?? ?? ?? ?? 48 8B D8");
    FeMan->CSFeMan = (CSFeManImp**)csFeManImp.Scan(&EldenRingData, 0x3, 0x7);

    Signature applyBossBarDmgSig = Signature("83 FA 02 77 ?? 48 63 C2 48 ?? ?? ?? ?? ?? ?? 48 C1 E0 05 48 03 ?? EB");
    FeMan->_applyBossBarDmg = (uintptr_t)applyBossBarDmgSig.Scan(&EldenRingData, Align16);

    Signature handleDamage = Signature(
        "48 8B C4 57 41 54 41 55 41 56 41 57 48 83 EC 60 48 C7 40 C8 FE FF FF FF 48 89 58 08");
    FeMan->_handleDmg = (uintptr_t)handleDamage.Scan(&EldenRingData, Align16);

    Signature applyEntityBarDmgSig = Signature(
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 20 48 8B DA 45 33 F6 41 8B E9 41 8B F0 45 8B D6 44 8B C3 41 8B D6 48 8B F9 41 B9 FF FF FF FF");
    FeMan->_applyEntityBarDmg = (uintptr_t)applyEntityBarDmgSig.Scan(&EldenRingData, Align16);

    Signature worldChrManSig = Signature("48 8B 05 ?? ?? ?? ?? 48 85 C0 74 0F 48 39 88");
    WorldChrManIns = (WorldChrMan**)worldChrManSig.Scan(&EldenRingData, 0x3, 0x7);

    Signature csSoundSig = Signature(
        "48 8B 05 ?? ?? ?? ?? 48 85 C0 ?? ?? 83 CD 02 83 B8 ?? ?? ?? ?? 00 89 6C 24 ?? 0F 95 C1");
    SoundIns = (CSSound**)csSoundSig.Scan(&EldenRingData, 0x3, 0x7);

    Signature getChrInsFromHandle = Signature("48 83 EC 28 E8 17 FF FF FF 48 85 C0 74 08 48 8B 00 48 83 C4 28 C3");
    GetChrInsFromHandleFunc = (GetChrInsFromHandle)getChrInsFromHandle.Scan(&EldenRingData, Align16);

    Signature executeActionButtonParamSig = Signature(
        "48 89 5C 24 08 57 48 81 EC 90 00 00 00 48 8B 84 24 E0 00 00 00 41 0F B6 D9 48 8B 0D ?? ?? ?? ?? 8B FA 0F 29 B4 24 80 00 00 00");
    FeMan->_executeActionButtonParamProxy = (uintptr_t)executeActionButtonParamSig.Scan(&EldenRingData, Align16);
    FeMan->_actionButtonParamImp = (uintptr_t)executeActionButtonParamSig.GetRelativeOffset(0x1C, 0x20);

    Signature enemyInsDtor = Signature(
        "48 89 5C 24 08 57 48 83 EC 20 8B DA 48 8B F9 E8 ?? ?? ?? ?? F6 C3 01 74 ?? BA E0 05 00 00");
    FeMan->_enemyInsDtor = (uintptr_t)enemyInsDtor.Scan(&EldenRingData, Align16);

    Signature chrInsDtorSig = Signature(
        "48 89 4C 24 08 55 56 57 48 83 EC 30 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 60 48 8B F9 48 8D 05 ?? ?? ?? ?? 48 89 01 48 8B 81 90 01 00 00 48 8B 08");
    FeMan->_chrInsDtor = (uintptr_t)chrInsDtorSig.Scan(&EldenRingData, Align16);

    Signature feManCtor = Signature(
        "48 89 4C 24 08 55 53 56 57 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC 48 48 C7 45 E8 FE FF FF FF 48");
    FeMan->_feManCtor = (uintptr_t)feManCtor.Scan(&EldenRingData, Align16);

    Signature updateUIBarStructs = Signature(
        "40 55 56 57 41 54 41 55 41 56 41 57 48 83 EC 60 48 C7 44 24 30 FE FF FF FF 48 89 9C 24 B0 00 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 44 24 58 48");
    FeMan->_updateUIBarStructs = (uintptr_t)updateUIBarStructs.Scan(&EldenRingData, Align16);

    Signature saveExtension = Signature("48 8D 15 ?? ?? ?? ?? 48 8B CF E8 BD 0F 00 00 90");
    _saveExtension = (wchar_t*)saveExtension.Scan(&EldenRingData, 0x3, 0x7);

    return EventMan && EventMan->SetEventFlagAddress && DebugMan->DisableOpenMapInCombatLocation
        && DebugMan->CloseMapInCombatLocation && DebugMan->DisableCrafingInCombatLocation && ParamMan->
        SoloParamRepositoryAddress
        && ParamMan->FindEquipParamWeaponFunc && ParamMan->FindEquipParamProtectorFunc && ParamMan->
        FindEquipParamGoodsFunc
        && ParamMan->FindEquipMtrlSetParamFunc && ParamMan->GetMenuCommonParamEntry && ParamMan->
        FindActionButtonParamEntry
        && FeMan->_enableBossBarAddr && FeMan->_disableBossBarAddr && FeMan->GetChrInsFromEntityIdFunc && FeMan->CSFeMan
        && FeMan->_applyBossBarDmg && FeMan->_handleDmg && FeMan->_applyEntityBarDmg && WorldChrManIns && SoundIns
        && FeMan->_executeActionButtonParamProxy && FeMan->_actionButtonParamImp && FeMan->_feManCtor && FeMan->
        _updateUIBarStructs;
}

void ErdHook::ChangeExtension() {
    if (_saveExtension) {
        const wchar_t* newExt = (L"." + _extension).c_str();
        memcpy(_saveExtension, newExt, 8);
    }
}

void ErdHook::debugPrint() {
    printf("Ptrs: \n");
    printf("Hook\n");
    printf("WorldChrMan: %p\n", WorldChrManIns);
    printf("CSSound: %p\n", SoundIns);
    printf("\nEventMan\n");
    printf("EventMan->EventMan: %p\n", EventMan->EventMan);
    printf("EventMan->SetEventFlagAddress %p\n", EventMan->SetEventFlagAddress);
    printf("\nDebugMan\n");
    printf("DebugMan->DisableOpenMapInCombatLocation %p\n", DebugMan->DisableOpenMapInCombatLocation);
    printf("DebugMan->CloseMapInCombatLocation %p\n", DebugMan->CloseMapInCombatLocation);
    printf("DebugMan->DisableCrafingInCombatLocation %p\n", DebugMan->DisableCrafingInCombatLocation);
    printf("\nParamMan\n");
    printf("ParamMan->SoloParamRepositoryAddress %p\n", ParamMan->SoloParamRepositoryAddress);
    printf("ParamMan->FindEquipParamWeaponFunc %p\n", ParamMan->FindEquipParamWeaponFunc);
    printf("ParamMan->FindEquipParamProtectorFunc %p\n", ParamMan->FindEquipParamProtectorFunc);
    printf("ParamMan->FindEquipParamGoodsFunc %p\n", ParamMan->FindEquipParamGoodsFunc);
    printf("ParamMan->FindEquipMtrlSetParamFunc %p\n", ParamMan->FindEquipMtrlSetParamFunc);
    printf("ParamMan->GetMenuCommonParamEntry %p\n", ParamMan->GetMenuCommonParamEntry);
    printf("ParamMan->FindActionButtonParamEntry %p\n", ParamMan->FindActionButtonParamEntry);
    printf("\nFeMan:\n");
    printf("FeMan->_enableBossBarAddr %p\n", FeMan->_enableBossBarAddr);
    printf("FeMan->_disableBossBarAddr %p\n", FeMan->_disableBossBarAddr);
    printf("FeMan->GetChrInsFromEntityIdFunc %p\n", FeMan->GetChrInsFromEntityIdFunc);
    printf("FeMan->CSFeMan %p\n", FeMan->CSFeMan);
    printf("FeMan->_applyBossBarDmg %p\n", FeMan->_applyBossBarDmg);
    printf("FeMan->_handleDmg %p\n", FeMan->_handleDmg);
    printf("FeMan->_applyEntityBarDmg %p\n", FeMan->_applyEntityBarDmg);
    printf("FeMan->_executeActionButtonParamProxy %p\n", FeMan->_executeActionButtonParamProxy);
    printf("FeMan->_actionButtonParamImp %p\n", FeMan->_actionButtonParamImp);
    printf("FeMan->_enemyInsDtor %p\n", FeMan->_enemyInsDtor);
    printf("FeMan->_chrInsDtor %p\n", FeMan->_chrInsDtor);
    printf("_saveExtension %p\n", _saveExtension);
    printf("_saveExtension %ls\n", _saveExtension);
}
