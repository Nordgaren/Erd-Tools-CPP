/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BehaviorParam_PC_H
#define _PARAM_BehaviorParam_PC_H
#pragma once
#include "defs/BEHAVIOR_PARAM_ST.h"

// Type: BEHAVIOR_PARAM_ST
struct BehaviorParam_PC : BEHAVIOR_PARAM_ST {
    static constexpr const char* param_type = "BEHAVIOR_PARAM_ST";
    static constexpr const char* param_name = "BehaviorParam_PC";
    static constexpr const wchar_t* param_namew = L"BehaviorParam_PC";
};

static_assert(sizeof(BehaviorParam_PC) == 32, "BehaviorParam_PC paramdef size does not match detected size");
#endif
