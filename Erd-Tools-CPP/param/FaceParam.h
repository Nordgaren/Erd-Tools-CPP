/* This file was automatically generated from regulation data. */
#ifndef _PARAM_FaceParam_H
#define _PARAM_FaceParam_H
#pragma once
#include "defs/FACE_PARAM_ST.h"

// Type: FACE_PARAM_ST
struct FaceParam : FACE_PARAM_ST {
    static constexpr const char* param_type = "FACE_PARAM_ST";
    static constexpr const char* param_name = "FaceParam";
    static constexpr const wchar_t* param_namew = L"FaceParam";
};

static_assert(sizeof(FaceParam) == 240, "FaceParam paramdef size does not match detected size");
#endif
