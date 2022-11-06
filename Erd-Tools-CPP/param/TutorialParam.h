/* This file was automatically generated from regulation data. */
#ifndef _PARAM_TutorialParam_H
#define _PARAM_TutorialParam_H
#pragma once
#include "defs/TUTORIAL_PARAM_ST.h"

// Type: TUTORIAL_PARAM_ST
struct TutorialParam : TUTORIAL_PARAM_ST {
    static constexpr const char* param_type = "TUTORIAL_PARAM_ST";
    static constexpr const char* param_name = "TutorialParam";
    static constexpr const wchar_t* param_namew = L"TutorialParam";
};

static_assert(sizeof(TutorialParam) == 32, "TutorialParam paramdef size does not match detected size");
#endif
