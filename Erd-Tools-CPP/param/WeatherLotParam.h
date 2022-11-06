/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WeatherLotParam_H
#define _PARAM_WeatherLotParam_H
#pragma once
#include "defs/WEATHER_LOT_PARAM_ST.h"

// Type: WEATHER_LOT_PARAM_ST
struct WeatherLotParam : WEATHER_LOT_PARAM_ST {
    static constexpr const char* param_type = "WEATHER_LOT_PARAM_ST";
    static constexpr const char* param_name = "WeatherLotParam";
    static constexpr const wchar_t* param_namew = L"WeatherLotParam";
};

static_assert(sizeof(WeatherLotParam) == 82, "WeatherLotParam paramdef size does not match detected size");
#endif
