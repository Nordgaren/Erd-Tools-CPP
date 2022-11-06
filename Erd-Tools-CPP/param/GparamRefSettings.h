/* This file was automatically generated from regulation data. */
#ifndef _PARAM_GparamRefSettings_H
#define _PARAM_GparamRefSettings_H
#pragma once
#include "defs/GPARAM_REF_SETTINGS_PARAM_ST.h"

// Type: GPARAM_REF_SETTINGS_PARAM_ST
struct GparamRefSettings : GPARAM_REF_SETTINGS_PARAM_ST {
    static constexpr const char* param_type = "GPARAM_REF_SETTINGS_PARAM_ST";
    static constexpr const char* param_name = "GparamRefSettings";
    static constexpr const wchar_t* param_namew = L"GparamRefSettings";
};

static_assert(sizeof(GparamRefSettings) == 32, "GparamRefSettings paramdef size does not match detected size");
#endif
