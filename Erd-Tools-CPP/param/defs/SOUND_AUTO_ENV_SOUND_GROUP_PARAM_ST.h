/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST_H
#define _PARAMDEF_SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 0
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST {

	// NAME: Sound No - サウンドNo
	// DESC: Sound No to play (sound type is fixed to a) - 再生するサウンドNo (サウンドタイプはa固定)
	int32_t SoundNo;

	// NAME: Judgment extended distance - 判定拡張距離
	// DESC: Extended distance of playback judgment area - 再生判定領域の拡張距離
	float ExpandRange;

	// NAME: Sound source tracking speed - 音源追従スピード
	// DESC: Follow-up speed (fixed speed) to the target position of the actual sound source - 実音源の目標位置への追従速度(固定速度)
	float FollowSpeed;

	// NAME: Sound source follow-up rate - 音源追従率
	// DESC: Follow-up speed (difference ratio) to the target position of the actual sound source - 実音源の目標位置への追従速度(差分割合)
	float FollowRate;
};

#endif
