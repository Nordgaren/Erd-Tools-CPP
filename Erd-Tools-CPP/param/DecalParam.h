/* This file was automatically generated from regulation data. */
#ifndef _PARAM_DecalParam_H
#define _PARAM_DecalParam_H
#pragma once
#include "defs/DECAL_PARAM_ST.h"

// Type: DECAL_PARAM_ST
struct DecalParam : DECAL_PARAM_ST {
    static constexpr const char* param_type = "DECAL_PARAM_ST";
    static constexpr const char* param_name = "DecalParam";
    static constexpr const wchar_t* param_namew = L"DecalParam";
};

static_assert(sizeof(DecalParam) == 248, "DecalParam paramdef size does not match detected size");
#endif
