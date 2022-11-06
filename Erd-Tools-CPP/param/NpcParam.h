/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NpcParam_H
#define _PARAM_NpcParam_H
#pragma once
#include "defs/NPC_PARAM_ST.h"

// Type: NPC_PARAM_ST
struct NpcParam : NPC_PARAM_ST {
    static constexpr const char* param_type = "NPC_PARAM_ST";
    static constexpr const char* param_name = "NpcParam";
    static constexpr const wchar_t* param_namew = L"NpcParam";
};

static_assert(sizeof(NpcParam) == 736, "NpcParam paramdef size does not match detected size");
#endif
