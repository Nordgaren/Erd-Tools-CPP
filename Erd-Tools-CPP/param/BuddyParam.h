/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BuddyParam_H
#define _PARAM_BuddyParam_H
#pragma once
#include "defs/BUDDY_PARAM_ST.h"

// Type: BUDDY_PARAM_ST
struct BuddyParam : BUDDY_PARAM_ST {
    static constexpr const char* param_type = "BUDDY_PARAM_ST";
    static constexpr const char* param_name = "BuddyParam";
    static constexpr const wchar_t* param_namew = L"BuddyParam";
};

static_assert(sizeof(BuddyParam) == 96, "BuddyParam paramdef size does not match detected size");
#endif
