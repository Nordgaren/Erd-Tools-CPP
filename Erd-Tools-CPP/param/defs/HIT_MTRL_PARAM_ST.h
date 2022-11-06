/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_HIT_MTRL_PARAM_ST_H
#define _PARAMDEF_HIT_MTRL_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct HIT_MTRL_PARAM_ST {

	// NAME: Sound radius magnification - 音半径倍率
	// DESC: Normal when 1x. When set to 0, the radius of sound becomes 0 (SE and SFX are unrelated game-like parameters). - 1倍のときは普通。0にすると音半径が0になる（SEとSFXは無関係のゲーム的なパラメータ）
	float aiVolumeRate;

	// NAME: Special effect 0 applied when stepping on hit material - ヒットマテリアルを踏んだ時にかかる特殊効果0
	// DESC: When the character steps on the hit material, the set special effect 0 is exhibited. - キャラがヒットマテリアルを踏んだ時に、設定した特殊効果0が発揮される
	int32_t spEffectIdOnHit0;

	// NAME: Special effect applied when stepping on the hit material 1 - ヒットマテリアルを踏んだ時にかかる特殊効果1
	// DESC: When the character steps on the hit material, the set special effect 1 is exhibited. - キャラがヒットマテリアルを踏んだ時に、設定した特殊効果1が発揮される
	int32_t spEffectIdOnHit1;

	// NAME: Foot effect height type - フットエフェクトの高さタイプ
	// DESC: Height to generate foot effect - フットエフェクトを発生させる高さ
	uint8_t footEffectHeightType: 2;

	// NAME: Foot effect orientation type - フットエフェクトの向きタイプ
	// DESC: Direction of foot effect - フットエフェクトの発生向き
	uint8_t footEffectDirType: 2;

	// NAME: Ground height type - 地面の高さタイプ
	// DESC: For floating items such as the surface of the water - 水面などアイテムを浮かせるとき用
	uint8_t floorHeightType: 2;

	// NAME: Is fall damage invalid? - 落下ダメージ無効か
	// DESC: Set to 1 for floors that are not subject to fall damage - 落下ダメージを受けない床の場合に 1 を設定する
	uint8_t disableFallDamage: 1;

	// NAME: Is it a hard material for sound echo? - サウンド反響用硬い材質か？
	// DESC: Is it a hard material for sound echo? (0: soft, 1: hard) - サウンド反響用 硬い材質か？(0:やわらかい,1:かたい)
	uint8_t isHardnessForSoundReverb: 1;

	// NAME: Material hardness type - 材質の固さタイプ
	// DESC: The hardness of the material. Used for soft contact processing of rigid bodies. - 材質の固さ。剛体のソフトコンタクト処理に使用。
	uint8_t hardnessType;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad2[6];

	// NAME: Special effect applied when stepping on the hit material 0 2nd lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　2周目
	// DESC: Special effect applied when stepping on the hit material 0 2nd lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　2周目
	int32_t spEffectIdOnHit0_ClearCount_2;

	// NAME: Special effect applied when stepping on the hit material 0 3rd lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　3周目
	// DESC: Special effect applied when stepping on the hit material 0 3rd lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　3周目
	int32_t spEffectIdOnHit0_ClearCount_3;

	// NAME: Special effect applied when stepping on the hit material 0 4th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　4周目
	// DESC: Special effect applied when stepping on the hit material 0 4th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　4周目
	int32_t spEffectIdOnHit0_ClearCount_4;

	// NAME: Special effect applied when stepping on the hit material 0 5th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　5周目
	// DESC: Special effect applied when stepping on the hit material 0 5th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　5周目
	int32_t spEffectIdOnHit0_ClearCount_5;

	// NAME: Special effect applied when stepping on the hit material 0 6th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　6周目
	// DESC: Special effect applied when stepping on the hit material 0 6th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　6周目
	int32_t spEffectIdOnHit0_ClearCount_6;

	// NAME: Special effect applied when stepping on the hit material 0 7th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　7周目
	// DESC: Special effect applied when stepping on the hit material 0 7th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　7周目
	int32_t spEffectIdOnHit0_ClearCount_7;

	// NAME: Special effect applied when stepping on the hit material 0 8th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　8周目
	// DESC: Special effect applied when stepping on the hit material 0 8th lap - ヒットマテリアルを踏んだ時にかかる特殊効果0　8周目
	int32_t spEffectIdOnHit0_ClearCount_8;

	// NAME: Special effect applied when stepping on the hit material 1st lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　2周目
	// DESC: Special effect applied when stepping on the hit material 1st lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　2周目
	int32_t spEffectIdOnHit1_ClearCount_2;

	// NAME: Special effect applied when stepping on the hit material 1 3rd lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　3周目
	// DESC: Special effect applied when stepping on the hit material 1 3rd lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　3周目
	int32_t spEffectIdOnHit1_ClearCount_3;

	// NAME: Special effect when stepping on the hit material 1 4th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　4周目
	// DESC: Special effect applied when stepping on the hit material 1 4th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　4周目
	int32_t spEffectIdOnHit1_ClearCount_4;

	// NAME: Special effect applied when stepping on the hit material 1 5th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　5周目
	// DESC: Special effect applied when stepping on the hit material 1 5th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　5周目
	int32_t spEffectIdOnHit1_ClearCount_5;

	// NAME: Special effect when stepping on the hit material 1 6th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　6周目
	// DESC: Special effect when stepping on the hit material 1 6th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　6周目
	int32_t spEffectIdOnHit1_ClearCount_6;

	// NAME: Special effect applied when stepping on the hit material 1 7th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　7周目
	// DESC: Special effect applied when stepping on the hit material 1 7th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　7周目
	int32_t spEffectIdOnHit1_ClearCount_7;

	// NAME: Special effect when stepping on the hit material 1 8th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　8周目
	// DESC: Special effect applied when stepping on the hit material 1 8th lap - ヒットマテリアルを踏んだ時にかかる特殊効果1　8周目
	int32_t spEffectIdOnHit1_ClearCount_8;

	// NAME: Hit material replacement (rain) - ヒットマテリアル差し替え(雨)
	// DESC: Hit material change destination ID due to weather (rain) (-1: No change) - 天候(雨)によるヒットマテリアル変更先ID(-1：変更を行なわない)
	int16_t replaceMateiralId_Rain;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad4[2];

	// NAME: Wet special effect ID_00 - 濡れ特殊効果ID_00
	// DESC: Special effect for wetting 00 - 濡れ用特殊効果00
	int32_t spEffectId_forWet00;

	// NAME: Wet special effect ID_01 - 濡れ特殊効果ID_01
	// DESC: Special effects for wetting 01 - 濡れ用特殊効果01
	int32_t spEffectId_forWet01;

	// NAME: Wet special effect ID_02 - 濡れ特殊効果ID_02
	// DESC: Special effects for wetting 02 - 濡れ用特殊効果02
	int32_t spEffectId_forWet02;

	// NAME: Wet special effect ID_03 - 濡れ特殊効果ID_03
	// DESC: Special effects for wetting 03 - 濡れ用特殊効果03
	int32_t spEffectId_forWet03;

	// NAME: Wet special effect ID_04 - 濡れ特殊効果ID_04
	// DESC: Special effects for wetting 04 - 濡れ用特殊効果04
	int32_t spEffectId_forWet04;
};

#endif
