/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PostureControlParam_Pro_H
#define _PARAM_PostureControlParam_Pro_H
#pragma once
#include "defs/POSTURE_CONTROL_PARAM_PRO_ST.h"

// Type: POSTURE_CONTROL_PARAM_PRO_ST
struct PostureControlParam_Pro : POSTURE_CONTROL_PARAM_PRO_ST {
    static constexpr const char* param_type = "POSTURE_CONTROL_PARAM_PRO_ST";
    static constexpr const char* param_name = "PostureControlParam_Pro";
    static constexpr const wchar_t* param_namew = L"PostureControlParam_Pro";
};

static_assert(sizeof(PostureControlParam_Pro) == 80, "PostureControlParam_Pro paramdef size does not match detected size");
#endif
