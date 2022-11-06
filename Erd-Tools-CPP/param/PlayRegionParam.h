/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PlayRegionParam_H
#define _PARAM_PlayRegionParam_H
#pragma once
#include "defs/PLAY_REGION_PARAM_ST.h"

// Type: PLAY_REGION_PARAM_ST
struct PlayRegionParam : PLAY_REGION_PARAM_ST {
    static constexpr const char* param_type = "PLAY_REGION_PARAM_ST";
    static constexpr const char* param_name = "PlayRegionParam";
    static constexpr const wchar_t* param_namew = L"PlayRegionParam";
};

static_assert(sizeof(PlayRegionParam) == 272, "PlayRegionParam paramdef size does not match detected size");
#endif
