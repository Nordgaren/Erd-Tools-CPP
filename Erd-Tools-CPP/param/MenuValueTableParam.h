/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MenuValueTableParam_H
#define _PARAM_MenuValueTableParam_H
#pragma once
#include "defs/MENU_VALUE_TABLE_SPEC.h"

// Type: MENU_VALUE_TABLE_SPEC
struct MenuValueTableParam : MENU_VALUE_TABLE_SPEC {
    static constexpr const char* param_type = "MENU_VALUE_TABLE_SPEC";
    static constexpr const char* param_name = "MenuValueTableParam";
    static constexpr const wchar_t* param_namew = L"MenuValueTableParam";
};

static_assert(sizeof(MenuValueTableParam) == 12, "MenuValueTableParam paramdef size does not match detected size");
#endif
