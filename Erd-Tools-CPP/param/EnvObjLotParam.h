/* This file was automatically generated from regulation data. */
#ifndef _PARAM_EnvObjLotParam_H
#define _PARAM_EnvObjLotParam_H
#pragma once
#include "defs/ENV_OBJ_LOT_PARAM_ST.h"

// Type: ENV_OBJ_LOT_PARAM_ST
struct EnvObjLotParam : ENV_OBJ_LOT_PARAM_ST {
    static constexpr const char* param_type = "ENV_OBJ_LOT_PARAM_ST";
    static constexpr const char* param_name = "EnvObjLotParam";
    static constexpr const wchar_t* param_namew = L"EnvObjLotParam";
};

static_assert(sizeof(EnvObjLotParam) == 64, "EnvObjLotParam paramdef size does not match detected size");
#endif
