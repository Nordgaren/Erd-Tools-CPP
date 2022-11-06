/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipMtrlSetParam_H
#define _PARAM_EquipMtrlSetParam_H
#pragma once
#include "defs/EQUIP_MTRL_SET_PARAM_ST.h"

// Type: EQUIP_MTRL_SET_PARAM_ST
struct EquipMtrlSetParam : EQUIP_MTRL_SET_PARAM_ST {
    static constexpr const char* param_type = "EQUIP_MTRL_SET_PARAM_ST";
    static constexpr const char* param_name = "EquipMtrlSetParam";
    static constexpr const wchar_t* param_namew = L"EquipMtrlSetParam";
};

static_assert(sizeof(EquipMtrlSetParam) == 52, "EquipMtrlSetParam paramdef size does not match detected size");
#endif
