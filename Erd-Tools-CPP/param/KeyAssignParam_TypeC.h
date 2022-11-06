/* This file was automatically generated from regulation data. */
#ifndef _PARAM_KeyAssignParam_TypeC_H
#define _PARAM_KeyAssignParam_TypeC_H
#pragma once
#include "defs/KEY_ASSIGN_PARAM_ST.h"

// Type: KEY_ASSIGN_PARAM_ST
struct KeyAssignParam_TypeC : KEY_ASSIGN_PARAM_ST {
    static constexpr const char* param_type = "KEY_ASSIGN_PARAM_ST";
    static constexpr const char* param_name = "KeyAssignParam_TypeC";
    static constexpr const wchar_t* param_namew = L"KeyAssignParam_TypeC";
};

static_assert(sizeof(KeyAssignParam_TypeC) == 32, "KeyAssignParam_TypeC paramdef size does not match detected size");
#endif
