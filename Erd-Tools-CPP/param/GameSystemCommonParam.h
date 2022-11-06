/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GameSystemCommonParam_H
#define _PARAM_GameSystemCommonParam_H
#pragma once
#include "defs/GAME_SYSTEM_COMMON_PARAM_ST.h"

// Type: GAME_SYSTEM_COMMON_PARAM_ST
struct GameSystemCommonParam : GAME_SYSTEM_COMMON_PARAM_ST {
    static constexpr const char* param_type = "GAME_SYSTEM_COMMON_PARAM_ST";
    static constexpr const char* param_name = "GameSystemCommonParam";
    static constexpr const wchar_t* param_namew = L"GameSystemCommonParam";
};

static_assert(sizeof(GameSystemCommonParam) == 800, "GameSystemCommonParam paramdef size does not match detected size");
#endif
