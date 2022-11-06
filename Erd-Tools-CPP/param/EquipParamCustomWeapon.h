/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipParamCustomWeapon_H
#define _PARAM_EquipParamCustomWeapon_H
#pragma once
#include "defs/EQUIP_PARAM_CUSTOM_WEAPON_ST.h"

// Type: EQUIP_PARAM_CUSTOM_WEAPON_ST
struct EquipParamCustomWeapon : EQUIP_PARAM_CUSTOM_WEAPON_ST {
    static constexpr const char* param_type = "EQUIP_PARAM_CUSTOM_WEAPON_ST";
    static constexpr const char* param_name = "EquipParamCustomWeapon";
    static constexpr const wchar_t* param_namew = L"EquipParamCustomWeapon";
};

static_assert(sizeof(EquipParamCustomWeapon) == 16, "EquipParamCustomWeapon paramdef size does not match detected size");
#endif
