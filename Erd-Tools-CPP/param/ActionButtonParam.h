/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ActionButtonParam_H
#define _PARAM_ActionButtonParam_H
#pragma once
#include "defs/ACTIONBUTTON_PARAM_ST.h"

// Type: ACTIONBUTTON_PARAM_ST
struct ActionButtonParam : ACTIONBUTTON_PARAM_ST {
    static constexpr const char* param_type = "ACTIONBUTTON_PARAM_ST";
    static constexpr const char* param_name = "ActionButtonParam";
    static constexpr const wchar_t* param_namew = L"ActionButtonParam";
};

static_assert(sizeof(ActionButtonParam) == 100, "ActionButtonParam paramdef size does not match detected size");
#endif
