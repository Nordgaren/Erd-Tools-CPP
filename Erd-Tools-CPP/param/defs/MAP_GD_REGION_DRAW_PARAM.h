/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MAP_GD_REGION_DRAW_PARAM_H
#define _PARAMDEF_MAP_GD_REGION_DRAW_PARAM_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MAP_GD_REGION_DRAW_PARAM {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Local light scale overwrite value at the time of IV shooting - IV撮影時のローカルライトスケール上書き値
	// DESC: Local light scale value at the time of IV shooting (0 or less: no overwrite) [GR] SEQ13338 [Irradiance volume] I want to change the indirect scale of the SFX light source uniformly. - IV撮影時のローカルライトスケール値(0以下：上書きなし) 【GR】SEQ13338 【イラディアンスボリューム】SFX光源のインダイレクトスケールを一律に変更したい
	float overrideIVLocalLightScale;
};

#endif
