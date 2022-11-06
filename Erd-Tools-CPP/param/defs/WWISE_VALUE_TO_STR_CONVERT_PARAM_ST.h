/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WWISE_VALUE_TO_STR_CONVERT_PARAM_ST_H
#define _PARAMDEF_WWISE_VALUE_TO_STR_CONVERT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WWISE_VALUE_TO_STR_CONVERT_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Wwise parameter string - Wwiseパラメータ文字列
	// DESC: Wwise parameter string - Wwiseパラメータ文字列
	char ParamStr[32];
};

#endif
