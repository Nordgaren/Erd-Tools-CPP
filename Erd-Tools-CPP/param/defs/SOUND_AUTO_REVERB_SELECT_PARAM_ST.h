/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SOUND_AUTO_REVERB_SELECT_PARAM_ST_H
#define _PARAMDEF_SOUND_AUTO_REVERB_SELECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SOUND_AUTO_REVERB_SELECT_PARAM_ST {

	// NAME: Reverb type - リバーブタイプ
	// DESC: Reverb type - リバーブタイプ
	uint32_t reverbType;

	// NAME: Area No - エリアNo
	// DESC: Condition: Area No. (-1: Invalid) - 条件：エリアNo(-1:無効)
	int32_t AreaNo;

	// NAME: Indoor and outdoor - 屋内外
	// DESC: Condition: Indoor / outdoor designation (0: outdoor, 1: indoor) (-1: invalid) - 条件：屋内外指定(0:屋外,1:屋内)(-1:無効)
	int8_t IndoorOutdoor;

	// NAME: Evaluation distance number A - 使用評価距離番号A
	// DESC: Condition: Evaluation distance number A to use (-1: invalid) - 条件：使用する評価距離の番号A(-1:無効)
	int8_t useDistNoA;

	// NAME: Evaluation distance number B - 使用評価距離番号B
	// DESC: Condition: Evaluation distance number B to be used (-1: invalid) - 条件：使用する評価距離の番号B(-1:無効)
	int8_t useDistNoB;

	// NAME: pad0 - pad0
	// DESC: pad0 - pad0
	uint8_t pad0[1];

	// NAME: Distance MinA [m] - 距離MinA[m]
	// DESC: Condition: For evaluation distance minimum specification A (less than 0: invalid) - 条件：評価距離最小指定A用(0より小さい:無効)
	float DistMinA;

	// NAME: Distance MaxA [m] - 距離MaxA[m]
	// DESC: Condition: For evaluation distance maximum specification A (less than 0: invalid) - 条件：評価距離最大指定A用(0より小さい:無効)
	float DistMaxA;

	// NAME: Distance MinB [m] - 距離MinB[m]
	// DESC: Condition: For evaluation distance minimum specification A (less than 0: invalid) - 条件：評価距離最小指定A用(0より小さい:無効)
	float DistMinB;

	// NAME: Distance MaxB [m] - 距離MaxB[m]
	// DESC: Condition: For evaluation distance maximum specification A (less than 0: invalid) - 条件：評価距離最大指定A用(0より小さい:無効)
	float DistMaxB;

	// NAME: Minimum number of collision points No Hits - 衝突点NoHit数最小数
	// DESC: Condition: No Hit number (-1: invalid) - 条件：NoHit数(-1:無効)
	int32_t NoHitNumMin;
};

#endif
