/* This file was automatically generated from regulation data. */
#ifndef _PARAM_KeyAssignParam_TypeA_H
#define _PARAM_KeyAssignParam_TypeA_H
#pragma once
#include "defs/KEY_ASSIGN_PARAM_ST.h"

// Type: KEY_ASSIGN_PARAM_ST
struct KeyAssignParam_TypeA : KEY_ASSIGN_PARAM_ST {
    static constexpr const char* param_type = "KEY_ASSIGN_PARAM_ST";
    static constexpr const char* param_name = "KeyAssignParam_TypeA";
    static constexpr const wchar_t* param_namew = L"KeyAssignParam_TypeA";
};

static_assert(sizeof(KeyAssignParam_TypeA) == 32, "KeyAssignParam_TypeA paramdef size does not match detected size");
#endif
