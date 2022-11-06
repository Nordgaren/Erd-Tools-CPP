/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CLEAR_COUNT_CORRECT_PARAM_ST_H
#define _PARAMDEF_CLEAR_COUNT_CORRECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CLEAR_COUNT_CORRECT_PARAM_ST {

	// NAME: 《Maximum HP magnification [%]》 - 《最大HP倍率[%]》
	// DESC: Maximum HP magnification [%] - 最大HP倍率[%]
	float MaxHpRate;

	// NAME: 《Maximum MP magnification [%]》 - 《最大MP倍率[%]》
	// DESC: Maximum MP magnification [%] - 最大MP倍率[%]
	float MaxMpRate;

	// NAME: 《Maximum stamina magnification [%]》 - 《最大スタミナ倍率[%]》
	// DESC: Maximum stamina magnification [%] - 最大スタミナ倍率[%]
	float MaxStaminaRate;

	// NAME: 《Physical attack power multiplier》 - 《物理攻撃力倍率》
	// DESC: Physical attack power multiplier - 物理攻撃力倍率
	float PhysicsAttackRate;

	// NAME: 《Slashing attack power multiplier》 - 《斬撃攻撃力倍率》
	// DESC: Slash attack power multiplier - 斬撃攻撃力倍率
	float SlashAttackRate;

	// NAME: 《Batter attack power multiplier》 - 《打撃攻撃力倍率》
	// DESC: Batter attack power multiplier - 打撃攻撃力倍率
	float BlowAttackRate;

	// NAME: 《Puncture attack power multiplier》 - 《刺突攻撃力倍率》
	// DESC: Puncture attack power multiplier - 刺突攻撃力倍率
	float ThrustAttackRate;

	// NAME: 《Non-attribute attack power multiplier》 - 《無属性攻撃力倍率》
	// DESC: Non-attribute attack power multiplier - 無属性攻撃力倍率
	float NeturalAttackRate;

	// NAME: 《Magic attack power multiplier》 - 《魔法攻撃力倍率》
	// DESC: Magic attack power multiplier - 魔法攻撃力倍率
	float MagicAttackRate;

	// NAME: 《Flame attack power multiplier》 - 《炎攻撃力倍率》
	// DESC: Fire attack power multiplier - 炎攻撃力倍率
	float FireAttackRate;

	// NAME: 《Electric shock attack power multiplier》 - 《電撃攻撃力倍率》
	// DESC: Electric shock attack power multiplier - 電撃攻撃力倍率
	float ThunderAttackRate;

	// NAME: 《Dark attack power multiplier》 - 《闇攻撃力倍率》
	// DESC: Dark attack power multiplier - 闇攻撃力倍率
	float DarkAttackRate;

	// NAME: 《Physical defense multiplier》 - 《物理防御力倍率》
	// DESC: Physical defense power multiplier - 物理防御力倍率
	float PhysicsDefenseRate;

	// NAME: 《Magic Defense Multiplier》 - 《魔法防御力倍率》
	// DESC: Magic defense multiplier - 魔法防御力倍率
	float MagicDefenseRate;

	// NAME: 《Flame defense multiplier》 - 《炎防御力倍率》
	// DESC: Fire defense multiplier - 炎防御力倍率
	float FireDefenseRate;

	// NAME: 《Dengeki Defense Magnification》 - 《電撃防御力倍率》
	// DESC: Electric shock defense power multiplier - 電撃防御力倍率
	float ThunderDefenseRate;

	// NAME: 《Darkness Defense Multiplier》 - 《闇防御力倍率》
	// DESC: Dark defense multiplier - 闇防御力倍率
	float DarkDefenseRate;

	// NAME: 《Stamina attack power multiplier》 - 《スタミナ攻撃力倍率》
	// DESC: Stamina attack power multiplier - スタミナ攻撃力倍率
	float StaminaAttackRate;

	// NAME: 《Soul possession rate》 - 《所持ソウル率》
	// DESC: Possession soul rate - 所持ソウル率
	float SoulRate;

	// NAME: 《Poison resistance change rate》 - 《毒耐性変化倍率》
	// DESC: Poison resistance change rate - 毒耐性変化倍率
	float PoisionResistRate;

	// NAME: 《Pesticide resistance change rate》 - 《疫病耐性変化倍率》
	// DESC: Epidemic resistance change rate - 疫病耐性変化倍率
	float DiseaseResistRate;

	// NAME: 《Bleeding resistance change rate》 - 《出血耐性変化倍率》
	// DESC: Bleeding resistance change rate - 出血耐性変化倍率
	float BloodResistRate;

	// NAME: 《Curse resistance change rate》 - 《呪耐性変化倍率》
	// DESC: Curse resistance change rate - 呪耐性変化倍率
	float CurseResistRate;

	// NAME: 《Cold air resistance change rate》 - 《冷気耐性変化倍率》
	// DESC: Cold resistance change rate - 冷気耐性変化倍率
	float FreezeResistRate;

	// NAME: 《Bleeding damage correction factor》 - 《出血ダメージ補正倍率》
	// DESC: Bleeding damage correction factor - 出血ダメージ補正倍率
	float BloodDamageRate;

	// NAME: 《SA damage correction factor》 - 《SAダメージ補正倍率》
	// DESC: SA damage correction factor - SAダメージ補正倍率
	float SuperArmorDamageRate;

	// NAME: 《Cold air damage correction factor》 - 《冷気ダメージ補正倍率》
	// DESC: Cold damage correction factor - 冷気ダメージ補正倍率
	float FreezeDamageRate;

	// NAME: 《Sleep tolerance change rate》 - 《睡眠耐性変化倍率》
	// DESC: Sleep tolerance change rate - 睡眠耐性変化倍率
	float SleepResistRate;

	// NAME: 《Madness resistance change rate》 - 《発狂耐性変化倍率》
	// DESC: Madness resistance change rate - 発狂耐性変化倍率
	float MadnessResistRate;

	// NAME: 《Sleep damage correction factor》 - 《睡眠ダメージ補正倍率》
	// DESC: Sleep damage correction factor - 睡眠ダメージ補正倍率
	float SleepDamageRate;

	// NAME: 《Crazy damage correction factor》 - 《発狂ダメージ補正倍率》
	// DESC: Mad damage correction factor - 発狂ダメージ補正倍率
	float MadnessDamageRate;

	// NAME: pad - pad
	uint8_t pad1[4];
};

#endif
