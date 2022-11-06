/* This file was automatically generated from regulation data. */
#ifndef _PARAM_BudgetParam_H
#define _PARAM_BudgetParam_H
#pragma once
#include "defs/BUDGET_PARAM_ST.h"

// Type: BUDGET_PARAM_ST
struct BudgetParam : BUDGET_PARAM_ST {
    static constexpr const char* param_type = "BUDGET_PARAM_ST";
    static constexpr const char* param_name = "BudgetParam";
    static constexpr const wchar_t* param_namew = L"BudgetParam";
};

static_assert(sizeof(BudgetParam) == 132, "BudgetParam paramdef size does not match detected size");
#endif
