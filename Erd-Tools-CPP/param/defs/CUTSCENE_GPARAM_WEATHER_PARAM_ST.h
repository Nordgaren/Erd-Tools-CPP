/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CUTSCENE_GPARAM_WEATHER_PARAM_ST_H
#define _PARAMDEF_CUTSCENE_GPARAM_WEATHER_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 6
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CUTSCENE_GPARAM_WEATHER_PARAM_ST {

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

	// NAME: Sunny - 晴れ
	// DESC: Sunny - 晴れ
	int16_t DstWeather_Sunny;

	// NAME: Sunny - 快晴
	// DESC: Sunny - 快晴
	int16_t DstWeather_ClearSky;

	// NAME: Light cloudy - 薄曇り
	// DESC: Light cloudy - 薄曇り
	int16_t DstWeather_WeakCloudy;

	// NAME: cloudy - 曇り
	// DESC: cloudy - 曇り
	int16_t DstWeather_Cloud;

	// NAME: rain - 雨
	// DESC: rain - 雨
	int16_t DstWeather_Rain;

	// NAME: Heavy rain - 豪雨
	// DESC: Heavy rain - 豪雨
	int16_t DstWeather_HeavyRain;

	// NAME: storm - 嵐
	// DESC: storm - 嵐
	int16_t DstWeather_Storm;

	// NAME: Storm (for combat with the descendants of the guardian) - 嵐（守護者の末裔との戦闘用）
	// DESC: Storm (for combat with the descendants of the guardian) - 嵐（守護者の末裔との戦闘用）
	int16_t DstWeather_StormForBattle;

	// NAME: snow - 雪
	// DESC: snow - 雪
	int16_t DstWeather_Snow;

	// NAME: heavy snow - 大雪
	// DESC: heavy snow - 大雪
	int16_t DstWeather_HeavySnow;

	// NAME: fog - 霧
	// DESC: fog - 霧
	int16_t DstWeather_Fog;

	// NAME: Thick fog - 濃霧
	// DESC: Thick fog - 濃霧
	int16_t DstWeather_HeavyFog;

	// NAME: Sandstorm - 砂嵐
	// DESC: Sandstorm - 砂嵐
	int16_t DstWeather_SandStorm;

	// NAME: Thick fog (rain) - 濃霧（雨）
	// DESC: Thick fog (rain) - 濃霧（雨）
	int16_t DstWeather_HeavyFogRain;

	// NAME: In-game weather specifications at the end of playback (unused, invalid) - 再生終了時のインゲーム天候指定(未使用、無効)
	// DESC: In-game weather specifications at the end of playback (nothing is done if blank or "invalid") - 再生終了時のインゲーム天候指定(空白または「無効」の場合は何も行われない。)
	int16_t PostPlayIngameWeather;

	// NAME: Indoor / outdoor designation - 屋内屋外指定
	// DESC: When indoors, the SFX specified by "Weather SfxId (Outdoor)" and "Wind SfxId (Outdoor)" in "Weather Parameter.xlsm" will be invalid in the cutscene. - 屋内にすると「天候パラメータ.xlsm」の「天候SfxId(屋外)」と「風SfxId(屋外)」で指定されたSFXがカットシーン内で無効になります。
	uint8_t IndoorOutdoorType;

	// NAME: In-game weather SFX to take over? _Sunny - インゲームの天候SFX引き継ぐか？_晴れ
	// DESC: In-game weather SFX to take over? _Sunny - インゲームの天候SFX引き継ぐか？_晴れ
	uint8_t TakeOverDstWeather_Sunny;

	// NAME: In-game weather SFX to take over? _ Sunny - インゲームの天候SFX引き継ぐか？_快晴
	// DESC: In-game weather SFX to take over? _ Sunny - インゲームの天候SFX引き継ぐか？_快晴
	uint8_t TakeOverDstWeather_ClearSky;

	// NAME: Will the in-game weather SFX be taken over? _ Light cloudy - インゲームの天候SFX引き継ぐか？_薄曇り
	// DESC: Will the in-game weather SFX be taken over? _ Light cloudy - インゲームの天候SFX引き継ぐか？_薄曇り
	uint8_t TakeOverDstWeather_WeakCloudy;

	// NAME: In-game weather SFX to take over? _cloudy - インゲームの天候SFX引き継ぐか？_曇り
	// DESC: Will the in-game weather SFX be taken over? _cloudy - インゲームの天候SFX引き継ぐか？_曇り
	uint8_t TakeOverDstWeather_Cloud;

	// NAME: In-game weather SFX to take over? _rain - インゲームの天候SFX引き継ぐか？_雨
	// DESC: In-game weather SFX to take over? _rain - インゲームの天候SFX引き継ぐか？_雨
	uint8_t TakeOverDstWeather_Rain;

	// NAME: Will the in-game weather SFX be taken over? _ Heavy rain - インゲームの天候SFX引き継ぐか？_豪雨
	// DESC: In-game weather SFX to take over? _ Heavy rain - インゲームの天候SFX引き継ぐか？_豪雨
	uint8_t TakeOverDstWeather_HeavyRain;

	// NAME: Will the in-game weather SFX be taken over? _storm - インゲームの天候SFX引き継ぐか？_嵐
	// DESC: In-game weather SFX to take over? _storm - インゲームの天候SFX引き継ぐか？_嵐
	uint8_t TakeOverDstWeather_Storm;

	// NAME: In-game weather SFX to take over? _ Storm (for battle with the descendants of the guardian) - インゲームの天候SFX引き継ぐか？_嵐（守護者の末裔との戦闘用）
	// DESC: In-game weather SFX to take over? _ Storm (for battle with the descendants of the guardian) - インゲームの天候SFX引き継ぐか？_嵐（守護者の末裔との戦闘用）
	uint8_t TakeOverDstWeather_StormForBattle;

	// NAME: In-game weather SFX to take over? _snow - インゲームの天候SFX引き継ぐか？_雪
	// DESC: In-game weather SFX to take over? _snow - インゲームの天候SFX引き継ぐか？_雪
	uint8_t TakeOverDstWeather_Snow;

	// NAME: In-game weather SFX to take over? _heavy snow - インゲームの天候SFX引き継ぐか？_大雪
	// DESC: In-game weather SFX to take over? _heavy snow - インゲームの天候SFX引き継ぐか？_大雪
	uint8_t TakeOverDstWeather_HeavySnow;

	// NAME: In-game weather SFX to take over? _fog - インゲームの天候SFX引き継ぐか？_霧
	// DESC: Will the in-game weather SFX be taken over? _fog - インゲームの天候SFX引き継ぐか？_霧
	uint8_t TakeOverDstWeather_Fog;

	// NAME: In-game weather SFX to take over? _ Thick fog - インゲームの天候SFX引き継ぐか？_濃霧
	// DESC: Will the in-game weather SFX be taken over? _ Thick fog - インゲームの天候SFX引き継ぐか？_濃霧
	uint8_t TakeOverDstWeather_HeavyFog;

	// NAME: Will the in-game weather SFX be taken over? _ Sandstorm - インゲームの天候SFX引き継ぐか？_砂嵐
	// DESC: In-game weather SFX to take over? _ Sandstorm - インゲームの天候SFX引き継ぐか？_砂嵐
	uint8_t TakeOverDstWeather_SandStorm;

	// NAME: In-game weather SFX to take over? _ Thick fog (rain) - インゲームの天候SFX引き継ぐか？_濃霧（雨）
	// DESC: In-game weather SFX to take over? _ Thick fog (rain) - インゲームの天候SFX引き継ぐか？_濃霧（雨）
	uint8_t TakeOverDstWeather_HeavyFogRain;

	// NAME: reserved - reserved
	// DESC: reserved - reserved
	uint8_t reserved[7];

	// NAME: Snowstorm - 吹雪
	// DESC: Snowstorm - 吹雪
	int16_t DstWeather_Snowstorm;

	// NAME: Storm (thunder) - 嵐（雷）
	// DESC: Preliminary weather 2 - 予備天候2
	int16_t DstWeather_LightningStorm;

	// NAME: Snow special (spare 3) - 雪特殊(予備3)
	// DESC: Preliminary weather 3 - 予備天候3
	int16_t DstWeather_Reserved3;

	// NAME: Preliminary weather 4 - 予備天候4
	// DESC: Preliminary weather 4 - 予備天候4
	int16_t DstWeather_Reserved4;

	// NAME: Preliminary weather 5 - 予備天候5
	// DESC: Preliminary weather 5 - 予備天候5
	int16_t DstWeather_Reserved5;

	// NAME: Preliminary weather 6 - 予備天候6
	// DESC: Preliminary weather 6 - 予備天候6
	int16_t DstWeather_Reserved6;

	// NAME: Preliminary weather 7 - 予備天候7
	// DESC: Preliminary weather 7 - 予備天候7
	int16_t DstWeather_Reserved7;

	// NAME: Preliminary weather 8 - 予備天候8
	// DESC: Preliminary weather 8 - 予備天候8
	int16_t DstWeather_Reserved8;

	// NAME: In-game weather SFX to take over? _ Snowstorm - インゲームの天候SFX引き継ぐか？_吹雪
	// DESC: In-game weather SFX to take over? _ Snowstorm - インゲームの天候SFX引き継ぐか？_吹雪
	uint8_t TakeOverDstWeather_Snowstorm;

	// NAME: Will the in-game weather SFX be taken over? _ Storm (thunder) - インゲームの天候SFX引き継ぐか？_嵐（雷）
	// DESC: In-game weather SFX to take over? _ Storm (thunder) - インゲームの天候SFX引き継ぐか？_嵐（雷）
	uint8_t TakeOverDstWeather_LightningStorm;

	// NAME: In-game weather SFX to take over? _ Snow Special (Spare 3) - インゲームの天候SFX引き継ぐか？_雪特殊(予備3)
	// DESC: Will the in-game weather SFX be taken over? _ Preliminary weather 3 - インゲームの天候SFX引き継ぐか？_予備天候3
	uint8_t TakeOverDstWeather_Reserved3;

	// NAME: Will the in-game weather SFX be taken over? _ Preliminary weather 4 - インゲームの天候SFX引き継ぐか？_予備天候4
	// DESC: In-game weather SFX to take over? _ Preliminary weather 4 - インゲームの天候SFX引き継ぐか？_予備天候4
	uint8_t TakeOverDstWeather_Reserved4;

	// NAME: In-game weather SFX to take over? _ Preliminary weather 5 - インゲームの天候SFX引き継ぐか？_予備天候5
	// DESC: Will the in-game weather SFX be taken over? _ Preliminary weather 5 - インゲームの天候SFX引き継ぐか？_予備天候5
	uint8_t TakeOverDstWeather_Reserved5;

	// NAME: In-game weather SFX to take over? _ Preliminary weather 6 - インゲームの天候SFX引き継ぐか？_予備天候6
	// DESC: Will the in-game weather SFX be taken over? _ Preliminary weather 6 - インゲームの天候SFX引き継ぐか？_予備天候6
	uint8_t TakeOverDstWeather_Reserved6;

	// NAME: In-game weather SFX to take over? _ Preliminary weather 7 - インゲームの天候SFX引き継ぐか？_予備天候7
	// DESC: Will the in-game weather SFX be taken over? _ Preliminary weather 7 - インゲームの天候SFX引き継ぐか？_予備天候7
	uint8_t TakeOverDstWeather_Reserved7;

	// NAME: Will the in-game weather SFX be taken over? _ Preliminary weather 8 - インゲームの天候SFX引き継ぐか？_予備天候8
	// DESC: In-game weather SFX to take over? _ Preliminary weather 8 - インゲームの天候SFX引き継ぐか？_予備天候8
	uint8_t TakeOverDstWeather_Reserved8;

	// NAME: Do you want to apply the MapGD local ID to the weather Gparam? - 天候GparamにMapGD地方IDを適用するか？
	// DESC: Do you want to apply the mapGD local ID changes to the cutscene weather Gparam as in the in-game? ([GR] SEQ30194) - カットシーン天候Gparamにインゲーム同様MapGD地方IDによる変化を適用するか？(【GR】SEQ30194)
	uint8_t IsEnableApplyMapGdRegionIdForGparam;

	// NAME: reserved1 - reserved1
	// DESC: reserved1 ver4-> 5 64-> 96 - reserved1 ver4->5 64->96へ増量
	uint8_t reserved2[1];

	// NAME: Local ID overwrite for weather Gparam MapGD - 天候GparamMapGD用地方ID上書き
	// DESC: Overwrite the ID used for cutscene weather Gparam (-1: No overwrite. MapGD local ID during cutscene playback is used). If "Do you want to apply MapGD local ID to weather Gparam?" Is x, it is not referenced. - カットシーン天候Gparamに使用されるIDを上書きする(-1：上書きなし。カットシーン再生時のMapGD地方IDが使用される)。「天候GparamにMapGD地方IDを適用するか？」が×の場合は参照されない
	int16_t OverrideMapGdRegionId;

	// NAME: reserved1 - reserved1
	// DESC: reserved1 ver4-> 5 64-> 96 - reserved1 ver4->5 64->96へ増量
	uint8_t reserved1[12];
};

#endif
