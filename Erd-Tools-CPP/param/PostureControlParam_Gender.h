/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PostureControlParam_Gender_H
#define _PARAM_PostureControlParam_Gender_H
#pragma once
#include "defs/POSTURE_CONTROL_PARAM_GENDER_ST.h"

// Type: POSTURE_CONTROL_PARAM_GENDER_ST
struct PostureControlParam_Gender : POSTURE_CONTROL_PARAM_GENDER_ST {
    static constexpr const char* param_type = "POSTURE_CONTROL_PARAM_GENDER_ST";
    static constexpr const char* param_name = "PostureControlParam_Gender";
    static constexpr const wchar_t* param_namew = L"PostureControlParam_Gender";
};

static_assert(sizeof(PostureControlParam_Gender) == 64, "PostureControlParam_Gender paramdef size does not match detected size");
#endif
