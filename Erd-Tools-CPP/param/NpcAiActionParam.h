/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NpcAiActionParam_H
#define _PARAM_NpcAiActionParam_H
#pragma once
#include "defs/NPC_AI_ACTION_PARAM_ST.h"

// Type: NPC_AI_ACTION_PARAM_ST
struct NpcAiActionParam : NPC_AI_ACTION_PARAM_ST {
    static constexpr const char* param_type = "NPC_AI_ACTION_PARAM_ST";
    static constexpr const char* param_name = "NpcAiActionParam";
    static constexpr const wchar_t* param_namew = L"NpcAiActionParam";
};

static_assert(sizeof(NpcAiActionParam) == 16, "NpcAiActionParam paramdef size does not match detected size");
#endif
