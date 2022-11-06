/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ClearCountCorrectParam_H
#define _PARAM_ClearCountCorrectParam_H
#pragma once
#include "defs/CLEAR_COUNT_CORRECT_PARAM_ST.h"

// Type: CLEAR_COUNT_CORRECT_PARAM_ST
struct ClearCountCorrectParam : CLEAR_COUNT_CORRECT_PARAM_ST {
    static constexpr const char* param_type = "CLEAR_COUNT_CORRECT_PARAM_ST";
    static constexpr const char* param_name = "ClearCountCorrectParam";
    static constexpr const wchar_t* param_namew = L"ClearCountCorrectParam";
};

static_assert(sizeof(ClearCountCorrectParam) == 128, "ClearCountCorrectParam paramdef size does not match detected size");
#endif
