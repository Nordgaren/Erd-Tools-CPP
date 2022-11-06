/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GestureParam_H
#define _PARAM_GestureParam_H
#pragma once
#include "defs/GESTURE_PARAM_ST.h"

// Type: GESTURE_PARAM_ST
struct GestureParam : GESTURE_PARAM_ST {
    static constexpr const char* param_type = "GESTURE_PARAM_ST";
    static constexpr const char* param_name = "GestureParam";
    static constexpr const wchar_t* param_namew = L"GestureParam";
};

static_assert(sizeof(GestureParam) == 16, "GestureParam paramdef size does not match detected size");
#endif
