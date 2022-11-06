/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SoundAutoReverbSelectParam_H
#define _PARAM_SoundAutoReverbSelectParam_H
#pragma once
#include "defs/SOUND_AUTO_REVERB_SELECT_PARAM_ST.h"

// Type: SOUND_AUTO_REVERB_SELECT_PARAM_ST
struct SoundAutoReverbSelectParam : SOUND_AUTO_REVERB_SELECT_PARAM_ST {
    static constexpr const char* param_type = "SOUND_AUTO_REVERB_SELECT_PARAM_ST";
    static constexpr const char* param_name = "SoundAutoReverbSelectParam";
    static constexpr const wchar_t* param_namew = L"SoundAutoReverbSelectParam";
};

static_assert(sizeof(SoundAutoReverbSelectParam) == 32, "SoundAutoReverbSelectParam paramdef size does not match detected size");
#endif
