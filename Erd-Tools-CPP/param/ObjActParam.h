/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ObjActParam_H
#define _PARAM_ObjActParam_H
#pragma once
#include "defs/OBJ_ACT_PARAM_ST.h"

// Type: OBJ_ACT_PARAM_ST
struct ObjActParam : OBJ_ACT_PARAM_ST {
    static constexpr const char* param_type = "OBJ_ACT_PARAM_ST";
    static constexpr const char* param_name = "ObjActParam";
    static constexpr const wchar_t* param_namew = L"ObjActParam";
};

static_assert(sizeof(ObjActParam) == 96, "ObjActParam paramdef size does not match detected size");
#endif
