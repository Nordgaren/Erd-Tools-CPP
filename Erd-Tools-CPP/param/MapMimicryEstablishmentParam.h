/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MapMimicryEstablishmentParam_H
#define _PARAM_MapMimicryEstablishmentParam_H
#pragma once
#include "defs/MAP_MIMICRY_ESTABLISHMENT_PARAM_ST.h"

// Type: MAP_MIMICRY_ESTABLISHMENT_PARAM_ST
struct MapMimicryEstablishmentParam : MAP_MIMICRY_ESTABLISHMENT_PARAM_ST {
    static constexpr const char* param_type = "MAP_MIMICRY_ESTABLISHMENT_PARAM_ST";
    static constexpr const char* param_name = "MapMimicryEstablishmentParam";
    static constexpr const wchar_t* param_namew = L"MapMimicryEstablishmentParam";
};

static_assert(sizeof(MapMimicryEstablishmentParam) == 64, "MapMimicryEstablishmentParam paramdef size does not match detected size");
#endif
