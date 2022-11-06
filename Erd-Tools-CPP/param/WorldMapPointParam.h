/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WorldMapPointParam_H
#define _PARAM_WorldMapPointParam_H
#pragma once
#include "defs/WORLD_MAP_POINT_PARAM_ST.h"

// Type: WORLD_MAP_POINT_PARAM_ST
struct WorldMapPointParam : WORLD_MAP_POINT_PARAM_ST {
    static constexpr const char* param_type = "WORLD_MAP_POINT_PARAM_ST";
    static constexpr const char* param_name = "WorldMapPointParam";
    static constexpr const wchar_t* param_namew = L"WorldMapPointParam";
};

static_assert(sizeof(WorldMapPointParam) == 256, "WorldMapPointParam paramdef size does not match detected size");
#endif
