/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipParamGem_H
#define _PARAM_EquipParamGem_H
#pragma once
#include "defs/EQUIP_PARAM_GEM_ST.h"

// Type: EQUIP_PARAM_GEM_ST
struct EquipParamGem : EQUIP_PARAM_GEM_ST {
    static constexpr const char* param_type = "EQUIP_PARAM_GEM_ST";
    static constexpr const char* param_name = "EquipParamGem";
    static constexpr const wchar_t* param_namew = L"EquipParamGem";
};

static_assert(sizeof(EquipParamGem) == 96, "EquipParamGem paramdef size does not match detected size");
#endif
