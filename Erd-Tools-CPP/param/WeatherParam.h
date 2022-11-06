/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WeatherParam_H
#define _PARAM_WeatherParam_H
#pragma once
#include "defs/WEATHER_PARAM_ST.h"

// Type: WEATHER_PARAM_ST
struct WeatherParam : WEATHER_PARAM_ST {
    static constexpr const char* param_type = "WEATHER_PARAM_ST";
    static constexpr const char* param_name = "WeatherParam";
    static constexpr const wchar_t* param_namew = L"WeatherParam";
};

static_assert(sizeof(WeatherParam) == 68, "WeatherParam paramdef size does not match detected size");
#endif
