/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GraphicsCommonParam_H
#define _PARAM_GraphicsCommonParam_H
#pragma once
#include "defs/GRAPHICS_COMMON_PARAM_ST.h"

// Type: GRAPHICS_COMMON_PARAM_ST
struct GraphicsCommonParam : GRAPHICS_COMMON_PARAM_ST {
    static constexpr const char* param_type = "GRAPHICS_COMMON_PARAM_ST";
    static constexpr const char* param_name = "GraphicsCommonParam";
    static constexpr const wchar_t* param_namew = L"GraphicsCommonParam";
};

static_assert(sizeof(GraphicsCommonParam) == 256, "GraphicsCommonParam paramdef size does not match detected size");
#endif
