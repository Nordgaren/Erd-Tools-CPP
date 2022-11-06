/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MPEstusFlaskRecoveryParam_H
#define _PARAM_MPEstusFlaskRecoveryParam_H
#pragma once
#include "defs/ESTUS_FLASK_RECOVERY_PARAM_ST.h"

// Type: ESTUS_FLASK_RECOVERY_PARAM_ST
struct MPEstusFlaskRecoveryParam : ESTUS_FLASK_RECOVERY_PARAM_ST {
    static constexpr const char* param_type = "ESTUS_FLASK_RECOVERY_PARAM_ST";
    static constexpr const char* param_name = "MPEstusFlaskRecoveryParam";
    static constexpr const wchar_t* param_namew = L"MPEstusFlaskRecoveryParam";
};

static_assert(sizeof(MPEstusFlaskRecoveryParam) == 32, "MPEstusFlaskRecoveryParam paramdef size does not match detected size");
#endif
