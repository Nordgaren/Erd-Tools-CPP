/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SoundCutsceneParam_H
#define _PARAM_SoundCutsceneParam_H
#pragma once
#include "defs/SOUND_CUTSCENE_PARAM_ST.h"

// Type: SOUND_CUTSCENE_PARAM_ST
struct SoundCutsceneParam : SOUND_CUTSCENE_PARAM_ST {
    static constexpr const char* param_type = "SOUND_CUTSCENE_PARAM_ST";
    static constexpr const char* param_name = "SoundCutsceneParam";
    static constexpr const wchar_t* param_namew = L"SoundCutsceneParam";
};

static_assert(sizeof(SoundCutsceneParam) == 36, "SoundCutsceneParam paramdef size does not match detected size");
#endif
