/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WhiteSignCoolTimeParam_H
#define _PARAM_WhiteSignCoolTimeParam_H
#pragma once
#include "defs/WHITE_SIGN_COOL_TIME_PARAM_ST.h"

// Type: WHITE_SIGN_COOL_TIME_PARAM_ST
struct WhiteSignCoolTimeParam : WHITE_SIGN_COOL_TIME_PARAM_ST {
    static constexpr const char* param_type = "WHITE_SIGN_COOL_TIME_PARAM_ST";
    static constexpr const char* param_name = "WhiteSignCoolTimeParam";
    static constexpr const wchar_t* param_namew = L"WhiteSignCoolTimeParam";
};

static_assert(sizeof(WhiteSignCoolTimeParam) == 16, "WhiteSignCoolTimeParam paramdef size does not match detected size");
#endif
