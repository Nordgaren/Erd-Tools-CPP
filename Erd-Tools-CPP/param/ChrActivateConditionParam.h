/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ChrActivateConditionParam_H
#define _PARAM_ChrActivateConditionParam_H
#pragma once
#include "defs/CHR_ACTIVATE_CONDITION_PARAM_ST.h"

// Type: CHR_ACTIVATE_CONDITION_PARAM_ST
struct ChrActivateConditionParam : CHR_ACTIVATE_CONDITION_PARAM_ST {
    static constexpr const char* param_type = "CHR_ACTIVATE_CONDITION_PARAM_ST";
    static constexpr const char* param_name = "ChrActivateConditionParam";
    static constexpr const wchar_t* param_namew = L"ChrActivateConditionParam";
};

static_assert(sizeof(ChrActivateConditionParam) == 8, "ChrActivateConditionParam paramdef size does not match detected size");
#endif
