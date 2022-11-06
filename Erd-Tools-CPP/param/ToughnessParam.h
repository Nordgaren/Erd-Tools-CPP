/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ToughnessParam_H
#define _PARAM_ToughnessParam_H
#pragma once
#include "defs/TOUGHNESS_PARAM_ST.h"

// Type: TOUGHNESS_PARAM_ST
struct ToughnessParam : TOUGHNESS_PARAM_ST {
    static constexpr const char* param_type = "TOUGHNESS_PARAM_ST";
    static constexpr const char* param_name = "ToughnessParam";
    static constexpr const wchar_t* param_namew = L"ToughnessParam";
};

static_assert(sizeof(ToughnessParam) == 32, "ToughnessParam paramdef size does not match detected size");
#endif
