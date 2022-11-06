/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipParamWeapon_H
#define _PARAM_EquipParamWeapon_H
#pragma once
#include "defs/EQUIP_PARAM_WEAPON_ST.h"

// Type: EQUIP_PARAM_WEAPON_ST
struct EquipParamWeapon : EQUIP_PARAM_WEAPON_ST {
    static constexpr const char* param_type = "EQUIP_PARAM_WEAPON_ST";
    static constexpr const char* param_name = "EquipParamWeapon";
    static constexpr const wchar_t* param_namew = L"EquipParamWeapon";
};

static_assert(sizeof(EquipParamWeapon) == 664, "EquipParamWeapon paramdef size does not match detected size");
#endif
