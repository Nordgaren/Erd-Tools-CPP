/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ReinforceParamProtector_H
#define _PARAM_ReinforceParamProtector_H
#pragma once
#include "defs/REINFORCE_PARAM_PROTECTOR_ST.h"

// Type: REINFORCE_PARAM_PROTECTOR_ST
struct ReinforceParamProtector : REINFORCE_PARAM_PROTECTOR_ST {
    static constexpr const char* param_type = "REINFORCE_PARAM_PROTECTOR_ST";
    static constexpr const char* param_name = "ReinforceParamProtector";
    static constexpr const wchar_t* param_namew = L"ReinforceParamProtector";
};

static_assert(sizeof(ReinforceParamProtector) == 64, "ReinforceParamProtector paramdef size does not match detected size");
#endif
