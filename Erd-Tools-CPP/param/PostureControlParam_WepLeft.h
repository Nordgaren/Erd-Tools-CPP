/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PostureControlParam_WepLeft_H
#define _PARAM_PostureControlParam_WepLeft_H
#pragma once
#include "defs/POSTURE_CONTROL_PARAM_WEP_LEFT_ST.h"

// Type: POSTURE_CONTROL_PARAM_WEP_LEFT_ST
struct PostureControlParam_WepLeft : POSTURE_CONTROL_PARAM_WEP_LEFT_ST {
    static constexpr const char* param_type = "POSTURE_CONTROL_PARAM_WEP_LEFT_ST";
    static constexpr const char* param_name = "PostureControlParam_WepLeft";
    static constexpr const wchar_t* param_namew = L"PostureControlParam_WepLeft";
};

static_assert(sizeof(PostureControlParam_WepLeft) == 32, "PostureControlParam_WepLeft paramdef size does not match detected size");
#endif
