/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MenuOffscrRendParam_H
#define _PARAM_MenuOffscrRendParam_H
#pragma once
#include "defs/MENU_OFFSCR_REND_PARAM_ST.h"

// Type: MENU_OFFSCR_REND_PARAM_ST
struct MenuOffscrRendParam : MENU_OFFSCR_REND_PARAM_ST {
    static constexpr const char* param_type = "MENU_OFFSCR_REND_PARAM_ST";
    static constexpr const char* param_name = "MenuOffscrRendParam";
    static constexpr const wchar_t* param_namew = L"MenuOffscrRendParam";
};

static_assert(sizeof(MenuOffscrRendParam) == 64, "MenuOffscrRendParam paramdef size does not match detected size");
#endif
