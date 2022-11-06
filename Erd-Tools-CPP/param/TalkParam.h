/* This file was automatically generated from regulation data. */
#ifndef _PARAM_TalkParam_H
#define _PARAM_TalkParam_H
#pragma once
#include "defs/TALK_PARAM_ST.h"

// Type: TALK_PARAM_ST
struct TalkParam : TALK_PARAM_ST {
    static constexpr const char* param_type = "TALK_PARAM_ST";
    static constexpr const char* param_name = "TalkParam";
    static constexpr const wchar_t* param_namew = L"TalkParam";
};

static_assert(sizeof(TalkParam) == 96, "TalkParam paramdef size does not match detected size");
#endif
