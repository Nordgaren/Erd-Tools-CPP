/* This file was automatically generated from regulation data. */
#ifndef _PARAM_HitEffectSeParam_H
#define _PARAM_HitEffectSeParam_H
#pragma once
#include "defs/HIT_EFFECT_SE_PARAM_ST.h"

// Type: HIT_EFFECT_SE_PARAM_ST
struct HitEffectSeParam : HIT_EFFECT_SE_PARAM_ST {
    static constexpr const char* param_type = "HIT_EFFECT_SE_PARAM_ST";
    static constexpr const char* param_name = "HitEffectSeParam";
    static constexpr const wchar_t* param_namew = L"HitEffectSeParam";
};

static_assert(sizeof(HitEffectSeParam) == 640, "HitEffectSeParam paramdef size does not match detected size");
#endif
