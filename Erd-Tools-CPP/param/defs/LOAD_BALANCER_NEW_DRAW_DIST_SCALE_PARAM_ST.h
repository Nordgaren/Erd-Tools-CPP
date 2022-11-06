/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST_H
#define _PARAMDEF_LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 0
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST {

	// NAME: Activation level (start) - 発動レベル(開始)
	// DESC: Drawing distance scale activation level (start) - 描画距離スケール発動レベル(開始)
	uint8_t DrawDist_LvBegin;

	// NAME: Activation level (end) - 発動レベル(終了)
	// DESC: Drawing distance scale activation level (completed) - 描画距離スケール発動レベル(修了)
	uint8_t DrawDist_LvEnd;

	// NAME: Reserve - 予備
	// DESC: Reserve - 予備
	uint8_t reserve0[2];

	// NAME: Scale (start) - スケール（開始）
	// DESC: Drawing distance scale (start) - 描画距離スケール（開始）
	float DrawDist_ScaleBegin;

	// NAME: Scale (end) - スケール（終了）
	// DESC: Drawing distance scale (completed) - 描画距離スケール（修了）
	float DrawDist_ScaleEnd;

	// NAME: Activation level (start) - 発動レベル(開始)
	// DESC: Shadow drawing distance scale activation level (start) - 影描画距離スケール発動レベル(開始)
	uint8_t ShadwDrawDist_LvBegin;

	// NAME: Activation level (end) - 発動レベル(終了)
	// DESC: Shadow drawing distance scale activation level (completed) - 影描画距離スケール発動レベル(修了)
	uint8_t ShadwDrawDist_LvEnd;

	// NAME: Reserve - 予備
	// DESC: Reserve - 予備
	uint8_t reserve1[2];

	// NAME: Scale (start) - スケール（開始）
	// DESC: Shadow drawing distance scale (start) - 影描画距離スケール（開始）
	float ShadwDrawDist_ScaleBegin;

	// NAME: Scale (end) - スケール（終了）
	// DESC: Shadow drawing distance scale (completed) - 影描画距離スケール（修了）
	float ShadwDrawDist_ScaleEnd;

	// NAME: Reserve - 予備
	// DESC: Reserve - 予備
	uint8_t reserve2[24];
};

#endif
