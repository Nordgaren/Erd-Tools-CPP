/* This file was automatically generated from regulation data. */
#ifndef _PARAM_KnockBackParam_H
#define _PARAM_KnockBackParam_H
#pragma once
#include "defs/KNOCKBACK_PARAM_ST.h"

// Type: KNOCKBACK_PARAM_ST
struct KnockBackParam : KNOCKBACK_PARAM_ST {
    static constexpr const char* param_type = "KNOCKBACK_PARAM_ST";
    static constexpr const char* param_name = "KnockBackParam";
    static constexpr const wchar_t* param_namew = L"KnockBackParam";
};

static_assert(sizeof(KnockBackParam) == 128, "KnockBackParam paramdef size does not match detected size");
#endif
