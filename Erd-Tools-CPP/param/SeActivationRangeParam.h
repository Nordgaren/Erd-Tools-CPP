/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SeActivationRangeParam_H
#define _PARAM_SeActivationRangeParam_H
#pragma once
#include "defs/SE_ACTIVATION_RANGE_PARAM_ST.h"

// Type: SE_ACTIVATION_RANGE_PARAM_ST
struct SeActivationRangeParam : SE_ACTIVATION_RANGE_PARAM_ST {
    static constexpr const char* param_type = "SE_ACTIVATION_RANGE_PARAM_ST";
    static constexpr const char* param_name = "SeActivationRangeParam";
    static constexpr const wchar_t* param_namew = L"SeActivationRangeParam";
};

static_assert(sizeof(SeActivationRangeParam) == 4, "SeActivationRangeParam paramdef size does not match detected size");
#endif
