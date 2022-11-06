/* This file was automatically generated from regulation data. */
#ifndef _PARAM_CutsceneGparamWeatherParam_H
#define _PARAM_CutsceneGparamWeatherParam_H
#pragma once
#include "defs/CUTSCENE_GPARAM_WEATHER_PARAM_ST.h"

// Type: CUTSCENE_GPARAM_WEATHER_PARAM_ST
struct CutsceneGparamWeatherParam : CUTSCENE_GPARAM_WEATHER_PARAM_ST {
    static constexpr const char* param_type = "CUTSCENE_GPARAM_WEATHER_PARAM_ST";
    static constexpr const char* param_name = "CutsceneGparamWeatherParam";
    static constexpr const wchar_t* param_namew = L"CutsceneGparamWeatherParam";
};

static_assert(sizeof(CutsceneGparamWeatherParam) == 96, "CutsceneGparamWeatherParam paramdef size does not match detected size");
#endif
