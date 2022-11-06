/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ShopLineupParam_Recipe_H
#define _PARAM_ShopLineupParam_Recipe_H
#pragma once
#include "defs/SHOP_LINEUP_PARAM.h"

// Type: SHOP_LINEUP_PARAM
struct ShopLineupParam_Recipe : SHOP_LINEUP_PARAM {
    static constexpr const char* param_type = "SHOP_LINEUP_PARAM";
    static constexpr const char* param_name = "ShopLineupParam_Recipe";
    static constexpr const wchar_t* param_namew = L"ShopLineupParam_Recipe";
};

static_assert(sizeof(ShopLineupParam_Recipe) == 52, "ShopLineupParam_Recipe paramdef size does not match detected size");
#endif
