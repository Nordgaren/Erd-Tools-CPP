/* This file was automatically generated from regulation data. */
#ifndef _PARAM_AssetModelSfxParam_H
#define _PARAM_AssetModelSfxParam_H
#pragma once
#include "defs/ASSET_MODEL_SFX_PARAM_ST.h"

// Type: ASSET_MODEL_SFX_PARAM_ST
struct AssetModelSfxParam : ASSET_MODEL_SFX_PARAM_ST {
    static constexpr const char* param_type = "ASSET_MODEL_SFX_PARAM_ST";
    static constexpr const char* param_name = "AssetModelSfxParam";
    static constexpr const wchar_t* param_namew = L"AssetModelSfxParam";
};

static_assert(sizeof(AssetModelSfxParam) == 128, "AssetModelSfxParam paramdef size does not match detected size");
#endif
