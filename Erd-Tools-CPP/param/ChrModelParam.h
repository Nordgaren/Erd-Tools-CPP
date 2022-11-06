/* This file was automatically generated from regulation data. */
#ifndef _PARAM_ChrModelParam_H
#define _PARAM_ChrModelParam_H
#pragma once
#include "defs/CHR_MODEL_PARAM_ST.h"

// Type: CHR_MODEL_PARAM_ST
struct ChrModelParam : CHR_MODEL_PARAM_ST {
    static constexpr const char* param_type = "CHR_MODEL_PARAM_ST";
    static constexpr const char* param_name = "ChrModelParam";
    static constexpr const wchar_t* param_namew = L"ChrModelParam";
};

static_assert(sizeof(ChrModelParam) == 16, "ChrModelParam paramdef size does not match detected size");
#endif
