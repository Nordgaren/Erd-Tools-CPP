/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BulletCreateLimitParam_H
#define _PARAM_BulletCreateLimitParam_H
#pragma once
#include "defs/BULLET_CREATE_LIMIT_PARAM_ST.h"

// Type: BULLET_CREATE_LIMIT_PARAM_ST
struct BulletCreateLimitParam : BULLET_CREATE_LIMIT_PARAM_ST {
    static constexpr const char* param_type = "BULLET_CREATE_LIMIT_PARAM_ST";
    static constexpr const char* param_name = "BulletCreateLimitParam";
    static constexpr const wchar_t* param_namew = L"BulletCreateLimitParam";
};

static_assert(sizeof(BulletCreateLimitParam) == 32, "BulletCreateLimitParam paramdef size does not match detected size");
#endif
