/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MapNameTexParam_H
#define _PARAM_MapNameTexParam_H
#pragma once
#include "defs/MAP_NAME_TEX_PARAM_ST.h"

// Type: MAP_NAME_TEX_PARAM_ST
struct MapNameTexParam : MAP_NAME_TEX_PARAM_ST {
    static constexpr const char* param_type = "MAP_NAME_TEX_PARAM_ST";
    static constexpr const char* param_name = "MapNameTexParam";
    static constexpr const wchar_t* param_namew = L"MapNameTexParam";
};

static_assert(sizeof(MapNameTexParam) == 16, "MapNameTexParam paramdef size does not match detected size");
#endif
