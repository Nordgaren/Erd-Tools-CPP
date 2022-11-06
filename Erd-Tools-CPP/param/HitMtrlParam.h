/* This file was automatically generated from regulation data. */
#ifndef _PARAM_HitMtrlParam_H
#define _PARAM_HitMtrlParam_H
#pragma once
#include "defs/HIT_MTRL_PARAM_ST.h"

// Type: HIT_MTRL_PARAM_ST
struct HitMtrlParam : HIT_MTRL_PARAM_ST {
    static constexpr const char* param_type = "HIT_MTRL_PARAM_ST";
    static constexpr const char* param_name = "HitMtrlParam";
    static constexpr const wchar_t* param_namew = L"HitMtrlParam";
};

static_assert(sizeof(HitMtrlParam) == 100, "HitMtrlParam paramdef size does not match detected size");
#endif
