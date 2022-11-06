/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EnemyCommonParam_H
#define _PARAM_EnemyCommonParam_H
#pragma once
#include "defs/ENEMY_COMMON_PARAM_ST.h"

// Type: ENEMY_COMMON_PARAM_ST
struct EnemyCommonParam : ENEMY_COMMON_PARAM_ST {
    static constexpr const char* param_type = "ENEMY_COMMON_PARAM_ST";
    static constexpr const char* param_name = "EnemyCommonParam";
    static constexpr const wchar_t* param_namew = L"EnemyCommonParam";
};

static_assert(sizeof(EnemyCommonParam) == 256, "EnemyCommonParam paramdef size does not match detected size");
#endif
