/* This file was automatically generated from regulation data. */
#ifndef _PARAM_Bullet_H
#define _PARAM_Bullet_H
#pragma once
#include "defs/BULLET_PARAM_ST.h"

// Type: BULLET_PARAM_ST
struct Bullet : BULLET_PARAM_ST {
    static constexpr const char* param_type = "BULLET_PARAM_ST";
    static constexpr const char* param_name = "Bullet";
    static constexpr const wchar_t* param_namew = L"Bullet";
};

static_assert(sizeof(Bullet) == 272, "Bullet paramdef size does not match detected size");
#endif
