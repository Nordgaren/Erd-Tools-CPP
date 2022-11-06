/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SIGN_PUDDLE_PARAM_ST_H
#define _PARAMDEF_SIGN_PUDDLE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SIGN_PUDDLE_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Simple match area ID - 簡易マッチエリアID
	// DESC: ID of the simple match area to which it belongs - 属している簡易マッチエリアのID
	int32_t matchAreaId;

	// NAME: pad1 - pad1
	uint8_t pad1[24];
};

#endif
