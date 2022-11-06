/* This file was automatically generated from regulation data. */
#ifndef _PARAM_RollingObjLotParam_H
#define _PARAM_RollingObjLotParam_H
#pragma once
#include "defs/ROLLING_OBJ_LOT_PARAM_ST.h"

// Type: ROLLING_OBJ_LOT_PARAM_ST
struct RollingObjLotParam : ROLLING_OBJ_LOT_PARAM_ST {
    static constexpr const char* param_type = "ROLLING_OBJ_LOT_PARAM_ST";
    static constexpr const char* param_name = "RollingObjLotParam";
    static constexpr const wchar_t* param_namew = L"RollingObjLotParam";
};

static_assert(sizeof(RollingObjLotParam) == 64, "RollingObjLotParam paramdef size does not match detected size");
#endif
