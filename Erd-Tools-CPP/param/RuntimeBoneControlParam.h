/* This file was automatically generated from regulation data. */
#ifndef _PARAM_RuntimeBoneControlParam_H
#define _PARAM_RuntimeBoneControlParam_H
#pragma once
#include "defs/RUNTIME_BONE_CONTROL_PARAM_ST.h"

// Type: RUNTIME_BONE_CONTROL_PARAM_ST
struct RuntimeBoneControlParam : RUNTIME_BONE_CONTROL_PARAM_ST {
    static constexpr const char* param_type = "RUNTIME_BONE_CONTROL_PARAM_ST";
    static constexpr const char* param_name = "RuntimeBoneControlParam";
    static constexpr const wchar_t* param_namew = L"RuntimeBoneControlParam";
};

static_assert(sizeof(RuntimeBoneControlParam) == 112, "RuntimeBoneControlParam paramdef size does not match detected size");
#endif
