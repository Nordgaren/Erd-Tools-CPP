/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WorldMapLegacyConvParam_H
#define _PARAM_WorldMapLegacyConvParam_H
#pragma once
#include "defs/WORLD_MAP_LEGACY_CONV_PARAM_ST.h"

// Type: WORLD_MAP_LEGACY_CONV_PARAM_ST
struct WorldMapLegacyConvParam : WORLD_MAP_LEGACY_CONV_PARAM_ST {
    static constexpr const char* param_type = "WORLD_MAP_LEGACY_CONV_PARAM_ST";
    static constexpr const char* param_name = "WorldMapLegacyConvParam";
    static constexpr const wchar_t* param_namew = L"WorldMapLegacyConvParam";
};

static_assert(sizeof(WorldMapLegacyConvParam) == 48, "WorldMapLegacyConvParam paramdef size does not match detected size");
#endif
