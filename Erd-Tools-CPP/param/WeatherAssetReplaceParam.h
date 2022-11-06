/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WeatherAssetReplaceParam_H
#define _PARAM_WeatherAssetReplaceParam_H
#pragma once
#include "defs/WEATHER_ASSET_REPLACE_PARAM_ST.h"

// Type: WEATHER_ASSET_REPLACE_PARAM_ST
struct WeatherAssetReplaceParam : WEATHER_ASSET_REPLACE_PARAM_ST {
    static constexpr const char* param_type = "WEATHER_ASSET_REPLACE_PARAM_ST";
    static constexpr const char* param_name = "WeatherAssetReplaceParam";
    static constexpr const wchar_t* param_namew = L"WeatherAssetReplaceParam";
};

static_assert(sizeof(WeatherAssetReplaceParam) == 64, "WeatherAssetReplaceParam paramdef size does not match detected size");
#endif
