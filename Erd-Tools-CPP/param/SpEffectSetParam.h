/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SpEffectSetParam_H
#define _PARAM_SpEffectSetParam_H
#pragma once
#include "defs/SP_EFFECT_SET_PARAM_ST.h"

// Type: SP_EFFECT_SET_PARAM_ST
struct SpEffectSetParam : SP_EFFECT_SET_PARAM_ST {
    static constexpr const char* param_type = "SP_EFFECT_SET_PARAM_ST";
    static constexpr const char* param_name = "SpEffectSetParam";
    static constexpr const wchar_t* param_namew = L"SpEffectSetParam";
};

static_assert(sizeof(SpEffectSetParam) == 16, "SpEffectSetParam paramdef size does not match detected size");
#endif
