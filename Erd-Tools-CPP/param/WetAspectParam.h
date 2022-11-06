/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WetAspectParam_H
#define _PARAM_WetAspectParam_H
#pragma once
#include "defs/WET_ASPECT_PARAM_ST.h"

// Type: WET_ASPECT_PARAM_ST
struct WetAspectParam : WET_ASPECT_PARAM_ST {
    static constexpr const char* param_type = "WET_ASPECT_PARAM_ST";
    static constexpr const char* param_name = "WetAspectParam";
    static constexpr const wchar_t* param_namew = L"WetAspectParam";
};

static_assert(sizeof(WetAspectParam) == 32, "WetAspectParam paramdef size does not match detected size");
#endif
