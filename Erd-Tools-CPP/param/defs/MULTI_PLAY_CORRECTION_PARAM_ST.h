/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MULTI_PLAY_CORRECTION_PARAM_ST_H
#define _PARAMDEF_MULTI_PLAY_CORRECTION_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MULTI_PLAY_CORRECTION_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: 1 cooperating client Special effect ID - 協力クライアント1名特殊効果ID
	// DESC: 1 cooperating client Special effect ID - 協力クライアント1名特殊効果ID
	int32_t client1SpEffectId;

	// NAME: 2 cooperating clients Special effect ID - 協力クライアント2名特殊効果ID
	// DESC: 2 cooperating clients Special effect ID - 協力クライアント2名特殊効果ID
	int32_t client2SpEffectId;

	// NAME: 3 cooperating clients Special effect ID - 協力クライアント3名特殊効果ID
	// DESC: 3 cooperating clients Special effect ID - 協力クライアント3名特殊効果ID
	int32_t client3SpEffectId;

	// NAME: Whether to overwrite when the number of cooperating people fluctuates - 協力人数変動時に上書きするか
	// DESC: Whether to overwrite when the number of cooperating people fluctuates - 協力人数変動時に上書きするか
	uint8_t bOverrideSpEffect;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad3[15];
};

#endif
