/* This file was automatically generated from regulation data. */
#ifndef _PARAM_CalcCorrectGraph_H
#define _PARAM_CalcCorrectGraph_H
#pragma once
#include "defs/CACL_CORRECT_GRAPH_ST.h"

// Type: CACL_CORRECT_GRAPH_ST
struct CalcCorrectGraph : CACL_CORRECT_GRAPH_ST {
    static constexpr const char* param_type = "CACL_CORRECT_GRAPH_ST";
    static constexpr const char* param_name = "CalcCorrectGraph";
    static constexpr const wchar_t* param_namew = L"CalcCorrectGraph";
};

static_assert(sizeof(CalcCorrectGraph) == 80, "CalcCorrectGraph paramdef size does not match detected size");
#endif
