/* This file was automatically generated from regulation data. */
#ifndef _PARAM_CutsceneMapIdParam_H
#define _PARAM_CutsceneMapIdParam_H
#pragma once
#include "defs/CUTSCENE_MAP_ID_PARAM_ST.h"

// Type: CUTSCENE_MAP_ID_PARAM_ST
struct CutsceneMapIdParam : CUTSCENE_MAP_ID_PARAM_ST {
    static constexpr const char* param_type = "CUTSCENE_MAP_ID_PARAM_ST";
    static constexpr const char* param_name = "CutsceneMapIdParam";
    static constexpr const wchar_t* param_namew = L"CutsceneMapIdParam";
};

static_assert(sizeof(CutsceneMapIdParam) == 48, "CutsceneMapIdParam paramdef size does not match detected size");
#endif
