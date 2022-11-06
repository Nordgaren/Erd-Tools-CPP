/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NetworkParam_H
#define _PARAM_NetworkParam_H
#pragma once
#include "defs/NETWORK_PARAM_ST.h"

// Type: NETWORK_PARAM_ST
struct NetworkParam : NETWORK_PARAM_ST {
    static constexpr const char* param_type = "NETWORK_PARAM_ST";
    static constexpr const char* param_name = "NetworkParam";
    static constexpr const wchar_t* param_namew = L"NetworkParam";
};

static_assert(sizeof(NetworkParam) == 632, "NetworkParam paramdef size does not match detected size");
#endif
