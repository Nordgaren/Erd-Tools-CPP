/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GrassLodRangeParam_H
#define _PARAM_GrassLodRangeParam_H
#pragma once
#include "defs/GRASS_LOD_RANGE_PARAM_ST.h"

// Type: GRASS_LOD_RANGE_PARAM_ST
struct GrassLodRangeParam : GRASS_LOD_RANGE_PARAM_ST {
    static constexpr const char* param_type = "GRASS_LOD_RANGE_PARAM_ST";
    static constexpr const char* param_name = "GrassLodRangeParam";
    static constexpr const wchar_t* param_namew = L"GrassLodRangeParam";
};

static_assert(sizeof(GrassLodRangeParam) == 24, "GrassLodRangeParam paramdef size does not match detected size");
#endif
