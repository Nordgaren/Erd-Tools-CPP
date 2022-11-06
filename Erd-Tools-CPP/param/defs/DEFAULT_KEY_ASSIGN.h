/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_DEFAULT_KEY_ASSIGN_H
#define _PARAMDEF_DEFAULT_KEY_ASSIGN_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 202
struct DEFAULT_KEY_ASSIGN {

	// NAME: Pad 0 - パッド0
	// DESC: Lower suppression pad 0 - 下位抑制パッド0
	uint8_t priority0: 1;

	// NAME: For GUI framework - GUIフレームワーク用
	// DESC: Pad for lower suppression GUI framework - 下位抑制GUIフレームワーク用パッド
	uint8_t priority1: 1;

	// NAME: Pad 2 - パッド2
	// DESC: Lower suppression pad 2 - 下位抑制パッド2
	uint8_t priority2: 1;

	// NAME: Debug menu mode switching - デバッグメニューモード切替
	// DESC: Lower suppression debug menu mode switching pad - 下位抑制デバッグメニューモード切替パッド
	uint8_t priority3: 1;

	// NAME: Pad 4 - パッド4
	// DESC: Lower suppression pad 4 - 下位抑制パッド4
	uint8_t priority4: 1;

	// NAME: Pad debug menu - パッドデバッグメニュー
	// DESC: Lower suppression pad Debug menu pad - 下位抑制パッドデバッグメニューパッド
	uint8_t priority5: 1;

	// NAME: Pad 6 - パッド6
	// DESC: Lower suppression pad 6 - 下位抑制パッド6
	uint8_t priority6: 1;

	// NAME: Pad 7 - パッド7
	// DESC: Lower suppression pad 7 - 下位抑制パッド7
	uint8_t priority7: 1;

	// NAME: Pad 8 - パッド8
	// DESC: Lower suppression pad 8 - 下位抑制パッド8
	uint8_t priority8: 1;

	// NAME: Pad 9 - パッド9
	// DESC: Lower suppression pad 9 - 下位抑制パッド9
	uint8_t priority9: 1;

	// NAME: Pad 10 - パッド10
	// DESC: Lower suppression pad 10 - 下位抑制パッド10
	uint8_t priority10: 1;

	// NAME: Pad 11 - パッド11
	// DESC: Lower suppression pad 11 - 下位抑制パッド11
	uint8_t priority11: 1;

	// NAME: Pad 12 - パッド12
	// DESC: Lower suppression pad 12 - 下位抑制パッド12
	uint8_t priority12: 1;

	// NAME: Pad 13 - パッド13
	// DESC: Lower suppression pad 13 - 下位抑制パッド13
	uint8_t priority13: 1;

	// NAME: Pad 14 - パッド14
	// DESC: Lower suppression pad 14 - 下位抑制パッド14
	uint8_t priority14: 1;

	// NAME: Pad 15 - パッド15
	// DESC: Lower suppression pad 15 - 下位抑制パッド15
	uint8_t priority15: 1;

	// NAME: Pad 16 - パッド16
	// DESC: Lower suppression pad 16 - 下位抑制パッド16
	uint8_t priority16: 1;

	// NAME: Pad 17 - パッド17
	// DESC: Lower suppression pad 17 - 下位抑制パッド17
	uint8_t priority17: 1;

	// NAME: Pad 18 - パッド18
	// DESC: Lower suppression pad 18 - 下位抑制パッド18
	uint8_t priority18: 1;

	// NAME: Pad 19 - パッド19
	// DESC: Lower suppression pad 19 - 下位抑制パッド19
	uint8_t priority19: 1;

	// NAME: Pad 20 - パッド20
	// DESC: Lower suppression pad 20 - 下位抑制パッド20
	uint8_t priority20: 1;

	// NAME: Pad 21 - パッド21
	// DESC: Lower suppression pad 21 - 下位抑制パッド21
	uint8_t priority21: 1;

	// NAME: Pad 22 - パッド22
	// DESC: Lower suppression pad 22 - 下位抑制パッド22
	uint8_t priority22: 1;

	// NAME: Pad 23 - パッド23
	// DESC: Lower suppression pad 23 - 下位抑制パッド23
	uint8_t priority23: 1;

	// NAME: Pad 24 - パッド24
	// DESC: Lower suppression pad 24 - 下位抑制パッド24
	uint8_t priority24: 1;

