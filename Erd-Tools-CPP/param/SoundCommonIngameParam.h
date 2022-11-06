/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SoundCommonIngameParam_H
#define _PARAM_SoundCommonIngameParam_H
#pragma once
#include "defs/SOUND_COMMON_INGAME_PARAM_ST.h"

// Type: SOUND_COMMON_INGAME_PARAM_ST
struct SoundCommonIngameParam : SOUND_COMMON_INGAME_PARAM_ST {
    static constexpr const char* param_type = "SOUND_COMMON_INGAME_PARAM_ST";
    static constexpr const char* param_name = "SoundCommonIngameParam";
    static constexpr const wchar_t* param_namew = L"SoundCommonIngameParam";
};

static_assert(sizeof(SoundCommonIngameParam) == 64, "SoundCommonIngameParam paramdef size does not match detected size");
#endif
