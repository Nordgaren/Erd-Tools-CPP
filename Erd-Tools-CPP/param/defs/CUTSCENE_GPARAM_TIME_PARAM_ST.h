/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CUTSCENE_GPARAM_TIME_PARAM_ST_H
#define _PARAMDEF_CUTSCENE_GPARAM_TIME_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CUTSCENE_GPARAM_TIME_PARAM_ST {

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

	// NAME: Morning - 朝
	// DESC: Morning (Refer to the cutscene time conversion setting sheet for the conversion time) - 朝(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_Morning;

	// NAME: Noon A - 昼A
	// DESC: Day A (Refer to the cutscene time conversion setting sheet for the conversion time) - 昼A(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_Noon;

	// NAME: Noon B - 昼B
	// DESC: Noon-B (Refer to the cutscene time conversion setting sheet for the conversion time) - 昼B(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_AfterNoon;

	// NAME: evening - 夕
	// DESC: Evening (Refer to the cutscene time conversion setting sheet for the conversion time) - 夕(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_Evening;

	// NAME: Night - 夜
	// DESC: Night (Refer to the cutscene time conversion setting sheet for the conversion time) - 夜(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_Night;

	// NAME: Midnight A - 深夜A
	// DESC: Midnight A (Refer to the cutscene time conversion setting sheet for the conversion time) - 深夜A(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_DeepNightA;

	// NAME: Midnight B - 深夜B
	// DESC: Midnight B (Refer to the cutscene time conversion setting sheet for the conversion time) - 深夜B(変換時刻はカットシーン時間変換設定シートを参照）
	uint8_t DstTimezone_DeepNightB;

	// NAME: reserved - reserved
	// DESC: reserved - reserved
	uint8_t reserved[1];

	// NAME: Specify in-game time at the end of playback [hour] - 再生終了時のインゲーム時刻指定[hour]
	// DESC: Specify in-game time at the end of playback [hour] [-1.0 to 24.0] (-1 (less than 0): do nothing) - 再生終了時のインゲーム時刻指定[hour][-1.0～24.0](-1(0より小さい)：何もしない)
	float PostPlayIngameTime;
};

#endif
