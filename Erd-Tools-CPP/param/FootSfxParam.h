/* This file was automatically generated from regulation data. */
#ifndef _PARAM_FootSfxParam_H
#define _PARAM_FootSfxParam_H
#pragma once
#include "defs/FOOT_SFX_PARAM_ST.h"

// Type: FOOT_SFX_PARAM_ST
struct FootSfxParam : FOOT_SFX_PARAM_ST {
    static constexpr const char* param_type = "FOOT_SFX_PARAM_ST";
    static constexpr const char* param_name = "FootSfxParam";
    static constexpr const wchar_t* param_namew = L"FootSfxParam";
};

static_assert(sizeof(FootSfxParam) == 800, "FootSfxParam paramdef size does not match detected size");
#endif
