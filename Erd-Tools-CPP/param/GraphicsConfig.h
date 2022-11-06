/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GraphicsConfig_H
#define _PARAM_GraphicsConfig_H
#pragma once
#include "defs/CS_GRAPHICS_CONFIG_PARAM_ST.h"

// Type: CS_GRAPHICS_CONFIG_PARAM_ST
struct GraphicsConfig : CS_GRAPHICS_CONFIG_PARAM_ST {
    static constexpr const char* param_type = "CS_GRAPHICS_CONFIG_PARAM_ST";
    static constexpr const char* param_name = "GraphicsConfig";
    static constexpr const wchar_t* param_namew = L"GraphicsConfig";
};

static_assert(sizeof(GraphicsConfig) == 16, "GraphicsConfig paramdef size does not match detected size");
#endif
