/* This file was automatically generated from regulation data. */
#ifndef _PARAM_AttackElementCorrectParam_H
#define _PARAM_AttackElementCorrectParam_H
#pragma once
#include "defs/ATTACK_ELEMENT_CORRECT_PARAM_ST.h"

// Type: ATTACK_ELEMENT_CORRECT_PARAM_ST
struct AttackElementCorrectParam : ATTACK_ELEMENT_CORRECT_PARAM_ST {
    static constexpr const char* param_type = "ATTACK_ELEMENT_CORRECT_PARAM_ST";
    static constexpr const char* param_name = "AttackElementCorrectParam";
    static constexpr const wchar_t* param_namew = L"AttackElementCorrectParam";
};

static_assert(sizeof(AttackElementCorrectParam) == 128, "AttackElementCorrectParam paramdef size does not match detected size");
#endif
