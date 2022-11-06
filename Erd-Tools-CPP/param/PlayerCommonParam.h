/* This file was automatically generated from regulation data. */
#ifndef _PARAM_PlayerCommonParam_H
#define _PARAM_PlayerCommonParam_H
#pragma once
#include "defs/PLAYER_COMMON_PARAM_ST.h"

// Type: PLAYER_COMMON_PARAM_ST
struct PlayerCommonParam : PLAYER_COMMON_PARAM_ST {
    static constexpr const char* param_type = "PLAYER_COMMON_PARAM_ST";
    static constexpr const char* param_name = "PlayerCommonParam";
    static constexpr const wchar_t* param_namew = L"PlayerCommonParam";
};

static_assert(sizeof(PlayerCommonParam) == 256, "PlayerCommonParam paramdef size does not match detected size");
#endif
