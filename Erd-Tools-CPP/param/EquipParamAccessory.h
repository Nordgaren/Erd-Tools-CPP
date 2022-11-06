/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipParamAccessory_H
#define _PARAM_EquipParamAccessory_H
#pragma once
#include "defs/EQUIP_PARAM_ACCESSORY_ST.h"

// Type: EQUIP_PARAM_ACCESSORY_ST
struct EquipParamAccessory : EQUIP_PARAM_ACCESSORY_ST {
    static constexpr const char* param_type = "EQUIP_PARAM_ACCESSORY_ST";
    static constexpr const char* param_name = "EquipParamAccessory";
    static constexpr const wchar_t* param_namew = L"EquipParamAccessory";
};

static_assert(sizeof(EquipParamAccessory) == 96, "EquipParamAccessory paramdef size does not match detected size");
#endif
