/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BonfireWarpTabParam_H
#define _PARAM_BonfireWarpTabParam_H
#pragma once
#include "defs/BONFIRE_WARP_TAB_PARAM_ST.h"

// Type: BONFIRE_WARP_TAB_PARAM_ST
struct BonfireWarpTabParam : BONFIRE_WARP_TAB_PARAM_ST {
    static constexpr const char* param_type = "BONFIRE_WARP_TAB_PARAM_ST";
    static constexpr const char* param_name = "BonfireWarpTabParam";
    static constexpr const wchar_t* param_namew = L"BonfireWarpTabParam";
};

static_assert(sizeof(BonfireWarpTabParam) == 16, "BonfireWarpTabParam paramdef size does not match detected size");
#endif
