/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WeatherLotTexParam_H
#define _PARAM_WeatherLotTexParam_H
#pragma once
#include "defs/WEATHER_LOT_TEX_PARAM_ST.h"

// Type: WEATHER_LOT_TEX_PARAM_ST
struct WeatherLotTexParam : WEATHER_LOT_TEX_PARAM_ST {
    static constexpr const char* param_type = "WEATHER_LOT_TEX_PARAM_ST";
    static constexpr const char* param_name = "WeatherLotTexParam";
    static constexpr const wchar_t* param_namew = L"WeatherLotTexParam";
};

static_assert(sizeof(WeatherLotTexParam) == 16, "WeatherLotTexParam paramdef size does not match detected size");
#endif
