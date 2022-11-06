/* This file was automatically generated from regulation data. */
#ifndef _PARAM_LoadBalancerDrawDistScaleParam_H
#define _PARAM_LoadBalancerDrawDistScaleParam_H
#pragma once
#include "defs/LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST.h"

// Type: LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST
struct LoadBalancerDrawDistScaleParam : LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST {
    static constexpr const char* param_type = "LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST";
    static constexpr const char* param_name = "LoadBalancerDrawDistScaleParam";
    static constexpr const wchar_t* param_namew = L"LoadBalancerDrawDistScaleParam";
};

static_assert(sizeof(LoadBalancerDrawDistScaleParam) == 128, "LoadBalancerDrawDistScaleParam paramdef size does not match detected size");
#endif
