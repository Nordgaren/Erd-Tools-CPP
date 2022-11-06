/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MapDefaultInfoParam_H
#define _PARAM_MapDefaultInfoParam_H
#pragma once
#include "defs/MAP_DEFAULT_INFO_PARAM_ST.h"

// Type: MAP_DEFAULT_INFO_PARAM_ST
struct MapDefaultInfoParam : MAP_DEFAULT_INFO_PARAM_ST {
    static constexpr const char* param_type = "MAP_DEFAULT_INFO_PARAM_ST";
    static constexpr const char* param_name = "MapDefaultInfoParam";
    static constexpr const wchar_t* param_namew = L"MapDefaultInfoParam";
};

static_assert(sizeof(MapDefaultInfoParam) == 64, "MapDefaultInfoParam paramdef size does not match detected size");
#endif
