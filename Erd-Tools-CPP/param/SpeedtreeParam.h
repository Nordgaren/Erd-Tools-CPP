/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SpeedtreeParam_H
#define _PARAM_SpeedtreeParam_H
#pragma once
#include "defs/SPEEDTREE_MODEL_PARAM_ST.h"

// Type: SPEEDTREE_MODEL_PARAM_ST
struct SpeedtreeParam : SPEEDTREE_MODEL_PARAM_ST {
    static constexpr const char* param_type = "SPEEDTREE_MODEL_PARAM_ST";
    static constexpr const char* param_name = "SpeedtreeParam";
    static constexpr const wchar_t* param_namew = L"SpeedtreeParam";
};

static_assert(sizeof(SpeedtreeParam) == 40, "SpeedtreeParam paramdef size does not match detected size");
#endif
