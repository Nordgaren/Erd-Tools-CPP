/* This file was automatically generated from regulation data. */
#ifndef _PARAM_FaceRangeParam_H
#define _PARAM_FaceRangeParam_H
#pragma once
#include "defs/FACE_RANGE_PARAM_ST.h"

// Type: FACE_RANGE_PARAM_ST
struct FaceRangeParam : FACE_RANGE_PARAM_ST {
    static constexpr const char* param_type = "FACE_RANGE_PARAM_ST";
    static constexpr const char* param_name = "FaceRangeParam";
    static constexpr const wchar_t* param_namew = L"FaceRangeParam";
};

static_assert(sizeof(FaceRangeParam) == 824, "FaceRangeParam paramdef size does not match detected size");
#endif
