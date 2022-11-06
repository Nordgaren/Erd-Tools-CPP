/* This file was automatically generated from regulation data. */
#ifndef _PARAM_CharaInitParam_H
#define _PARAM_CharaInitParam_H
#pragma once
#include "defs/CHARACTER_INIT_PARAM.h"

// Type: CHARACTER_INIT_PARAM
struct CharaInitParam : CHARACTER_INIT_PARAM {
    static constexpr const char* param_type = "CHARACTER_INIT_PARAM";
    static constexpr const char* param_name = "CharaInitParam";
    static constexpr const wchar_t* param_namew = L"CharaInitParam";
};

static_assert(sizeof(CharaInitParam) == 320, "CharaInitParam paramdef size does not match detected size");
#endif
