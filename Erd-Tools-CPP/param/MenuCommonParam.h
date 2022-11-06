/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MenuCommonParam_H
#define _PARAM_MenuCommonParam_H
#pragma once
#include "defs/MENU_COMMON_PARAM_ST.h"

// Type: MENU_COMMON_PARAM_ST
struct MenuCommonParam : MENU_COMMON_PARAM_ST {
    static constexpr const char* param_type = "MENU_COMMON_PARAM_ST";
    static constexpr const char* param_name = "MenuCommonParam";
    static constexpr const wchar_t* param_namew = L"MenuCommonParam";
};

static_assert(sizeof(MenuCommonParam) == 256, "MenuCommonParam paramdef size does not match detected size");
#endif
