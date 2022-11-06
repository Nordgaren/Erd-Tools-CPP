/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_GRAPHICS_COMMON_PARAM_ST_H
#define _PARAMDEF_GRAPHICS_COMMON_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct GRAPHICS_COMMON_PARAM_ST {

	// NAME: Decal generation position offset when a bullet hits HIT INS - HIT INSに弾丸が当たった時のデカール発生位置オフセット
	// DESC: The position where the decal that occurs when hitting HIT INS is offset by this value in the normal direction. - HIT INSに当たった時に発生するデカールの発生位置を法線方向にこの値だけオフセットする
	float hitBulletDecalOffset_HitIns;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved02[8];

	// NAME: Decal fade range when the character gets wet [m] - キャラが濡れた時のデカールフェード範囲[m]
	// DESC: Fade range that erases decals when the character gets wet [m] - キャラが濡れた時にデカールを消すフェード範囲[m]
	float charaWetDecalFadeRange;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved04[240];
};

#endif
