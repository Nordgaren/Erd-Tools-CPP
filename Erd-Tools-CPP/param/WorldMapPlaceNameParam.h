/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WorldMapPlaceNameParam_H
#define _PARAM_WorldMapPlaceNameParam_H
#pragma once
#include "defs/WORLD_MAP_PLACE_NAME_PARAM_ST.h"

// Type: WORLD_MAP_PLACE_NAME_PARAM_ST
struct WorldMapPlaceNameParam : WORLD_MAP_PLACE_NAME_PARAM_ST {
    static constexpr const char* param_type = "WORLD_MAP_PLACE_NAME_PARAM_ST";
    static constexpr const char* param_name = "WorldMapPlaceNameParam";
    static constexpr const wchar_t* param_namew = L"WorldMapPlaceNameParam";
};

static_assert(sizeof(WorldMapPlaceNameParam) == 32, "WorldMapPlaceNameParam paramdef size does not match detected size");
#endif
