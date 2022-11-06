/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST_H
#define _PARAMDEF_MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST {

	// NAME: Grid can be constructed Height Min [m] - グリッド構築可能高さMin[m]
	// DESC: Minimum height that can be built in the grid [m]. (LOD 2 units) - グリッド構築可能高さ最小値[m]。(LOD2単位)
	float GridEnableCreateHeightMin;

	// NAME: Grid can be constructed Height Max [m] - グリッド構築可能高さMax[m]
	// DESC: Maximum height that can be constructed in the grid [m]. (LOD 2 units) - グリッド構築可能高さ最大値[m]。(LOD2単位)
	float GridEnableCreateHeightMax;

	// NAME: Reserve - リザーブ
	// DESC: Reserve - リザーブ
	uint8_t Reserve[24];
};

#endif
