/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CAMERA_FADE_PARAM_ST_H
#define _PARAMDEF_CAMERA_FADE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CAMERA_FADE_PARAM_ST {

	// NAME: Distance to be transparent (m) - 透明になりきる距離(m)
	// DESC: Near Fade minimum distance (m): Distance where α = 0 - Nearフェード最小距離(m) : α = 0になる距離
	float NearMinDist;

	// NAME: Distance that begins to become transparent (m) - 透明になり始める距離(m)
	// DESC: Near fade maximum distance (m): Starting distance between α = Middel Alpha - Nearフェード最大距離(m) : α = MiddelAlphaとなる間の開始距離
	float NearMaxDist;

	// NAME: Distance to become translucent (m) - 半透明状態になりきる距離(m)
	// DESC: Minimum distance of Far fade (m): End distance between α = Middle Alpha - Farフェードの最小距離(m) : α = MiddleAlphaとなる間の終了距離
	float FarMinDist;

	// NAME: Distance (m) at which it begins to become translucent - 半透明状態になり始める距離(m)
	// DESC: Maximum Far Fade Distance (m): Distance where α = 1 - Farフェードの最大距離(m) : α = 1になる距離
	float FarMaxDist;

	// NAME: Translucent darkness (α value) - 半透明状態の濃さ(α値)
	// DESC: Intermediate α value - 中間のα値
	float MiddleAlpha;

	// NAME: dummy - ダミー
	uint8_t dummy[12];
};

#endif
