/* This file was automatically generated from regulation data. */
#ifndef _PARAM_AssetMaterialSfxParam_H
#define _PARAM_AssetMaterialSfxParam_H
#pragma once
#include "defs/ASSET_MATERIAL_SFX_PARAM_ST.h"

// Type: ASSET_MATERIAL_SFX_PARAM_ST
struct AssetMaterialSfxParam : ASSET_MATERIAL_SFX_PARAM_ST {
    static constexpr const char* param_type = "ASSET_MATERIAL_SFX_PARAM_ST";
    static constexpr const char* param_name = "AssetMaterialSfxParam";
    static constexpr const wchar_t* param_namew = L"AssetMaterialSfxParam";
};

static_assert(sizeof(AssetMaterialSfxParam) == 128, "AssetMaterialSfxParam paramdef size does not match detected size");
#endif
