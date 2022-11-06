/* This file was automatically generated from regulation data. */
#ifndef _PARAM_AiSoundParam_H
#define _PARAM_AiSoundParam_H
#pragma once
#include "defs/AI_SOUND_PARAM_ST.h"

// Type: AI_SOUND_PARAM_ST
struct AiSoundParam : AI_SOUND_PARAM_ST {
    static constexpr const char* param_type = "AI_SOUND_PARAM_ST";
    static constexpr const char* param_name = "AiSoundParam";
    static constexpr const wchar_t* param_namew = L"AiSoundParam";
};

static_assert(sizeof(AiSoundParam) == 32, "AiSoundParam paramdef size does not match detected size");
#endif
