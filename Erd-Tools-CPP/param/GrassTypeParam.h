/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GrassTypeParam_H
#define _PARAM_GrassTypeParam_H
#pragma once
#include "defs/GRASS_TYPE_PARAM_ST.h"

// Type: GRASS_TYPE_PARAM_ST
struct GrassTypeParam : GRASS_TYPE_PARAM_ST {
    static constexpr const char* param_type = "GRASS_TYPE_PARAM_ST";
    static constexpr const char* param_name = "GrassTypeParam";
    static constexpr const wchar_t* param_namew = L"GrassTypeParam";
};

static_assert(sizeof(GrassTypeParam) == 276, "GrassTypeParam paramdef size does not match detected size");
#endif
