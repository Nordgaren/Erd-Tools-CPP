/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SeMaterialConvertParam_H
#define _PARAM_SeMaterialConvertParam_H
#pragma once
#include "defs/SE_MATERIAL_CONVERT_PARAM_ST.h"

// Type: SE_MATERIAL_CONVERT_PARAM_ST
struct SeMaterialConvertParam : SE_MATERIAL_CONVERT_PARAM_ST {
    static constexpr const char* param_type = "SE_MATERIAL_CONVERT_PARAM_ST";
    static constexpr const char* param_name = "SeMaterialConvertParam";
    static constexpr const wchar_t* param_namew = L"SeMaterialConvertParam";
};

static_assert(sizeof(SeMaterialConvertParam) == 4, "SeMaterialConvertParam paramdef size does not match detected size");
#endif
