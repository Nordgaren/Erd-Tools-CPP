/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CACL_CORRECT_GRAPH_ST_H
#define _PARAMDEF_CACL_CORRECT_GRAPH_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CACL_CORRECT_GRAPH_ST {

	// NAME: Threshold point 0 - 閾値ポイント0
	// DESC: Those with "nth threshold [point]" written in the specifications - 仕様書に「n次閾値[point]」と書いてあるもの
	float stageMaxVal0;

	// NAME: Threshold point 1 - 閾値ポイント1
	// DESC: Those with "nth threshold [point]" written in the specifications - 仕様書に「n次閾値[point]」と書いてあるもの
	float stageMaxVal1;

	// NAME: Threshold point 2 - 閾値ポイント2
	// DESC: Those with "nth threshold [point]" written in the specifications - 仕様書に「n次閾値[point]」と書いてあるもの
	float stageMaxVal2;

	// NAME: Threshold point 3 - 閾値ポイント3
	// DESC: Those with "nth threshold [point]" written in the specifications - 仕様書に「n次閾値[point]」と書いてあるもの
	float stageMaxVal3;

	// NAME: Threshold point 4 - 閾値ポイント4
	// DESC: Those with "nth threshold [point]" written in the specifications - 仕様書に「n次閾値[point]」と書いてあるもの
	float stageMaxVal4;

	// NAME: Threshold coefficient 0 - 閾値係数0
	// DESC: Those with "nth threshold [coefficient]" written in the specifications - 仕様書に「n次閾値[係数]」と書いてあるもの
	float stageMaxGrowVal0;

	// NAME: Threshold coefficient 1 - 閾値係数1
	// DESC: Those with "nth threshold [coefficient]" written in the specifications - 仕様書に「n次閾値[係数]」と書いてあるもの
	float stageMaxGrowVal1;

	// NAME: Threshold coefficient 2 - 閾値係数2
	// DESC: Those with "nth threshold [coefficient]" written in the specifications - 仕様書に「n次閾値[係数]」と書いてあるもの
	float stageMaxGrowVal2;

	// NAME: Threshold coefficient 3 - 閾値係数3
	// DESC: Those with "nth threshold [coefficient]" written in the specifications - 仕様書に「n次閾値[係数]」と書いてあるもの
	float stageMaxGrowVal3;

	// NAME: Threshold coefficient 4 - 閾値係数4
	// DESC: Those with "nth threshold [coefficient]" written in the specifications - 仕様書に「n次閾値[係数]」と書いてあるもの
	float stageMaxGrowVal4;

	// NAME: Adjustment factor 0 - 調整係数0
	// DESC: Adjustment factor - 調整係数
	float adjPt_maxGrowVal0;

	// NAME: Adjustment factor 1 - 調整係数1
	// DESC: Adjustment factor - 調整係数
	float adjPt_maxGrowVal1;

	// NAME: Adjustment factor 2 - 調整係数2
	// DESC: Adjustment factor - 調整係数
	float adjPt_maxGrowVal2;

	// NAME: Adjustment factor 3 - 調整係数3
	// DESC: Adjustment factor - 調整係数
	float adjPt_maxGrowVal3;

	// NAME: Adjustment factor 4 - 調整係数4
	// DESC: Adjustment factor - 調整係数
	float adjPt_maxGrowVal4;

	// NAME: Growth Soul Slope of the early graph α1 - 成長ソウル 初期のグラフの傾きα1
	// DESC: Growth Soul Slope of the early graph α1 - 成長ソウル 初期のグラフの傾きα1
	float init_inclination_soul;

	// NAME: Growth soul Early soul adjustment α2 - 成長ソウル 初期のsoul調整α2
	// DESC: Growth soul Early soul adjustment α2 - 成長ソウル 初期のsoul調整α2
	float adjustment_value;

	// NAME: Affects the slope of the graph after the growth soul threshold α3 - 成長ソウル 閾値後のグラフの傾きに影響α3
	// DESC: Affects the slope of the graph after the growth soul threshold α3 - 成長ソウル 閾値後のグラフの傾きに影響α3
	float boundry_inclination_soul;

	// NAME: Growth soul threshold t - 成長ソウル 閾値 t
	// DESC: Growth soul threshold t - 成長ソウル 閾値 t
	float boundry_value;

	// NAME: Padding - パディング
	uint8_t pad[4];
};

#endif
