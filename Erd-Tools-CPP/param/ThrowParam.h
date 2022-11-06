/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ThrowParam_H
#define _PARAM_ThrowParam_H
#pragma once
#include "defs/THROW_PARAM_ST.h"

// Type: THROW_PARAM_ST
struct ThrowParam : THROW_PARAM_ST {
    static constexpr const char* param_type = "THROW_PARAM_ST";
    static constexpr const char* param_name = "ThrowParam";
    static constexpr const wchar_t* param_namew = L"ThrowParam";
};

static_assert(sizeof(ThrowParam) == 128, "ThrowParam paramdef size does not match detected size");
#endif
