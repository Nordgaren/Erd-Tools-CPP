/* This file was automatically generated from regulation data. */
#ifndef _PARAM_SwordArtsParam_H
#define _PARAM_SwordArtsParam_H
#pragma once
#include "defs/SWORD_ARTS_PARAM_ST.h"

// Type: SWORD_ARTS_PARAM_ST
struct SwordArtsParam : SWORD_ARTS_PARAM_ST {
    static constexpr const char* param_type = "SWORD_ARTS_PARAM_ST";
    static constexpr const char* param_name = "SwordArtsParam";
    static constexpr const wchar_t* param_namew = L"SwordArtsParam";
};

static_assert(sizeof(SwordArtsParam) == 32, "SwordArtsParam paramdef size does not match detected size");
#endif
