/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WorldMapPieceParam_H
#define _PARAM_WorldMapPieceParam_H
#pragma once
#include "defs/WORLD_MAP_PIECE_PARAM_ST.h"

// Type: WORLD_MAP_PIECE_PARAM_ST
struct WorldMapPieceParam : WORLD_MAP_PIECE_PARAM_ST {
    static constexpr const char* param_type = "WORLD_MAP_PIECE_PARAM_ST";
    static constexpr const char* param_name = "WorldMapPieceParam";
    static constexpr const wchar_t* param_namew = L"WorldMapPieceParam";
};

static_assert(sizeof(WorldMapPieceParam) == 64, "WorldMapPieceParam paramdef size does not match detected size");
#endif
