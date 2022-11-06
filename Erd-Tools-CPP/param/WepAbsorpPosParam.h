/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WepAbsorpPosParam_H
#define _PARAM_WepAbsorpPosParam_H
#pragma once
#include "defs/WEP_ABSORP_POS_PARAM_ST.h"

// Type: WEP_ABSORP_POS_PARAM_ST
struct WepAbsorpPosParam : WEP_ABSORP_POS_PARAM_ST {
    static constexpr const char* param_type = "WEP_ABSORP_POS_PARAM_ST";
    static constexpr const char* param_name = "WepAbsorpPosParam";
    static constexpr const wchar_t* param_namew = L"WepAbsorpPosParam";
};

static_assert(sizeof(WepAbsorpPosParam) == 96, "WepAbsorpPosParam paramdef size does not match detected size");
#endif
