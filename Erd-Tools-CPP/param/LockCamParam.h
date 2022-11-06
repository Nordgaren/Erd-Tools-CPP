/* This file was automatically generated from regulation data. */
#ifndef _PARAM_LockCamParam_H
#define _PARAM_LockCamParam_H
#pragma once
#include "defs/LOCK_CAM_PARAM_ST.h"

// Type: LOCK_CAM_PARAM_ST
struct LockCamParam : LOCK_CAM_PARAM_ST {
    static constexpr const char* param_type = "LOCK_CAM_PARAM_ST";
    static constexpr const char* param_name = "LockCamParam";
    static constexpr const wchar_t* param_namew = L"LockCamParam";
};

static_assert(sizeof(LockCamParam) == 128, "LockCamParam paramdef size does not match detected size");
#endif
