/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipParamProtector_H
#define _PARAM_EquipParamProtector_H
#pragma once
#include "defs/EQUIP_PARAM_PROTECTOR_ST.h"

// Type: EQUIP_PARAM_PROTECTOR_ST
struct EquipParamProtector : EQUIP_PARAM_PROTECTOR_ST {
    static constexpr const char* param_type = "EQUIP_PARAM_PROTECTOR_ST";
    static constexpr const char* param_name = "EquipParamProtector";
    static constexpr const wchar_t* param_namew = L"EquipParamProtector";
};

static_assert(sizeof(EquipParamProtector) == 416, "EquipParamProtector paramdef size does not match detected size");
#endif