	// NAME: Pad 25 - パッド25
	// DESC: Lower suppression pad 25 - 下位抑制パッド25
	uint8_t priority25: 1;

	// NAME: Pad 26 - パッド26
	// DESC: Lower suppression pad 26 - 下位抑制パッド26
	uint8_t priority26: 1;

	// NAME: Pad 27 - パッド27
	// DESC: Lower suppression pad 27 - 下位抑制パッド27
	uint8_t priority27: 1;

	// NAME: Pad 28 - パッド28
	// DESC: Lower suppression pad 28 - 下位抑制パッド28
	uint8_t priority28: 1;

	// NAME: Pad 29 - パッド29
	// DESC: Lower suppression pad 29 - 下位抑制パッド29
	uint8_t priority29: 1;

	// NAME: Pad 30 - パッド30
	// DESC: Lower suppression pad 30 - 下位抑制パッド30
	uint8_t priority30: 1;

	// NAME: Pad 31 - パッド31
	// DESC: Lower suppression pad 31 - 下位抑制パッド31
	uint8_t priority31: 1;

	// NAME: dummy - ダミー
	uint8_t dummy[12];

	// NAME: Pad physical key - パッド物理キー
	// DESC: Pad physical key - パッド物理キー
	int32_t phyisicalKey_0;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_0;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_0;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_0;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_0: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_0: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_0: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_0: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_0;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_0;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_0;

	// NAME: Pad physical key - パッド物理キー
	// DESC: Pad physical key - パッド物理キー
	int32_t phyisicalKey_1;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_1;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_1;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_1;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_1: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_1: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_1: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_1: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_1;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_1;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_1;

	// NAME: Pad physical key - パッド物理キー
	// DESC: Pad physical key - パッド物理キー
	int32_t phyisicalKey_2;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_2;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_2;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_2;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_2: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_2: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_2: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_2: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_2;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_2;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_2;

	// NAME: Pad physical key - パッド物理キー
	// DESC: Pad physical key - パッド物理キー
	int32_t phyisicalKey_3;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_3;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_3;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_3;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_3: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_3: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_3: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_3: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_3;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_3;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_3;

	// NAME: PC physical key - PC物理キー
	// DESC: PC physical key - PC物理キー
	int32_t phyisicalKey_4;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_4;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_4;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_4;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_4: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_4: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_4: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_4: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_4;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_4;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_4;

	// NAME: PC physical key - PC物理キー
	// DESC: PC physical key - PC物理キー
	int32_t phyisicalKey_5;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_5;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_5;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_5;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_5: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_5: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_5: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_5: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_5;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_5;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_5;

	// NAME: PC physical key - PC物理キー
	// DESC: PC physical key - PC物理キー
	int32_t phyisicalKey_6;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_6;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_6;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_6;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_6: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_6: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_6: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_6: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_6;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_6;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_6;

	// NAME: PC physical key - PC物理キー
	// DESC: PC physical key - PC物理キー
	int32_t phyisicalKey_7;

	// NAME: How to be pushed - 押され方
	// DESC: How to be pushed - 押され方
	uint8_t traitsType_7;

	// NAME: Analog-to-digital conversion method - アナログ→デジタル変換方法
	// DESC: Analog-to-digital conversion method - アナログ→デジタル変換方法
	uint8_t a2dOperator_7;

	// NAME: Applicable target - 適用ターゲット
	// DESC: Reflection target - 反映ターゲット
	uint8_t applyTarget_7;

	// NAME: Digital / analog - デジタル・アナログ
	// DESC: Digital or analog - デジタルorアナログ
	uint8_t isAnalog_7: 1;

	// NAME: Win64 - Win64
	// DESC: Will it be used in Win64? - Win64で使用されるか
	uint8_t enableWin64_7: 1;

	// NAME: PS4 - PS4
	// DESC: Will it be used on PS4 - PS4で使用されるか
	uint8_t enablePS4_7: 1;

	// NAME: Xbox One - XboxOne
	// DESC: Will it be used on Xbox One - XboxOneで使用されるか
	uint8_t enableXboxOne_7: 1;

	// NAME: time - 時間
	// DESC: time - 時間
	float time1_7;

	// NAME: Interval time for repeat - リピート用インターバル時間
	// DESC: Interval time for repeat - リピート用インターバル時間
	float time2_7;

	// NAME: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	// DESC: Analog-to-digital conversion threshold - アナログ→デジタル変換閾値
	float a2dThreshold_7;
};

#endif
