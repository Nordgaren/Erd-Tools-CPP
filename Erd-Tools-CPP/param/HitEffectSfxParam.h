/* This file was automatically generated from regulation data. */
#ifndef _PARAM_HitEffectSfxParam_H
#define _PARAM_HitEffectSfxParam_H
#pragma once
#include "defs/HIT_EFFECT_SFX_PARAM_ST.h"

// Type: HIT_EFFECT_SFX_PARAM_ST
struct HitEffectSfxParam : HIT_EFFECT_SFX_PARAM_ST {
    static constexpr const char* param_type = "HIT_EFFECT_SFX_PARAM_ST";
    static constexpr const char* param_name = "HitEffectSfxParam";
    static constexpr const wchar_t* param_namew = L"HitEffectSfxParam";
};

static_assert(sizeof(HitEffectSfxParam) == 80, "HitEffectSfxParam paramdef size does not match detected size");
#endif
