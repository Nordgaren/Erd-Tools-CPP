/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MimicryEstablishmentTexParam_H
#define _PARAM_MimicryEstablishmentTexParam_H
#pragma once
#include "defs/MIMICRY_ESTABLISHMENT_TEX_PARAM_ST.h"

// Type: MIMICRY_ESTABLISHMENT_TEX_PARAM_ST
struct MimicryEstablishmentTexParam : MIMICRY_ESTABLISHMENT_TEX_PARAM_ST {
    static constexpr const char* param_type = "MIMICRY_ESTABLISHMENT_TEX_PARAM_ST";
    static constexpr const char* param_name = "MimicryEstablishmentTexParam";
    static constexpr const wchar_t* param_namew = L"MimicryEstablishmentTexParam";
};

static_assert(sizeof(MimicryEstablishmentTexParam) == 16, "MimicryEstablishmentTexParam paramdef size does not match detected size");
#endif
