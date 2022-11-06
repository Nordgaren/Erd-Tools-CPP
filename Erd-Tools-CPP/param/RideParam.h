/* This file was automatically generated from regulation data. */
#ifndef _PARAM_RideParam_H
#define _PARAM_RideParam_H
#pragma once
#include "defs/RIDE_PARAM_ST.h"

// Type: RIDE_PARAM_ST
struct RideParam : RIDE_PARAM_ST {
    static constexpr const char* param_type = "RIDE_PARAM_ST";
    static constexpr const char* param_name = "RideParam";
    static constexpr const wchar_t* param_namew = L"RideParam";
};

static_assert(sizeof(RideParam) == 64, "RideParam paramdef size does not match detected size");
#endif
