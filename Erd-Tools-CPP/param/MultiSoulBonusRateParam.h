/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MultiSoulBonusRateParam_H
#define _PARAM_MultiSoulBonusRateParam_H
#pragma once
#include "defs/MULTI_SOUL_BONUS_RATE_PARAM_ST.h"

// Type: MULTI_SOUL_BONUS_RATE_PARAM_ST
struct MultiSoulBonusRateParam : MULTI_SOUL_BONUS_RATE_PARAM_ST {
    static constexpr const char* param_type = "MULTI_SOUL_BONUS_RATE_PARAM_ST";
    static constexpr const char* param_name = "MultiSoulBonusRateParam";
    static constexpr const wchar_t* param_namew = L"MultiSoulBonusRateParam";
};

static_assert(sizeof(MultiSoulBonusRateParam) == 128, "MultiSoulBonusRateParam paramdef size does not match detected size");
#endif
