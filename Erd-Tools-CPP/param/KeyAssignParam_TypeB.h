/* This file was automatically generated from regulation data. */
#ifndef _PARAM_KeyAssignParam_TypeB_H
#define _PARAM_KeyAssignParam_TypeB_H
#pragma once
#include "defs/KEY_ASSIGN_PARAM_ST.h"

// Type: KEY_ASSIGN_PARAM_ST
struct KeyAssignParam_TypeB : KEY_ASSIGN_PARAM_ST {
    static constexpr const char* param_type = "KEY_ASSIGN_PARAM_ST";
    static constexpr const char* param_name = "KeyAssignParam_TypeB";
    static constexpr const wchar_t* param_namew = L"KeyAssignParam_TypeB";
};

static_assert(sizeof(KeyAssignParam_TypeB) == 32, "KeyAssignParam_TypeB paramdef size does not match detected size");
#endif
