/* This file was automatically generated from regulation data. */
#ifndef _PARAM_RoleParam_H
#define _PARAM_RoleParam_H
#pragma once
#include "defs/ROLE_PARAM_ST.h"

// Type: ROLE_PARAM_ST
struct RoleParam : ROLE_PARAM_ST {
    static constexpr const char* param_type = "ROLE_PARAM_ST";
    static constexpr const char* param_name = "RoleParam";
    static constexpr const wchar_t* param_namew = L"RoleParam";
};

static_assert(sizeof(RoleParam) == 128, "RoleParam paramdef size does not match detected size");
#endif
