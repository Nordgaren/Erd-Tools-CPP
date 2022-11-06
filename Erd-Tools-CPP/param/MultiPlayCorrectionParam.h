/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MultiPlayCorrectionParam_H
#define _PARAM_MultiPlayCorrectionParam_H
#pragma once
#include "defs/MULTI_PLAY_CORRECTION_PARAM_ST.h"

// Type: MULTI_PLAY_CORRECTION_PARAM_ST
struct MultiPlayCorrectionParam : MULTI_PLAY_CORRECTION_PARAM_ST {
    static constexpr const char* param_type = "MULTI_PLAY_CORRECTION_PARAM_ST";
    static constexpr const char* param_name = "MultiPlayCorrectionParam";
    static constexpr const wchar_t* param_namew = L"MultiPlayCorrectionParam";
};

static_assert(sizeof(MultiPlayCorrectionParam) == 32, "MultiPlayCorrectionParam paramdef size does not match detected size");
#endif
