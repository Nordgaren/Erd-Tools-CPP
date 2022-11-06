/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WEATHER_LOT_PARAM_ST_H
#define _PARAMDEF_WEATHER_LOT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 5
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WEATHER_LOT_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Weather type 0 - 天候種類0
	// DESC: Weather type 0 - 天候種類0
	int16_t weatherType0;

	// NAME: Weather type 1 - 天候種類1
	// DESC: Weather type 1 - 天候種類1
	int16_t weatherType1;

	// NAME: Weather type 2 - 天候種類2
	// DESC: Weather type 2 - 天候種類2
	int16_t weatherType2;

	// NAME: Weather type 3 - 天候種類3
	// DESC: Weather type 3 - 天候種類3
	int16_t weatherType3;

	// NAME: Weather type 4 - 天候種類4
	// DESC: Weather type 4 - 天候種類4
	int16_t weatherType4;

	// NAME: Weather type 5 - 天候種類5
	// DESC: Weather type 5 - 天候種類5
	int16_t weatherType5;

	// NAME: Weather type 6 - 天候種類6
	// DESC: Weather type 6 - 天候種類6
	int16_t weatherType6;

	// NAME: Weather type 7 - 天候種類7
	// DESC: Weather type 7 - 天候種類7
	int16_t weatherType7;

	// NAME: Weather type 8 - 天候種類8
	// DESC: Weather type 8 - 天候種類8
	int16_t weatherType8;

	// NAME: Weather type 9 - 天候種類9
	// DESC: Weather type 9 - 天候種類9
	int16_t weatherType9;

	// NAME: Weather type 10 - 天候種類10
	// DESC: Weather type 10 - 天候種類10
	int16_t weatherType10;

	// NAME: Weather type 11 - 天候種類11
	// DESC: Weather type 11 - 天候種類11
	int16_t weatherType11;

	// NAME: Weather type 12 - 天候種類12
	// DESC: Weather type 12 - 天候種類12
	int16_t weatherType12;

	// NAME: Weather type 13 - 天候種類13
	// DESC: Weather type 13 - 天候種類13
	int16_t weatherType13;

	// NAME: Weather type 14 - 天候種類14
	// DESC: Weather type 14 - 天候種類14
	int16_t weatherType14;

	// NAME: Weather type 15 - 天候種類15
	// DESC: Weather type 15 - 天候種類15
	int16_t weatherType15;

	// NAME: Lottery weight 0 - 抽選ウェイト0
	// DESC: Lottery weight 0 - 抽選ウェイト0
	uint16_t lotteryWeight0;

	// NAME: Lottery weight 1 - 抽選ウェイト1
	// DESC: Lottery weight 1 - 抽選ウェイト1
	uint16_t lotteryWeight1;

	// NAME: Lottery weight 2 - 抽選ウェイト2
	// DESC: Lottery weight 2 - 抽選ウェイト2
	uint16_t lotteryWeight2;

	// NAME: Lottery weight 3 - 抽選ウェイト3
	// DESC: Lottery weight 3 - 抽選ウェイト3
	uint16_t lotteryWeight3;

	// NAME: Lottery weight 4 - 抽選ウェイト4
	// DESC: Lottery weight 4 - 抽選ウェイト4
	uint16_t lotteryWeight4;

	// NAME: Lottery weight 5 - 抽選ウェイト5
	// DESC: Lottery weight 5 - 抽選ウェイト5
	uint16_t lotteryWeight5;

	// NAME: Lottery weight 6 - 抽選ウェイト6
	// DESC: Lottery weight 6 - 抽選ウェイト6
	uint16_t lotteryWeight6;

	// NAME: Lottery weight 7 - 抽選ウェイト7
	// DESC: Lottery weight 7 - 抽選ウェイト7
	uint16_t lotteryWeight7;

	// NAME: Lottery weight 8 - 抽選ウェイト8
	// DESC: Lottery weight 8 - 抽選ウェイト8
	uint16_t lotteryWeight8;

	// NAME: Lottery weight 9 - 抽選ウェイト9
	// DESC: Lottery weight 9 - 抽選ウェイト9
	uint16_t lotteryWeight9;

	// NAME: Lottery weight 10 - 抽選ウェイト10
	// DESC: Lottery weight 10 - 抽選ウェイト10
	uint16_t lotteryWeight10;

	// NAME: Lottery weight 11 - 抽選ウェイト11
	// DESC: Lottery weight 11 - 抽選ウェイト11
	uint16_t lotteryWeight11;

	// NAME: Lottery weight 12 - 抽選ウェイト12
	// DESC: Lottery weight 12 - 抽選ウェイト12
	uint16_t lotteryWeight12;

	// NAME: Lottery weight 13 - 抽選ウェイト13
	// DESC: Lottery weight 13 - 抽選ウェイト13
	uint16_t lotteryWeight13;

	// NAME: Lottery weight 14 - 抽選ウェイト14
	// DESC: Lottery weight 14 - 抽選ウェイト14
	uint16_t lotteryWeight14;

	// NAME: Lottery weight 15 - 抽選ウェイト15
	// DESC: Lottery weight 15 - 抽選ウェイト15
	uint16_t lotteryWeight15;

	// NAME: Time zone condition list - 時間帯条件リスト
	// DESC: Time zone condition list - 時間帯条件リスト
	uint8_t timezoneLimit;

	// NAME: Direct time specification_start_hour - 直接時間指定_開始_時
	// DESC: Direct time specification_start_hour - 直接時間指定_開始_時
	uint8_t timezoneStartHour;

	// NAME: Direct time specification_start_minute - 直接時間指定_開始_分
	// DESC: Direct time specification_start_minute - 直接時間指定_開始_分
	uint8_t timezoneStartMinute;

	// NAME: Direct time specification_start_hour - 直接時間指定_開始_時
	// DESC: Direct time specification_start_hour - 直接時間指定_開始_時
	uint8_t timezoneEndHour;

	// NAME: Direct time specification_start_minute - 直接時間指定_開始_分
	// DESC: Direct time specification_start_minute - 直接時間指定_開始_分
	uint8_t timezoneEndMinute;

	// NAME: Reserve - リザーブ
	// DESC: Reserved area - 予約領域
	uint8_t reserve[9];
};

#endif
