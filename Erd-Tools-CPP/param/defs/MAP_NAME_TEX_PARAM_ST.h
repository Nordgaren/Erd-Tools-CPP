/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MAP_NAME_TEX_PARAM_ST_H
#define _PARAMDEF_MAP_NAME_TEX_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MAP_NAME_TEX_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: R - R
	// DESC: Color information (R) of the map image before conversion. Pixels with matching RGB values are associated with this parameter - 変換前の地図画像のカラー情報（R）。RGB値が一致したピクセルとこのパラメータが紐づく
	uint8_t srcR;

	// NAME: G - G
	// DESC: Color information (G) of the map image before conversion. Pixels with matching RGB values are associated with this parameter - 変換前の地図画像のカラー情報（G）。RGB値が一致したピクセルとこのパラメータが紐づく
	uint8_t srcG;

	// NAME: B - B
	// DESC: Color information (B) of the map image before conversion. Pixels with matching RGB values are associated with this parameter - 変換前の地図画像のカラー情報（B）。RGB値が一致したピクセルとこのパラメータが紐づく
	uint8_t srcB;

	// NAME: pad - パッド
	// DESC: pad. For the time being, leave it open for "image color information (A)" - パッド。一応「画像色情報（A）」用で空けておく
	uint8_t pad1[1];

	// NAME: Map name ID_for displaying place names - マップ名ID_地名表示用
	// DESC: Map name ID for displaying place names [PlaceName] (0: invalid value) - 地名表示用のマップ名ID[PlaceName](0:無効値)
	int32_t mapNameId;

	// NAME: Pad 2 - パッド2
	uint8_t pad2[4];
};

#endif
