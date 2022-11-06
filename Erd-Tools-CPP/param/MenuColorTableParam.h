/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MenuColorTableParam_H
#define _PARAM_MenuColorTableParam_H
#pragma once
#include "defs/MENU_PARAM_COLOR_TABLE_ST.h"

// Type: MENU_PARAM_COLOR_TABLE_ST
struct MenuColorTableParam : MENU_PARAM_COLOR_TABLE_ST {
    static constexpr const char* param_type = "MENU_PARAM_COLOR_TABLE_ST";
    static constexpr const char* param_name = "MenuColorTableParam";
    static constexpr const wchar_t* param_namew = L"MenuColorTableParam";
};

static_assert(sizeof(MenuColorTableParam) == 32, "MenuColorTableParam paramdef size does not match detected size");
#endif
