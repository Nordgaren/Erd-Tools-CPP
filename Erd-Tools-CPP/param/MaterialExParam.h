/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MaterialExParam_H
#define _PARAM_MaterialExParam_H
#pragma once
#include "defs/MATERIAL_EX_PARAM_ST.h"

// Type: MATERIAL_EX_PARAM_ST
struct MaterialExParam : MATERIAL_EX_PARAM_ST {
    static constexpr const char* param_type = "MATERIAL_EX_PARAM_ST";
    static constexpr const char* param_name = "MaterialExParam";
    static constexpr const wchar_t* param_namew = L"MaterialExParam";
};

static_assert(sizeof(MaterialExParam) == 96, "MaterialExParam paramdef size does not match detected size");
#endif
