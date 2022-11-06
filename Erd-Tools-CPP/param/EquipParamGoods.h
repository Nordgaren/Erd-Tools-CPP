/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EquipParamGoods_H
#define _PARAM_EquipParamGoods_H
#pragma once
#include "defs/EQUIP_PARAM_GOODS_ST.h"

// Type: EQUIP_PARAM_GOODS_ST
struct EquipParamGoods : EQUIP_PARAM_GOODS_ST {
    static constexpr const char* param_type = "EQUIP_PARAM_GOODS_ST";
    static constexpr const char* param_name = "EquipParamGoods";
    static constexpr const wchar_t* param_namew = L"EquipParamGoods";
};

static_assert(sizeof(EquipParamGoods) == 176, "EquipParamGoods paramdef size does not match detected size");
#endif
