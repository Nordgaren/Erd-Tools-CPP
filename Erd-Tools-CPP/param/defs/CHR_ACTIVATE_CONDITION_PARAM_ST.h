/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CHR_ACTIVATE_CONDITION_PARAM_ST_H
#define _PARAMDEF_CHR_ACTIVATE_CONDITION_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CHR_ACTIVATE_CONDITION_PARAM_ST {

	// NAME: Appearance condition _ sunny - 出現条件_晴れ
	// DESC: Will it appear when the weather is "sunny"? - 天候が「晴れ」のときに出現するか
	uint8_t weatherSunny: 1;

	// NAME: Appearance condition _ fine weather - 出現条件_快晴
	// DESC: Will it appear when the weather is "clear"? - 天候が「快晴」のときに出現するか
	uint8_t weatherClearSky: 1;

	// NAME: Appearance condition_light cloudy - 出現条件_薄曇り
	// DESC: Will it appear when the weather is "lightly cloudy"? - 天候が「薄曇り」のときに出現するか
	uint8_t weatherWeakCloudy: 1;

	// NAME: Appearance condition_cloudy - 出現条件_曇り
	// DESC: Will it appear when the weather is "cloudy"? - 天候が「曇り」のときに出現するか
	uint8_t weatherCloudy: 1;

	// NAME: Appearance condition_rain - 出現条件_雨
	// DESC: Will it appear when the weather is "rainy"? - 天候が「雨」のときに出現するか
	uint8_t weatherRain: 1;

	// NAME: Appearance condition_heavy rain - 出現条件_豪雨
	// DESC: Will it appear when the weather is "heavy rain"? - 天候が「豪雨」のときに出現するか
	uint8_t weatherHeavyRain: 1;

	// NAME: Appearance condition_storm - 出現条件_嵐
	// DESC: Will it appear when the weather is "stormy"? - 天候が「嵐」のときに出現するか
	uint8_t weatherStorm: 1;

	// NAME: Appearance condition_Arashi (for battle with the descendants of the guardian) - 出現条件_嵐（守護者の末裔との戦闘用）
	// DESC: Will it appear when the weather is "storm (for combat with the descendants of the guardian)"? - 天候が「嵐（守護者の末裔との戦闘用）」のときに出現するか
	uint8_t weatherStormForBattle: 1;

	// NAME: Appearance condition_Snow - 出現条件_雪
	// DESC: Will it appear when the weather is "snow"? - 天候が「雪」のときに出現するか
	uint8_t weatherSnow: 1;

	// NAME: Appearance condition _ heavy snow - 出現条件_大雪
	// DESC: Will it appear when the weather is "heavy snow"? - 天候が「大雪」のときに出現するか
	uint8_t weatherHeavySnow: 1;

	// NAME: Appearance condition_fog - 出現条件_霧
	// DESC: Will it appear when the weather is "fog"? - 天候が「霧」のときに出現するか
	uint8_t weatherFog: 1;

	// NAME: Appearance condition_Dense fog - 出現条件_濃霧
	// DESC: Will it appear when the weather is "dense fog"? - 天候が「濃霧」のときに出現するか
	uint8_t weatherHeavyFog: 1;

	// NAME: Appearance condition_Dense fog (rain) - 出現条件_濃霧（雨）
	// DESC: Does it appear when the weather is "dense fog (rain)"? - 天候が「濃霧（雨）」のときに出現するか
	uint8_t weatherHeavyFogRain: 1;

	// NAME: Appearance condition_sandstorm - 出現条件_砂嵐
	// DESC: Will it appear when the weather is a "sandstorm"? - 天候が「砂嵐」のときに出現するか
	uint8_t weatherSandStorm: 1;

	// NAME: pad - pad
	uint8_t pad1: 2;

	// NAME: Appearance start in game time_hour - 出現開始インゲーム時間_時
	// DESC: Appearance start in game time_hour - 出現開始インゲーム時間_時
	uint8_t timeStartHour;

	// NAME: Appearance start in-game time_minutes - 出現開始インゲーム時間_分
	// DESC: Appearance start in-game time_minutes - 出現開始インゲーム時間_分
	uint8_t timeStartMin;

	// NAME: Appearance end in game time_hour - 出現終了インゲーム時間_時
	// DESC: Appearance end in game time_hour - 出現終了インゲーム時間_時
	uint8_t timeEndHour;

	// NAME: End of appearance In-game time_minutes - 出現終了インゲーム時間_分
	// DESC: End of appearance In-game time_minutes - 出現終了インゲーム時間_分
	uint8_t timeEndMin;

	// NAME: pad - pad
	uint8_t pad2[2];
};

#endif
