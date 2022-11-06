/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PostureControlParam_WepRight_H
#define _PARAM_PostureControlParam_WepRight_H
#pragma once
#include "defs/POSTURE_CONTROL_PARAM_WEP_RIGHT_ST.h"

// Type: POSTURE_CONTROL_PARAM_WEP_RIGHT_ST
struct PostureControlParam_WepRight : POSTURE_CONTROL_PARAM_WEP_RIGHT_ST {
    static constexpr const char* param_type = "POSTURE_CONTROL_PARAM_WEP_RIGHT_ST";
    static constexpr const char* param_name = "PostureControlParam_WepRight";
    static constexpr const wchar_t* param_namew = L"PostureControlParam_WepRight";
};

static_assert(sizeof(PostureControlParam_WepRight) == 112, "PostureControlParam_WepRight paramdef size does not match detected size");
#endif
