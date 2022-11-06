/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NpcThinkParam_H
#define _PARAM_NpcThinkParam_H
#pragma once
#include "defs/NPC_THINK_PARAM_ST.h"

// Type: NPC_THINK_PARAM_ST
struct NpcThinkParam : NPC_THINK_PARAM_ST {
    static constexpr const char* param_type = "NPC_THINK_PARAM_ST";
    static constexpr const char* param_name = "NpcThinkParam";
    static constexpr const wchar_t* param_namew = L"NpcThinkParam";
};

static_assert(sizeof(NpcThinkParam) == 228, "NpcThinkParam paramdef size does not match detected size");
#endif
