/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SoundAutoReverbEvaluationDistParam_H
#define _PARAM_SoundAutoReverbEvaluationDistParam_H
#pragma once
#include "defs/SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST.h"

// Type: SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST
struct SoundAutoReverbEvaluationDistParam : SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST {
    static constexpr const char* param_type = "SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST";
    static constexpr const char* param_name = "SoundAutoReverbEvaluationDistParam";
    static constexpr const wchar_t* param_namew = L"SoundAutoReverbEvaluationDistParam";
};

static_assert(sizeof(SoundAutoReverbEvaluationDistParam) == 20, "SoundAutoReverbEvaluationDistParam paramdef size does not match detected size");
#endif
