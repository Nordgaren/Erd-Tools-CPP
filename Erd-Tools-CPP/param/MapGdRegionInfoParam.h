/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MapGdRegionInfoParam_H
#define _PARAM_MapGdRegionInfoParam_H
#pragma once
#include "defs/MAP_GD_REGION_ID_PARAM_ST.h"

// Type: MAP_GD_REGION_ID_PARAM_ST
struct MapGdRegionInfoParam : MAP_GD_REGION_ID_PARAM_ST {
    static constexpr const char* param_type = "MAP_GD_REGION_ID_PARAM_ST";
    static constexpr const char* param_name = "MapGdRegionInfoParam";
    static constexpr const wchar_t* param_namew = L"MapGdRegionInfoParam";
};

static_assert(sizeof(MapGdRegionInfoParam) == 32, "MapGdRegionInfoParam paramdef size does not match detected size");
#endif
