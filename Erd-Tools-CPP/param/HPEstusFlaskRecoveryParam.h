/* This file was automatically generated from regulation data. */
#ifndef _PARAM_HPEstusFlaskRecoveryParam_H
#define _PARAM_HPEstusFlaskRecoveryParam_H
#pragma once
#include "defs/ESTUS_FLASK_RECOVERY_PARAM_ST.h"

// Type: ESTUS_FLASK_RECOVERY_PARAM_ST
struct HPEstusFlaskRecoveryParam : ESTUS_FLASK_RECOVERY_PARAM_ST {
    static constexpr const char* param_type = "ESTUS_FLASK_RECOVERY_PARAM_ST";
    static constexpr const char* param_name = "HPEstusFlaskRecoveryParam";
    static constexpr const wchar_t* param_namew = L"HPEstusFlaskRecoveryParam";
};

static_assert(sizeof(HPEstusFlaskRecoveryParam) == 32, "HPEstusFlaskRecoveryParam paramdef size does not match detected size");
#endif
