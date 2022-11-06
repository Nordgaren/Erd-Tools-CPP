/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SpEffectParam_H
#define _PARAM_SpEffectParam_H
#pragma once
#include "defs/SP_EFFECT_PARAM_ST.h"

// Type: SP_EFFECT_PARAM_ST
struct SpEffectParam : SP_EFFECT_PARAM_ST {
    static constexpr const char* param_type = "SP_EFFECT_PARAM_ST";
    static constexpr const char* param_name = "SpEffectParam";
    static constexpr const wchar_t* param_namew = L"SpEffectParam";
};

static_assert(sizeof(SpEffectParam) == 912, "SpEffectParam paramdef size does not match detected size");
#endif
