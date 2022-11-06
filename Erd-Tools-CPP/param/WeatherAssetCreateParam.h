/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WeatherAssetCreateParam_H
#define _PARAM_WeatherAssetCreateParam_H
#pragma once
#include "defs/WEATHER_ASSET_CREATE_PARAM_ST.h"

// Type: WEATHER_ASSET_CREATE_PARAM_ST
struct WeatherAssetCreateParam : WEATHER_ASSET_CREATE_PARAM_ST {
    static constexpr const char* param_type = "WEATHER_ASSET_CREATE_PARAM_ST";
    static constexpr const char* param_name = "WeatherAssetCreateParam";
    static constexpr const wchar_t* param_namew = L"WeatherAssetCreateParam";
};

static_assert(sizeof(WeatherAssetCreateParam) == 64, "WeatherAssetCreateParam paramdef size does not match detected size");
#endif
