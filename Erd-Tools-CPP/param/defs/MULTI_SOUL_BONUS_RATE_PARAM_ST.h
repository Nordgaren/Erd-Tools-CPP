/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MULTI_SOUL_BONUS_RATE_PARAM_ST_H
#define _PARAMDEF_MULTI_SOUL_BONUS_RATE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MULTI_SOUL_BONUS_RATE_PARAM_ST {

	// NAME: host - ホスト
	// DESC: Host reward soul multiplier - ホストの報酬ソウル倍率
	float host;

	// NAME: White sign - 白サイン
	// DESC: Cooperation sign white spirit reward soul multiplier - 協力サインの白霊の報酬ソウル倍率
	float WhiteGhost_None;

	// NAME: Gold spirit (sun) - 金霊（太陽）
	// DESC: Cooperative sign gold spirit reward soul multiplier - 協力サインの金霊の報酬ソウル倍率
	float WhiteGhost_Umbasa;

	// NAME: White berserker - 白バーサーカー
	// DESC: Cooperation sign white Berserker reward soul multiplier - 協力サインの白バーサーカーの報酬ソウル倍率
	float WhiteGhost_Berserker;

	// NAME: Red sign - 赤サイン
	// DESC: Hostile sign red spirit reward soul multiplier - 敵対サインの赤霊の報酬ソウル倍率
	float BlackGhost_None_Sign;

	// NAME: Red gold spirit (signature) - 赤金霊（サイン）
	// DESC: Hostile sign red gold spirit reward soul multiplier - 敵対サインの赤金霊の報酬ソウル倍率
	float BlackGhost_Umbasa_Sign;

	// NAME: Red berserker (sign) - 赤バーサーカー（サイン）
	// DESC: Hostile sign red berserker reward soul multiplier - 敵対サインの赤バーサーカーの報酬ソウル倍率
	float BlackGhost_Berserker_Sign;

	// NAME: Invasion - 侵入
	// DESC: Invasion reward Soul multiplier - 侵入の報酬ソウル倍率
	float BlackGhost_None_Invade;

	// NAME: Red Gold Spirit (Invasion) - 赤金霊（侵入）
	// DESC: Invasion Orb's Red Gold Spirit Reward Soul Multiplier - 侵入オーブの赤金霊の報酬ソウル倍率
	float BlackGhost_Umbasa_Invade;

	// NAME: Red berserker (invasion) - 赤バーサーカー（侵入）
	// DESC: Invasion Orb Red Berserker Reward Soul Multiplier - 侵入オーブの赤バーサーカーの報酬ソウル倍率
	float BlackGhost_Berserker_Invade;

	// NAME: Relief guest - 救援ゲスト
	// DESC: Relief guest reward soul multiplier - 救援ゲストの報酬ソウル倍率
	float RedHunter1;

	// NAME: Red Scare Spirit 2 - 赤狩り霊２
	// DESC: Red Scare Spirit 2 Reward Soul Multiplier - 赤狩り霊２の報酬ソウル倍率
	float RedHunter2;

	// NAME: Map Guardian Spirit (Forest) - マップ守護霊(森)
	// DESC: Map Guardian Spirit (Forest) Reward Soul Magnification - マップ守護霊（森）の報酬ソウル倍率
	float GuardianOfForest;

	// NAME: Map Guardian (Anor) - マップ守護霊(アノール)
	// DESC: Map Guardian Spirit (Anor) Reward Soul Multiplier - マップ守護霊(アノール)の報酬ソウル倍率
	float GuardianOfAnor;

	// NAME: Arena - 闘技場
	// DESC: Arena reward soul multiplier - 闘技場の報酬ソウル倍率
	float BattleRoyal;

	// NAME: Yellow robe's old man - 黄衣の翁
	// DESC: Yellow robe's old man's reward soul multiplier - 黄衣の翁の報酬ソウル倍率
	float YellowMonk;

	// NAME: pad - pad
	uint8_t pad1[64];
};

#endif
