/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CHR_MODEL_PARAM_ST_H
#define _PARAMDEF_CHR_MODEL_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CHR_MODEL_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Model used memory type - モデルの使用メモリタイプ
	// DESC: Model used memory type - モデルの使用メモリタイプ
	uint8_t modelMemoryType;

	// NAME: Texture usage memory type - テクスチャの使用メモリタイプ
	// DESC: Texture usage memory type - テクスチャの使用メモリタイプ
	uint8_t texMemoryType;

	// NAME: Camera fade parameter ID - カメラフェードパラメータID
	// DESC: Camera fade parameter ID (-1: refer to material, 0: do not disappear, 1 ~: parameter ID) - カメラフェードパラメータID（-1：マテリアルを参照、0：消えない、1～：パラメータID）
	int16_t cameraDitherFadeId;

	// NAME: Report animation capacity (MB) - 報告アニメ容量(MB)
	// DESC: If this value is exceeded, a report will be sent by the reporting system. - この値を超えると報告システムで報告が来る。
	float reportAnimMemSizeMb;
};

#endif
