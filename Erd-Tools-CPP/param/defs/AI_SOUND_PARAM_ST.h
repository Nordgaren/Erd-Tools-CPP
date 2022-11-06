/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_AI_SOUND_PARAM_ST_H
#define _PARAMDEF_AI_SOUND_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct AI_SOUND_PARAM_ST {

	// NAME: Sound radius [m] - 音半径[m]
	// DESC: AI sound radius - AI音の半径
	float radius;

	// NAME: Extinction time [seconds] - 消滅時間[秒]
	// DESC: Time for AI sound to remain - AI音が残る時間
	float lifeFrame;

	// NAME: Is it affected by special effects? - 特殊効果からの影響を受けるか
	// DESC: Whether it is affected by the special effect "Sound Radius Magnification" - 特殊効果の”音半径倍率”の影響を受けるかどうか
	uint8_t bSpEffectEnable;

	// NAME: kinds - 種別
	// DESC: AI sound type - AI音の種別
	uint8_t type;

	// NAME: Target: ● Hostile - 対象：●敵対
	// DESC: Target: ● Hostile - 対象：●敵対
	uint8_t opposeTarget: 1;

	// NAME: Target: ○ Allies - 対象：○味方
	// DESC: Target: ○ Allies - 対象：○味方
	uint8_t friendlyTarget: 1;

	// NAME: Target: myself - 対象：自分
	// DESC: Target: myself - 対象：自分
	uint8_t selfTarget: 1;

	// NAME: You can't listen while targeting your PC - PC自軍をターゲット中は聞けない
	// DESC: You can't listen while targeting your PC - PC自軍をターゲット中は聞けない
	uint8_t disableOnTargetPCompany: 1;

	// NAME: Character behavior - キャラの振る舞い
	// DESC: Character behavior (former: sound type) - キャラの振る舞い(旧：音タイプ
	uint8_t rank;

	// NAME: Time to forget the sound target (overwrite) [sec] - 音ターゲット忘れる時間（上書き）[sec]
	// DESC: Time to forget the sound target (overwrite) [sec] - 音ターゲット忘れる時間（上書き）[sec]
	float forgetTime;

	// NAME: AI sound priority - AI音優先度
	// DESC: AI sound priority - AI音優先度
	int32_t priority;

	// NAME: Behavior ID - 振る舞いID
	// DESC: Behavior ID - 振る舞いID
	int32_t soundBehaviorId;

	// NAME: AI sound level - AI音レベル
	// DESC: How hard it is to hear - どれくらい聞き取りづらい音なのか
	uint8_t aiSoundLevel;

	// NAME: AI state to replan - リプランニングするAI状態
	// DESC: AI state setting to run replanning when listening to AI sound - AI音を聞いた際にリプランニングを走らせるAI状態の設定
	uint8_t replaningState;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad1[6];
};

#endif
