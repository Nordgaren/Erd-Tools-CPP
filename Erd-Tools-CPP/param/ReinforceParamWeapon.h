/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ReinforceParamWeapon_H
#define _PARAM_ReinforceParamWeapon_H
#pragma once
#include "defs/REINFORCE_PARAM_WEAPON_ST.h"

// Type: REINFORCE_PARAM_WEAPON_ST
struct ReinforceParamWeapon : REINFORCE_PARAM_WEAPON_ST {
    static constexpr const char* param_type = "REINFORCE_PARAM_WEAPON_ST";
    static constexpr const char* param_name = "ReinforceParamWeapon";
    static constexpr const wchar_t* param_namew = L"ReinforceParamWeapon";
};

static_assert(sizeof(ReinforceParamWeapon) == 128, "ReinforceParamWeapon paramdef size does not match detected size");
#endif
