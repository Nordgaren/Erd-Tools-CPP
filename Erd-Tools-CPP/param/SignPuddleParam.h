/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SignPuddleParam_H
#define _PARAM_SignPuddleParam_H
#pragma once
#include "defs/SIGN_PUDDLE_PARAM_ST.h"

// Type: SIGN_PUDDLE_PARAM_ST
struct SignPuddleParam : SIGN_PUDDLE_PARAM_ST {
    static constexpr const char* param_type = "SIGN_PUDDLE_PARAM_ST";
    static constexpr const char* param_name = "SignPuddleParam";
    static constexpr const wchar_t* param_namew = L"SignPuddleParam";
};

static_assert(sizeof(SignPuddleParam) == 32, "SignPuddleParam paramdef size does not match detected size");
#endif
