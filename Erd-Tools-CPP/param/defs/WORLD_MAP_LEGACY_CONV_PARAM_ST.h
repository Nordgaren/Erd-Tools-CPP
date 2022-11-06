/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WORLD_MAP_LEGACY_CONV_PARAM_ST_H
#define _PARAMDEF_WORLD_MAP_LEGACY_CONV_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WORLD_MAP_LEGACY_CONV_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Conversion source map ID: Area number - 変換元マップID：エリア番号
	// DESC: Conversion source map ID: Area number - 変換元マップID：エリア番号
	uint8_t srcAreaNo;

	// NAME: Source map ID: Grid X - 変換元マップID：グリッドX
	// DESC: Source map ID: Grid X - 変換元マップID：グリッドX
	uint8_t srcGridXNo;

	// NAME: Source map ID: Grid Z - 変換元マップID：グリッドZ
	// DESC: Source map ID: Grid Z - 変換元マップID：グリッドZ
	uint8_t srcGridZNo;

	// NAME: Padding 1 - パディング１
	// DESC: Padding 1 - パディング１
	uint8_t pad1[1];

	// NAME: Source map reference coordinates X - 変換元マップ基準座標X
	// DESC: Source map reference coordinates X - 変換元マップ基準座標X
	float srcPosX;

	// NAME: Source map reference coordinates Y - 変換元マップ基準座標Y
	// DESC: Source map reference coordinates Y - 変換元マップ基準座標Y
	float srcPosY;

	// NAME: Source map reference coordinates Z - 変換元マップ基準座標Z
	// DESC: Source map reference coordinates Z - 変換元マップ基準座標Z
	float srcPosZ;

	// NAME: Conversion destination map ID: Area number - 変換先マップID：エリア番号
	// DESC: Conversion destination map ID: Area number - 変換先マップID：エリア番号
	uint8_t dstAreaNo;

	// NAME: Destination map ID: Grid X - 変換先マップID：グリッドX
	// DESC: Destination map ID: Grid X - 変換先マップID：グリッドX
	uint8_t dstGridXNo;

	// NAME: Destination map ID: Grid Z - 変換先マップID：グリッドZ
	// DESC: Destination map ID: Grid Z - 変換先マップID：グリッドZ
	uint8_t dstGridZNo;

	// NAME: Padding 2 - パディング２
	// DESC: Padding 2 - パディング２
	uint8_t pad2[1];

	// NAME: Destination map reference coordinates X - 変換先マップ基準座標X
	// DESC: Destination map reference coordinates X - 変換先マップ基準座標X
	float dstPosX;

	// NAME: Destination map reference coordinates Y - 変換先マップ基準座標Y
	// DESC: Destination map reference coordinates Y - 変換先マップ基準座標Y
	float dstPosY;

	// NAME: Destination map reference coordinates Z - 変換先マップ基準座標Z
	// DESC: Destination map reference coordinates Z - 変換先マップ基準座標Z
	float dstPosZ;

	// NAME: Is it a reference connection point? - 基準となる接続点か
	// DESC: Is it a reference connection point? One reference connection point is always set for one conversion source map ID. - 基準となる接続点か。１つの変換元マップIDには必ず一つは基準となる接続点が設定される
	uint8_t isBasePoint: 1;

	// NAME: Padding 3 - パディング３
	// DESC: Padding 3 - パディング３
	uint8_t pad3: 7;

	// NAME: Padding 4 - パディング４
	// DESC: Padding 4 - パディング４
	uint8_t pad4[11];
};

#endif
