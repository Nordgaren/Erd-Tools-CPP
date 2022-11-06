/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ATTACK_ELEMENT_CORRECT_PARAM_ST_H
#define _PARAMDEF_ATTACK_ELEMENT_CORRECT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ATTACK_ELEMENT_CORRECT_PARAM_ST {

	// NAME: Whether to correct muscle strength (physical) - 筋力補正するか（物理）
	uint8_t isStrengthCorrect_byPhysics: 1;

	// NAME: Whether to correct the skill (physical) - 技量補正するか（物理）
	uint8_t isDexterityCorrect_byPhysics: 1;

	// NAME: Whether to correct the force (physics) - 理力補正するか（物理）
	uint8_t isMagicCorrect_byPhysics: 1;

	// NAME: Do you correct your faith (physics)? - 信仰補正するか（物理）
	uint8_t isFaithCorrect_byPhysics: 1;

	// NAME: Whether to correct luck (physical) - 運補正するか（物理）
	uint8_t isLuckCorrect_byPhysics: 1;

	// NAME: Whether to correct muscle strength (magic) - 筋力補正するか（魔法）
	uint8_t isStrengthCorrect_byMagic: 1;

	// NAME: Do you correct your workmanship (magic)? - 技量補正するか（魔法）
	uint8_t isDexterityCorrect_byMagic: 1;

	// NAME: Do you correct the force (magic)? - 理力補正するか（魔法）
	uint8_t isMagicCorrect_byMagic: 1;

	// NAME: Do you correct your faith (magic)? - 信仰補正するか（魔法）
	uint8_t isFaithCorrect_byMagic: 1;

	// NAME: Do you correct your luck (magic) - 運補正するか（魔法）
	uint8_t isLuckCorrect_byMagic: 1;

	// NAME: Do you correct muscle strength (flame)? - 筋力補正するか（炎）
	uint8_t isStrengthCorrect_byFire: 1;

	// NAME: Do you correct your workmanship (flame)? - 技量補正するか（炎）
	uint8_t isDexterityCorrect_byFire: 1;

	// NAME: Do you correct the force (flame)? - 理力補正するか（炎）
	uint8_t isMagicCorrect_byFire: 1;

	// NAME: Do you correct your faith (flame)? - 信仰補正するか（炎）
	uint8_t isFaithCorrect_byFire: 1;

	// NAME: Do you correct your luck (flame)? - 運補正するか（炎）
	uint8_t isLuckCorrect_byFire: 1;

	// NAME: Whether to correct muscle strength (lightning) - 筋力補正するか（雷）
	uint8_t isStrengthCorrect_byThunder: 1;

	// NAME: Do you correct your workmanship (lightning)? - 技量補正するか（雷）
	uint8_t isDexterityCorrect_byThunder: 1;

	// NAME: Do you correct the force (lightning)? - 理力補正するか（雷）
	uint8_t isMagicCorrect_byThunder: 1;

	// NAME: Do you correct your faith (thunder)? - 信仰補正するか（雷）
	uint8_t isFaithCorrect_byThunder: 1;

	// NAME: Do you correct your luck (lightning)? - 運補正するか（雷）
	uint8_t isLuckCorrect_byThunder: 1;

	// NAME: Do you correct your strength (darkness)? - 筋力補正するか（闇）
	uint8_t isStrengthCorrect_byDark: 1;

	// NAME: Do you correct your workmanship (darkness)? - 技量補正するか（闇）
	uint8_t isDexterityCorrect_byDark: 1;

	// NAME: Do you correct the force (darkness)? - 理力補正するか（闇）
	uint8_t isMagicCorrect_byDark: 1;

	// NAME: Do you correct your faith (darkness)? - 信仰補正するか（闇）
	uint8_t isFaithCorrect_byDark: 1;

	// NAME: Do you correct your luck (darkness)? - 運補正するか（闇）
	uint8_t isLuckCorrect_byDark: 1;

	// NAME: Padding - パディング
	uint8_t pad1: 7;

	// NAME: Overwrite muscle strength correction value (physical) - 筋力補正値上書き（物理）
	int16_t overwriteStrengthCorrectRate_byPhysics;

	// NAME: Skill correction value overwrite (physical) - 技量補正値上書き（物理）
	int16_t overwriteDexterityCorrectRate_byPhysics;

	// NAME: Overwrite the force correction value (physical) - 理力補正値上書き（物理）
	int16_t overwriteMagicCorrectRate_byPhysics;

	// NAME: Faith correction value overwrite (physical) - 信仰補正値上書き（物理）
	int16_t overwriteFaithCorrectRate_byPhysics;

	// NAME: Overwrite luck correction value (physical) - 運補正値上書き（物理）
	int16_t overwriteLuckCorrectRate_byPhysics;

	// NAME: Overwrite muscle strength correction value (magic) - 筋力補正値上書き（魔法）
	int16_t overwriteStrengthCorrectRate_byMagic;

	// NAME: Skill correction value overwrite (magic) - 技量補正値上書き（魔法）
	int16_t overwriteDexterityCorrectRate_byMagic;

	// NAME: Overwrite the force correction value (magic) - 理力補正値上書き（魔法）
	int16_t overwriteMagicCorrectRate_byMagic;

	// NAME: Faith correction value overwrite (magic) - 信仰補正値上書き（魔法）
	int16_t overwriteFaithCorrectRate_byMagic;

	// NAME: Overwrite luck correction value (magic) - 運補正値上書き（魔法）
	int16_t overwriteLuckCorrectRate_byMagic;

	// NAME: Overwrite muscle strength correction value (flame) - 筋力補正値上書き（炎）
	int16_t overwriteStrengthCorrectRate_byFire;

	// NAME: Skill correction value overwrite (flame) - 技量補正値上書き（炎）
	int16_t overwriteDexterityCorrectRate_byFire;

	// NAME: Overwrite the force correction value (flame) - 理力補正値上書き（炎）
	int16_t overwriteMagicCorrectRate_byFire;

	// NAME: Faith correction value overwrite (flame) - 信仰補正値上書き（炎）
	int16_t overwriteFaithCorrectRate_byFire;

	// NAME: Overwrite luck correction value (flame) - 運補正値上書き（炎）
	int16_t overwriteLuckCorrectRate_byFire;

	// NAME: Overwrite muscle strength correction value (lightning) - 筋力補正値上書き（雷）
	int16_t overwriteStrengthCorrectRate_byThunder;

	// NAME: Skill correction value overwrite (lightning) - 技量補正値上書き（雷）
	int16_t overwriteDexterityCorrectRate_byThunder;

	// NAME: Overwrite the force correction value (lightning) - 理力補正値上書き（雷）
	int16_t overwriteMagicCorrectRate_byThunder;

	// NAME: Faith correction value overwrite (thunder) - 信仰補正値上書き（雷）
	int16_t overwriteFaithCorrectRate_byThunder;

	// NAME: Overwrite luck correction value (lightning) - 運補正値上書き（雷）
	int16_t overwriteLuckCorrectRate_byThunder;

	// NAME: Overwrite muscle strength correction value (darkness) - 筋力補正値上書き（闇）
	int16_t overwriteStrengthCorrectRate_byDark;

	// NAME: Skill correction value overwrite (darkness) - 技量補正値上書き（闇）
	int16_t overwriteDexterityCorrectRate_byDark;

	// NAME: Overwrite the force correction value (darkness) - 理力補正値上書き（闇）
	int16_t overwriteMagicCorrectRate_byDark;

	// NAME: Faith correction value overwrite (darkness) - 信仰補正値上書き（闇）
	int16_t overwriteFaithCorrectRate_byDark;

	// NAME: Overwrite luck correction value (darkness) - 運補正値上書き（闇）
	int16_t overwriteLuckCorrectRate_byDark;

	// NAME: Strength correction value Impact rate (physical) - 筋力補正値影響率（物理）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceStrengthCorrectRate_byPhysics;

	// NAME: Skill correction value Impact rate (physical) - 技量補正値影響率（物理）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceDexterityCorrectRate_byPhysics;

	// NAME: Force correction value Impact rate (physical) - 理力補正値影響率（物理）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceMagicCorrectRate_byPhysics;

	// NAME: Faith correction value Impact rate (physical) - 信仰補正値影響率（物理）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceFaithCorrectRate_byPhysics;

	// NAME: Luck correction value influence rate (physical) - 運補正値影響率（物理）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceLuckCorrectRate_byPhysics;

	// NAME: Strength correction value Impact rate (magic) - 筋力補正値影響率（魔法）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceStrengthCorrectRate_byMagic;

	// NAME: Skill correction value Impact rate (magic) - 技量補正値影響率（魔法）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceDexterityCorrectRate_byMagic;

	// NAME: Force correction value Impact rate (magic) - 理力補正値影響率（魔法）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceMagicCorrectRate_byMagic;

	// NAME: Faith correction value Impact rate (magic) - 信仰補正値影響率（魔法）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceFaithCorrectRate_byMagic;

	// NAME: Luck correction value influence rate (magic) - 運補正値影響率（魔法）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceLuckCorrectRate_byMagic;

	// NAME: Strength correction value Impact rate (flame) - 筋力補正値影響率（炎）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceStrengthCorrectRate_byFire;

	// NAME: Skill correction value Impact rate (flame) - 技量補正値影響率（炎）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceDexterityCorrectRate_byFire;

	// NAME: Force correction value Impact rate (flame) - 理力補正値影響率（炎）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceMagicCorrectRate_byFire;

	// NAME: Faith correction value Impact rate (flame) - 信仰補正値影響率（炎）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceFaithCorrectRate_byFire;

	// NAME: Luck correction value influence rate (flame) - 運補正値影響率（炎）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceLuckCorrectRate_byFire;

	// NAME: Strength correction value Impact rate (lightning) - 筋力補正値影響率（雷）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceStrengthCorrectRate_byThunder;

	// NAME: Skill correction value Impact rate (lightning) - 技量補正値影響率（雷）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceDexterityCorrectRate_byThunder;

	// NAME: Force correction value Impact rate (lightning) - 理力補正値影響率（雷）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceMagicCorrectRate_byThunder;

	// NAME: Faith correction value Impact rate (lightning) - 信仰補正値影響率（雷）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceFaithCorrectRate_byThunder;

	// NAME: Luck correction value influence rate (lightning) - 運補正値影響率（雷）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceLuckCorrectRate_byThunder;

	// NAME: Strength correction value influence rate (darkness) - 筋力補正値影響率（闇）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceStrengthCorrectRate_byDark;

	// NAME: Skill correction value Impact rate (darkness) - 技量補正値影響率（闇）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceDexterityCorrectRate_byDark;

	// NAME: Force correction value Impact rate (darkness) - 理力補正値影響率（闇）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceMagicCorrectRate_byDark;

	// NAME: Faith correction value Impact rate (darkness) - 信仰補正値影響率（闇）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceFaithCorrectRate_byDark;

	// NAME: Luck correction value influence rate (darkness) - 運補正値影響率（闇）
	// DESC: The rate of influence of the correction factor. - 補正率の影響割合。
	int16_t InfluenceLuckCorrectRate_byDark;

	// NAME: Padding - パディング
	uint8_t pad2[24];
};

#endif
