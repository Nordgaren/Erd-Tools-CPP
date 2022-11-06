/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_TOUGHNESS_PARAM_ST_H
#define _PARAMDEF_TOUGHNESS_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct TOUGHNESS_PARAM_ST {

	// NAME: Weapon toughness correction factor - 武器強靭度補正倍率
	// DESC: It is a correction magnification applied to the "toughness correction magnification" of the weapon when calculating the toughness. - 強靭度を求める際に武器の「強靭度補正倍率」に掛かる補正倍率です
	float correctionRate;

	// NAME: Minimum toughness - 最低 強靭度
	// DESC: The lower limit of current toughness applied at the beginning of the toughness period. If the toughness falls below this value at the start of toughness, it will recover to this value. - 強靭度期間開始時に適用される現在強靭度の下限値です。強靭度開始時に強靭度がこの値を下回る場合は、この値まで回復します。
	uint16_t minToughness;

	// NAME: Minimum toughness value is not affected by toughness multiplier - 最低強靭値が強靭度倍率の影響を受けない
	// DESC: The toughness correction factor will no longer be applied to the minimum toughness. - 強靭度 補正倍率を、最低 強靭度に、適用しなくなります
	uint8_t isNonEffectiveCorrectionForMin;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad2[1];

	// NAME: Special effect ID - 特殊効果ID
	// DESC: Replacement special effect Id that takes place during the toughness period. If -1, the normal replacement rule applies. Only used by player characters - 強靭度期間中にかかる差換え特殊効果Idです。-1の場合は通常の差換えルールが適用されます。プレイヤーキャラでしか使われません
	int32_t spEffectId;

	// NAME: Armor toughness correction factor - 防具強靭度補正倍率
	// DESC: This is the correction factor applied to the "toughness correction factor" of the armor when determining the toughness. - 強靭度を求める際に防具の「強靭度補正倍率」に掛かる補正倍率です
	float proCorrectionRate;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad1[16];
};

#endif
