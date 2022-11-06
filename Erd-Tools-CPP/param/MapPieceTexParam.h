/* This file was automatically generated from regulation data. */
#ifndef _PARAM_MapPieceTexParam_H
#define _PARAM_MapPieceTexParam_H
#pragma once
#include "defs/MAP_PIECE_TEX_PARAM_ST.h"

// Type: MAP_PIECE_TEX_PARAM_ST
struct MapPieceTexParam : MAP_PIECE_TEX_PARAM_ST {
    static constexpr const char* param_type = "MAP_PIECE_TEX_PARAM_ST";
    static constexpr const char* param_name = "MapPieceTexParam";
    static constexpr const wchar_t* param_namew = L"MapPieceTexParam";
};

static_assert(sizeof(MapPieceTexParam) == 16, "MapPieceTexParam paramdef size does not match detected size");
#endif
