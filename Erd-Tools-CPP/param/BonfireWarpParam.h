/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BonfireWarpParam_H
#define _PARAM_BonfireWarpParam_H
#pragma once
#include "defs/BONFIRE_WARP_PARAM_ST.h"

// Type: BONFIRE_WARP_PARAM_ST
struct BonfireWarpParam : BONFIRE_WARP_PARAM_ST {
    static constexpr const char* param_type = "BONFIRE_WARP_PARAM_ST";
    static constexpr const char* param_name = "BonfireWarpParam";
    static constexpr const wchar_t* param_namew = L"BonfireWarpParam";
};

static_assert(sizeof(BonfireWarpParam) == 236, "BonfireWarpParam paramdef size does not match detected size");
#endif
