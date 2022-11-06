/* This file was automatically generated from regulation data. */
#ifndef _PARAM_Magic_H
#define _PARAM_Magic_H
#pragma once
#include "defs/MAGIC_PARAM_ST.h"

// Type: MAGIC_PARAM_ST
struct Magic : MAGIC_PARAM_ST {
    static constexpr const char* param_type = "MAGIC_PARAM_ST";
    static constexpr const char* param_name = "Magic";
    static constexpr const wchar_t* param_namew = L"Magic";
};

static_assert(sizeof(Magic) == 168, "Magic paramdef size does not match detected size");
#endif
