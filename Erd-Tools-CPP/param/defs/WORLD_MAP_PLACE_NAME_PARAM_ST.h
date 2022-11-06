/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WORLD_MAP_PLACE_NAME_PARAM_ST_H
#define _PARAMDEF_WORLD_MAP_PLACE_NAME_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WORLD_MAP_PLACE_NAME_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Map fragment parameter ID - 地図断片パラメータID
	// DESC: Map fragment parameter ID. Display text if you have this map fragment - 地図断片パラメータID。この地図断片を持っていればテキストを表示する
	int32_t worldMapPieceId;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. PlaceName.xlsm - 表示するテキストID。PlaceName.xlsm
	int32_t textId;

	// NAME: Padding - パディング
	uint8_t pad1[4];

	// NAME: Area number - エリア番号
	// DESC: AA part of mAA_BB_CC_DD - mAA_BB_CC_DD の AA 部分
	uint8_t areaNo;

	// NAME: Grid X number - グリッドX番号
	// DESC: BB part of mAA_BB_CC_DD - mAA_BB_CC_DD の BB 部分
	uint8_t gridXNo;

	// NAME: Grid Z number - グリッドZ番号
	// DESC: CC part of mAA_BB_CC_DD - mAA_BB_CC_DD の CC 部分
	uint8_t gridZNo;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad2[1];

	// NAME: X coordinate - X座標
	// DESC: X coordinate - X座標
	float posX;

	// NAME: Y coordinate - Y座標
	// DESC: Y coordinate (not used) - Y座標（使っていない）
	float posY;

	// NAME: Z coordinate - Z座標
	// DESC: Z coordinate - Z座標
	float posZ;
};

#endif
