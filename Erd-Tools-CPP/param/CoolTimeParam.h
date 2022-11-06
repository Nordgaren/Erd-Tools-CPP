/* This file was automatically generated from regulation data. */
#ifndef _PARAM_CoolTimeParam_H
#define _PARAM_CoolTimeParam_H
#pragma once
#include "defs/COOL_TIME_PARAM_ST.h"

// Type: COOL_TIME_PARAM_ST
struct CoolTimeParam : COOL_TIME_PARAM_ST {
    static constexpr const char* param_type = "COOL_TIME_PARAM_ST";
    static constexpr const char* param_name = "CoolTimeParam";
    static constexpr const wchar_t* param_namew = L"CoolTimeParam";
};

static_assert(sizeof(CoolTimeParam) == 32, "CoolTimeParam paramdef size does not match detected size");
#endif
