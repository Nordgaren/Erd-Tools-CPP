/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NetworkMsgParam_H
#define _PARAM_NetworkMsgParam_H
#pragma once
#include "defs/NETWORK_MSG_PARAM_ST.h"

// Type: NETWORK_MSG_PARAM_ST
struct NetworkMsgParam : NETWORK_MSG_PARAM_ST {
    static constexpr const char* param_type = "NETWORK_MSG_PARAM_ST";
    static constexpr const char* param_name = "NetworkMsgParam";
    static constexpr const wchar_t* param_namew = L"NetworkMsgParam";
};

static_assert(sizeof(NetworkMsgParam) == 192, "NetworkMsgParam paramdef size does not match detected size");
#endif
