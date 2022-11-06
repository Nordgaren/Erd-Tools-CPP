/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ShopLineupParam_H
#define _PARAM_ShopLineupParam_H
#pragma once
#include "defs/SHOP_LINEUP_PARAM.h"

// Type: SHOP_LINEUP_PARAM
struct ShopLineupParam : SHOP_LINEUP_PARAM {
    static constexpr const char* param_type = "SHOP_LINEUP_PARAM";
    static constexpr const char* param_name = "ShopLineupParam";
    static constexpr const wchar_t* param_namew = L"ShopLineupParam";
};

static_assert(sizeof(ShopLineupParam) == 52, "ShopLineupParam paramdef size does not match detected size");
#endif
