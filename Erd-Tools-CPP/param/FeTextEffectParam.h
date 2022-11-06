/* This file was automatically generated from regulation data. */
#ifndef _PARAM_FeTextEffectParam_H
#define _PARAM_FeTextEffectParam_H
#pragma once
#include "defs/FE_TEXT_EFFECT_PARAM_ST.h"

// Type: FE_TEXT_EFFECT_PARAM_ST
struct FeTextEffectParam : FE_TEXT_EFFECT_PARAM_ST {
    static constexpr const char* param_type = "FE_TEXT_EFFECT_PARAM_ST";
    static constexpr const char* param_name = "FeTextEffectParam";
    static constexpr const wchar_t* param_namew = L"FeTextEffectParam";
};

static_assert(sizeof(FeTextEffectParam) == 32, "FeTextEffectParam paramdef size does not match detected size");
#endif
