/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NetworkAreaParam_H
#define _PARAM_NetworkAreaParam_H
#pragma once
#include "defs/NETWORK_AREA_PARAM_ST.h"

// Type: NETWORK_AREA_PARAM_ST
struct NetworkAreaParam : NETWORK_AREA_PARAM_ST {
    static constexpr const char* param_type = "NETWORK_AREA_PARAM_ST";
    static constexpr const char* param_name = "NetworkAreaParam";
    static constexpr const wchar_t* param_namew = L"NetworkAreaParam";
};

static_assert(sizeof(NetworkAreaParam) == 28, "NetworkAreaParam paramdef size does not match detected size");
#endif
