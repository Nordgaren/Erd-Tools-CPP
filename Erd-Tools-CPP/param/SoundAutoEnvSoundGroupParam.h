/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SoundAutoEnvSoundGroupParam_H
#define _PARAM_SoundAutoEnvSoundGroupParam_H
#pragma once
#include "defs/SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST.h"

// Type: SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST
struct SoundAutoEnvSoundGroupParam : SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST {
    static constexpr const char* param_type = "SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST";
    static constexpr const char* param_name = "SoundAutoEnvSoundGroupParam";
    static constexpr const wchar_t* param_namew = L"SoundAutoEnvSoundGroupParam";
};

static_assert(sizeof(SoundAutoEnvSoundGroupParam) == 16, "SoundAutoEnvSoundGroupParam paramdef size does not match detected size");
#endif
