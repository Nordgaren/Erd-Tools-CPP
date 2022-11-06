/* This file was automatically generated from regulation data. */
#ifndef _PARAM_LoadBalancerDrawDistScaleParam_ps5_H
#define _PARAM_LoadBalancerDrawDistScaleParam_ps5_H
#pragma once
#include "defs/LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST.h"

// Type: LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST
struct LoadBalancerDrawDistScaleParam_ps5 : LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST {
    static constexpr const char* param_type = "LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST";
    static constexpr const char* param_name = "LoadBalancerDrawDistScaleParam_ps5";
    static constexpr const wchar_t* param_namew = L"LoadBalancerDrawDistScaleParam_ps5";
};

static_assert(sizeof(LoadBalancerDrawDistScaleParam_ps5) == 128, "LoadBalancerDrawDistScaleParam_ps5 paramdef size does not match detected size");
#endif
