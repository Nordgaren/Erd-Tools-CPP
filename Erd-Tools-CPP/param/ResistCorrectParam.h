/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ResistCorrectParam_H
#define _PARAM_ResistCorrectParam_H
#pragma once
#include "defs/RESIST_CORRECT_PARAM_ST.h"

// Type: RESIST_CORRECT_PARAM_ST
struct ResistCorrectParam : RESIST_CORRECT_PARAM_ST {
    static constexpr const char* param_type = "RESIST_CORRECT_PARAM_ST";
    static constexpr const char* param_name = "ResistCorrectParam";
    static constexpr const wchar_t* param_namew = L"ResistCorrectParam";
};

static_assert(sizeof(ResistCorrectParam) == 40, "ResistCorrectParam paramdef size does not match detected size");
#endif
