/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GameAreaParam_H
#define _PARAM_GameAreaParam_H
#pragma once
#include "defs/GAME_AREA_PARAM_ST.h"

// Type: GAME_AREA_PARAM_ST
struct GameAreaParam : GAME_AREA_PARAM_ST {
    static constexpr const char* param_type = "GAME_AREA_PARAM_ST";
    static constexpr const char* param_name = "GameAreaParam";
    static constexpr const wchar_t* param_namew = L"GameAreaParam";
};

static_assert(sizeof(GameAreaParam) == 96, "GameAreaParam paramdef size does not match detected size");
#endif
