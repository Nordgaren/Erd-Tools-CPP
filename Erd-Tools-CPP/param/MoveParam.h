/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MoveParam_H
#define _PARAM_MoveParam_H
#pragma once
#include "defs/MOVE_PARAM_ST.h"

// Type: MOVE_PARAM_ST
struct MoveParam : MOVE_PARAM_ST {
    static constexpr const char* param_type = "MOVE_PARAM_ST";
    static constexpr const char* param_name = "MoveParam";
    static constexpr const wchar_t* param_namew = L"MoveParam";
};

static_assert(sizeof(MoveParam) == 144, "MoveParam paramdef size does not match detected size");
#endif
