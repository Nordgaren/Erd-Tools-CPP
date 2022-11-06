/* This file was automatically generated from regulation data. */
#ifndef _PARAM_LoadBalancerParam_H
#define _PARAM_LoadBalancerParam_H
#pragma once
#include "defs/LOAD_BALANCER_PARAM_ST.h"

// Type: LOAD_BALANCER_PARAM_ST
struct LoadBalancerParam : LOAD_BALANCER_PARAM_ST {
    static constexpr const char* param_type = "LOAD_BALANCER_PARAM_ST";
    static constexpr const char* param_name = "LoadBalancerParam";
    static constexpr const wchar_t* param_namew = L"LoadBalancerParam";
};

static_assert(sizeof(LoadBalancerParam) == 80, "LoadBalancerParam paramdef size does not match detected size");
#endif
