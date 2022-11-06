/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PartsDrawParam_H
#define _PARAM_PartsDrawParam_H
#pragma once
#include "defs/PARTS_DRAW_PARAM_ST.h"

// Type: PARTS_DRAW_PARAM_ST
struct PartsDrawParam : PARTS_DRAW_PARAM_ST {
    static constexpr const char* param_type = "PARTS_DRAW_PARAM_ST";
    static constexpr const char* param_name = "PartsDrawParam";
    static constexpr const wchar_t* param_namew = L"PartsDrawParam";
};

static_assert(sizeof(PartsDrawParam) == 144, "PartsDrawParam paramdef size does not match detected size");
#endif
