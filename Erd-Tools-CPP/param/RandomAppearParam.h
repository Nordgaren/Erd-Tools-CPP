/* This file was automatically generated from regulation data. */
#ifndef _PARAM_RandomAppearParam_H
#define _PARAM_RandomAppearParam_H
#pragma once
#include "defs/RANDOM_APPEAR_PARAM_ST.h"

// Type: RANDOM_APPEAR_PARAM_ST
struct RandomAppearParam : RANDOM_APPEAR_PARAM_ST {
    static constexpr const char* param_type = "RANDOM_APPEAR_PARAM_ST";
    static constexpr const char* param_name = "RandomAppearParam";
    static constexpr const wchar_t* param_namew = L"RandomAppearParam";
};

static_assert(sizeof(RandomAppearParam) == 13, "RandomAppearParam paramdef size does not match detected size");
#endif
