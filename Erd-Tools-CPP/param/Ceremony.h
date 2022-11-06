/* This file was automatically generated from regulation data. */
#ifndef _PARAM_Ceremony_H
#define _PARAM_Ceremony_H
#pragma once
#include "defs/CEREMONY_PARAM_ST.h"

// Type: CEREMONY_PARAM_ST
struct Ceremony : CEREMONY_PARAM_ST {
    static constexpr const char* param_type = "CEREMONY_PARAM_ST";
    static constexpr const char* param_name = "Ceremony";
    static constexpr const wchar_t* param_namew = L"Ceremony";
};

static_assert(sizeof(Ceremony) == 36, "Ceremony paramdef size does not match detected size");
#endif
