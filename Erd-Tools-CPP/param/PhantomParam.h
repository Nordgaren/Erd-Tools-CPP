/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PhantomParam_H
#define _PARAM_PhantomParam_H
#pragma once
#include "defs/PHANTOM_PARAM_ST.h"

// Type: PHANTOM_PARAM_ST
struct PhantomParam : PHANTOM_PARAM_ST {
    static constexpr const char* param_type = "PHANTOM_PARAM_ST";
    static constexpr const char* param_name = "PhantomParam";
    static constexpr const wchar_t* param_namew = L"PhantomParam";
};

static_assert(sizeof(PhantomParam) == 56, "PhantomParam paramdef size does not match detected size");
#endif
