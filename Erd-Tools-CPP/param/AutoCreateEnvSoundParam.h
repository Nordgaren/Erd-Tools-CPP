/* This file was automatically generated from regulation data. */
#ifndef _PARAM_AutoCreateEnvSoundParam_H
#define _PARAM_AutoCreateEnvSoundParam_H
#pragma once
#include "defs/AUTO_CREATE_ENV_SOUND_PARAM_ST.h"

// Type: AUTO_CREATE_ENV_SOUND_PARAM_ST
struct AutoCreateEnvSoundParam : AUTO_CREATE_ENV_SOUND_PARAM_ST {
    static constexpr const char* param_type = "AUTO_CREATE_ENV_SOUND_PARAM_ST";
    static constexpr const char* param_name = "AutoCreateEnvSoundParam";
    static constexpr const wchar_t* param_namew = L"AutoCreateEnvSoundParam";
};

static_assert(sizeof(AutoCreateEnvSoundParam) == 32, "AutoCreateEnvSoundParam paramdef size does not match detected size");
#endif
