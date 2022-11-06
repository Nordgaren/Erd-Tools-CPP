/* This file was automatically generated from regulation data. */
#ifndef _PARAM_DirectionCameraParam_H
#define _PARAM_DirectionCameraParam_H
#pragma once
#include "defs/DIRECTION_CAMERA_PARAM_ST.h"

// Type: DIRECTION_CAMERA_PARAM_ST
struct DirectionCameraParam : DIRECTION_CAMERA_PARAM_ST {
    static constexpr const char* param_type = "DIRECTION_CAMERA_PARAM_ST";
    static constexpr const char* param_name = "DirectionCameraParam";
    static constexpr const wchar_t* param_namew = L"DirectionCameraParam";
};

static_assert(sizeof(DirectionCameraParam) == 16, "DirectionCameraParam paramdef size does not match detected size");
#endif
