/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WEATHER_ASSET_CREATE_PARAM_ST_H
#define _PARAMDEF_WEATHER_ASSET_CREATE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WEATHER_ASSET_CREATE_PARAM_ST {

	// NAME: Asset Id - アセットId
	// DESC: Specify the asset ID to generate. AEG999_999-> 999999 - 生成するアセットIDを指定します。AEG999_999 -> 999999
	uint32_t AssetId;

	// NAME: Slot number - スロット番号
	// DESC: This is the number for generation control. Only one asset can be generated in the same slot. You can control whether you want to generate duplicates or not. - 生成制御用の番号です。同一スロットには１個のアセットのみ生成が可能です。重複して生成させたい、させたくない制御ができます。
	uint32_t SlotNo;

	// NAME: Occurrence condition - 発生条件
	// DESC: The type of condition of occurrence - 発生の条件のタイプです
	uint8_t CreateConditionType;

	// NAME: padding0 - padding0
	uint8_t padding0[3];

	// NAME: Transition source weather - 遷移元天候
	// DESC: Specify the transition source weather. It is referenced only when the occurrence condition is "transition". - 遷移元の天候を指定します。発生条件が「遷移」のときだけ参照されます
	int16_t TransitionSrcWeather;

	// NAME: Transition destination weather - 遷移先天候
	// DESC: Specify the transition destination weather. It is referenced only when the occurrence condition is "transition". - 遷移先の天候を指定します。発生条件が「遷移」のときだけ参照されます
	int16_t TransitionDstWeather;

	// NAME: Elapsed time check weather - 経過時間チェック天候
	// DESC: Specify the weather to check the elapsed time. - 経過時間をチェックする天候を指定します。
	int16_t ElapsedTimeCheckweather;

	// NAME: padding1 - padding1
	uint8_t padding1[2];

	// NAME: Elapsed time [Second] - 経過時間[Second]
	// DESC: Specify the elapsed time. It is referenced only when the occurrence condition is "time elapsed". Real time Specify in seconds. - 経過時間を指定します。発生条件が「時間経過」のときだけ参照されます。現実時間[秒]単位で指定します。
	float ElapsedTime;

	// NAME: Generation delay time [Second] - 生成遅延時間[Second]
	// DESC: Specifies the time to delay after the generation is determined. The created slot will be in use while it is delayed. Created immediately with 0 or less. - 生成が決定してから遅延する時間を指定します。遅延している間は作成したスロットは使用中になります。0以下で即時作成。
	float CreateDelayTime;

	// NAME: Probability of occurrence [%] - 発生確率[％]
	// DESC: Specifies the probability of occurrence when conditions for weather transitions or elapsed time are met. - 天候遷移、または経過時間の条件を満たした際に発生する確率を指定します
	uint32_t CreateProbability;

	// NAME: Lifespan [Second] - 寿命[Second]
	// DESC: Specifies the life of the generated asset. Real time Specify in seconds. - 生成したアセットの寿命を指定します。現実時間[秒]単位で指定します。
	float LifeTime;

	// NAME: Fade time [Second] - フェード時間[Second]
	// DESC: Time [seconds] used for fade-in and fade-out. No fade below 0. - フェードイン、フェードアウトに使用される時間[秒]。0以下でフェードなし。
	float FadeTime;

	// NAME: Generateable start time [Hour] - 生成可能開始時刻[Hour]
	// DESC: Specifies a start time that can be generated [0.0 --24.0]. If you put -1 in either the start or the end, it will be treated as unlimited (can be generated in all time). - 生成可能な開始時刻を指定します[0.0 - 24.0]。開始、終了どちらかに-1を入れると無制限(全時間で生成可能)の扱いになります。
	float EnableCreateTimeMin;

	// NAME: Generateable end time [Hour] - 生成可能終了時刻[Hour]
	// DESC: Specifies the end time that can be generated [0.0 --24.0]. If you put -1 in either the start or the end, it will be treated as unlimited (can be generated in all time). - 生成可能な終了時刻を指定します[0.0 - 24.0]。開始、終了どちらかに-1を入れると無制限(全時間で生成可能)の扱いになります。
	float EnableCreateTimeMax;

	// NAME: Generation point 0 - 生成ポイント0
	// DESC: Specify the generation point number. Specify the last 3 digits of the "Weather Asset Generation Point" in MapStudio. -1 will be invalid - 生成ポイント番号を指定します。MapStudioの「天候アセット生成ポイント」の末尾3桁の数値を指定してください。-1だと無効になります
	int16_t CreatePoint0;

	// NAME: Generation point 1 - 生成ポイント1
	// DESC: Specify the generation point number. Specify the last 3 digits of the "Weather Asset Generation Point" in MapStudio. -1 will be invalid - 生成ポイント番号を指定します。MapStudioの「天候アセット生成ポイント」の末尾3桁の数値を指定してください。-1だと無効になります
	int16_t CreatePoint1;

	// NAME: Generation point 2 - 生成ポイント2
	// DESC: Specify the generation point number. Specify the last 3 digits of the "Weather Asset Generation Point" in MapStudio. -1 will be invalid - 生成ポイント番号を指定します。MapStudioの「天候アセット生成ポイント」の末尾3桁の数値を指定してください。-1だと無効になります
	int16_t CreatePoint2;

	// NAME: Generation point 3 - 生成ポイント3
	// DESC: Specify the generation point number. Specify the last 3 digits of the "Weather Asset Generation Point" in MapStudio. -1 will be invalid - 生成ポイント番号を指定します。MapStudioの「天候アセット生成ポイント」の末尾3桁の数値を指定してください。-1だと無効になります
	int16_t CreatePoint3;

	// NAME: Generation limit ID 0 - 生成制限ID0
	// DESC: ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in "Map default parameter .xlsm" (SEQ08921). - 生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
	int8_t CreateAssetLimitId0;

	// NAME: Generation limit ID1 - 生成制限ID1
	// DESC: ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in "Map default parameter .xlsm" (SEQ08921). - 生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
	int8_t CreateAssetLimitId1;

	// NAME: Generation limit ID2 - 生成制限ID2
	// DESC: ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in "Map default parameter .xlsm" (SEQ08921). - 生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
	int8_t CreateAssetLimitId2;

	// NAME: Generation limit ID3 - 生成制限ID3
	// DESC: ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in "Map default parameter .xlsm" (SEQ08921). - 生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
	int8_t CreateAssetLimitId3;

	// NAME: Reserved2 - Reserved2
	uint8_t Reserved2[4];
};

#endif
