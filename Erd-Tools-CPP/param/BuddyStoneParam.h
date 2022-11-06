/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BuddyStoneParam_H
#define _PARAM_BuddyStoneParam_H
#pragma once
#include "defs/BUDDY_STONE_PARAM_ST.h"

// Type: BUDDY_STONE_PARAM_ST
struct BuddyStoneParam : BUDDY_STONE_PARAM_ST {
    static constexpr const char* param_type = "BUDDY_STONE_PARAM_ST";
    static constexpr const char* param_name = "BuddyStoneParam";
    static constexpr const wchar_t* param_namew = L"BuddyStoneParam";
};

static_assert(sizeof(BuddyStoneParam) == 64, "BuddyStoneParam paramdef size does not match detected size");
#endif
