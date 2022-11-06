/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CUTSCENE_TEXTURE_LOAD_PARAM_ST_H
#define _PARAMDEF_CUTSCENE_TEXTURE_LOAD_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CUTSCENE_TEXTURE_LOAD_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Is it a debug parameter? - デバッグパラメータか
	// DESC: Parameters marked with a circle are excluded from all packages (because they are for debugging). - ○をつけたパラメータは全パッケージから除外します（デバッグ用なので）
	uint8_t disableParam_Debug: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 6;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Texture name 00 - テクスチャ名 00
	// DESC: Texture name 00 - テクスチャ名 00
	char texName_00[16];

	// NAME: Texture name 01 - テクスチャ名 01
	// DESC: Texture name 01 - テクスチャ名 01
	char texName_01[16];

	// NAME: Texture name 02 - テクスチャ名 02
	// DESC: Texture name 02 - テクスチャ名 02
	char texName_02[16];

	// NAME: Texture name 03 - テクスチャ名 03
	// DESC: Texture name 03 - テクスチャ名 03
	char texName_03[16];

	// NAME: Texture name 04 - テクスチャ名 04
	// DESC: Texture name 04 - テクスチャ名 04
	char texName_04[16];

	// NAME: Texture name 05 - テクスチャ名 05
	// DESC: Texture name 05 - テクスチャ名 05
	char texName_05[16];

	// NAME: Texture name 06 - テクスチャ名 06
	// DESC: Texture name 06 - テクスチャ名 06
	char texName_06[16];

	// NAME: Texture name 07 - テクスチャ名 07
	// DESC: Texture name 07 - テクスチャ名 07
	char texName_07[16];

	// NAME: Texture name 08 - テクスチャ名 08
	// DESC: Texture name 08 - テクスチャ名 08
	char texName_08[16];

	// NAME: Texture name 09 - テクスチャ名 09
	// DESC: Texture name 09 - テクスチャ名 09
	char texName_09[16];

	// NAME: Texture name 10 - テクスチャ名 10
	// DESC: Texture name 10 - テクスチャ名 10
	char texName_10[16];

	// NAME: Texture name 11 - テクスチャ名 11
	// DESC: Texture name 11 - テクスチャ名 11
	char texName_11[16];

	// NAME: Texture name 12 - テクスチャ名 12
	// DESC: Texture name 12 - テクスチャ名 12
	char texName_12[16];

	// NAME: Texture name 13 - テクスチャ名 13
	// DESC: Texture name 13 - テクスチャ名 13
	char texName_13[16];

	// NAME: Texture name 14 - テクスチャ名 14
	// DESC: Texture name 14 - テクスチャ名 14
	char texName_14[16];

	// NAME: Texture name 15 - テクスチャ名 15
	// DESC: Texture name 15 - テクスチャ名 15
	char texName_15[16];
};

#endif
