/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BehaviorParam_H
#define _PARAM_BehaviorParam_H
#pragma once
#include "defs/BEHAVIOR_PARAM_ST.h"

// Type: BEHAVIOR_PARAM_ST
struct BehaviorParam : BEHAVIOR_PARAM_ST {
    static constexpr const char* param_type = "BEHAVIOR_PARAM_ST";
    static constexpr const char* param_name = "BehaviorParam";
    static constexpr const wchar_t* param_namew = L"BehaviorParam";
};

static_assert(sizeof(BehaviorParam) == 32, "BehaviorParam paramdef size does not match detected size");
#endif
