/* This file was automatically generated from regulation data. */
#ifndef _PARAM_NpcAiBehaviorProbability_H
#define _PARAM_NpcAiBehaviorProbability_H
#pragma once
#include "defs/NPC_AI_BEHAVIOR_PROBABILITY_PARAM_ST.h"

// Type: NPC_AI_BEHAVIOR_PROBABILITY_PARAM_ST
struct NpcAiBehaviorProbability : NPC_AI_BEHAVIOR_PROBABILITY_PARAM_ST {
    static constexpr const char* param_type = "NPC_AI_BEHAVIOR_PROBABILITY_PARAM_ST";
    static constexpr const char* param_name = "NpcAiBehaviorProbability";
    static constexpr const wchar_t* param_namew = L"NpcAiBehaviorProbability";
};

static_assert(sizeof(NpcAiBehaviorProbability) == 400, "NpcAiBehaviorProbability paramdef size does not match detected size");
#endif
