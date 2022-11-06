/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BaseChrSelectMenuParam_H
#define _PARAM_BaseChrSelectMenuParam_H
#pragma once
#include "defs/BASECHR_SELECT_MENU_PARAM_ST.h"

// Type: BASECHR_SELECT_MENU_PARAM_ST
struct BaseChrSelectMenuParam : BASECHR_SELECT_MENU_PARAM_ST {
    static constexpr const char* param_type = "BASECHR_SELECT_MENU_PARAM_ST";
    static constexpr const char* param_name = "BaseChrSelectMenuParam";
    static constexpr const wchar_t* param_namew = L"BaseChrSelectMenuParam";
};

static_assert(sizeof(BaseChrSelectMenuParam) == 32, "BaseChrSelectMenuParam paramdef size does not match detected size");
#endif
