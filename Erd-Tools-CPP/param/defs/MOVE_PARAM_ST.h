/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MOVE_PARAM_ST_H
#define _PARAMDEF_MOVE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MOVE_PARAM_ST {

	// NAME: stand-by - 待機
	// DESC: stand-by - 待機
	int32_t stayId;

	// NAME: Before walking - 歩行 前
	// DESC: Before walking - 歩行 前
	int32_t walkF;

	// NAME: After walking - 歩行 後
	// DESC: After walking - 歩行 後
	int32_t walkB;

	// NAME: Walking left - 歩行 左
	// DESC: Walking left - 歩行 左
	int32_t walkL;

	// NAME: Walking right - 歩行 右
	// DESC: Walking right - 歩行 右
	int32_t walkR;

	// NAME: Before driving - 走行 前
	// DESC: Before driving - 走行 前
	int32_t dashF;

	// NAME: After running - 走行 後
	// DESC: After running - 走行 後
	int32_t dashB;

	// NAME: Driving left - 走行 左
	// DESC: Driving left - 走行 左
	int32_t dashL;

	// NAME: Driving right - 走行 右
	// DESC: Driving right - 走行 右
	int32_t dashR;

	// NAME: Dash move - ダッシュ移動
	// DESC: Dash move - ダッシュ移動
	int32_t superDash;

	// NAME: Before emergency avoidance - 緊急回避 前
	// DESC: Before emergency avoidance - 緊急回避 前
	int32_t escapeF;

	// NAME: After emergency avoidance - 緊急回避 後
	// DESC: After emergency avoidance - 緊急回避 後
	int32_t escapeB;

	// NAME: Emergency avoidance left - 緊急回避 左
	// DESC: Emergency avoidance left - 緊急回避 左
	int32_t escapeL;

	// NAME: Emergency avoidance right - 緊急回避 右
	// DESC: Emergency avoidance right - 緊急回避 右
	int32_t escapeR;

	// NAME: 90 degree turn left - 90度旋回 左
	// DESC: 90 degree turn left - 90度旋回 左
	int32_t turnL;

	// NAME: 90 degree turn right - 90度旋回 右
	// DESC: 90 degree turn right - 90度旋回 右
	int32_t trunR;

	// NAME: 180 degree turn left - 180度旋回 左
	// DESC: 180 degree turn left - 180度旋回 左
	int32_t largeTurnL;

	// NAME: 180 degree turn right - 180度旋回 右
	// DESC: 180 degree turn right - 180度旋回 右
	int32_t largeTurnR;

	// NAME: Step move - ステップ移動
	// DESC: 180 degree turn right - 180度旋回 右
	int32_t stepMove;

	// NAME: Flight standby - 飛行待機
	// DESC: Flight standby - 飛行待機
	int32_t flyStay;

	// NAME: Flight advance - 飛行前進
	// DESC: Flight advance - 飛行前進
	int32_t flyWalkF;

	// NAME: Fly left forward - 飛行左前進
	// DESC: Fly left forward. Low rotation - 飛行左前進。低回転
	int32_t flyWalkFL;

	// NAME: Flight right forward - 飛行右前進
	// DESC: Fly right forward. Low rotation - 飛行右前進。低回転
	int32_t flyWalkFR;

	// NAME: Flight left forward 2 - 飛行左前進2
	// DESC: Flight left forward 2. High rotation - 飛行左前進2。高回転
	int32_t flyWalkFL2;

	// NAME: Flight right forward 2 - 飛行右前進2
	// DESC: Flight right forward 2. High rotation - 飛行右前進2。高回転
	int32_t flyWalkFR2;

	// NAME: High speed flight advance - 高速飛行前進
	// DESC: High speed flight advance - 高速飛行前進
	int32_t flyDashF;

	// NAME: High speed flight left forward - 高速飛行左前進
	// DESC: High-speed flight left forward. Low rotation - 高速飛行左前進。低回転
	int32_t flyDashFL;

	// NAME: High speed flight right forward - 高速飛行右前進
	// DESC: High speed flight right forward. Low rotation - 高速飛行右前進。低回転
	int32_t flyDashFR;

	// NAME: High speed flight left forward 2 - 高速飛行左前進2
	// DESC: High speed flight left forward 2. High rotation - 高速飛行左前進2。高回転
	int32_t flyDashFL2;

	// NAME: High speed flight right forward 2 - 高速飛行右前進2
	// DESC: High speed flight right forward 2. High rotation - 高速飛行右前進2。高回転
	int32_t flyDashFR2;

	// NAME: Before dash emergency avoidance - ダッシュ緊急回避前
	// DESC: Before dash emergency avoidance - ダッシュ緊急回避前
	int32_t dashEscapeF;

	// NAME: After dash emergency avoidance - ダッシュ緊急回避後
	// DESC: After dash emergency avoidance - ダッシュ緊急回避後
	int32_t dashEscapeB;

	// NAME: Dash emergency avoidance left - ダッシュ緊急回避左
	// DESC: Dash emergency avoidance left - ダッシュ緊急回避左
	int32_t dashEscapeL;

	// NAME: Dash emergency avoidance right - ダッシュ緊急回避右
	// DESC: Dash emergency avoidance right - ダッシュ緊急回避右
	int32_t dashEscapeR;

	// NAME: Analog moving para ID - アナログ移動パラＩＤ
	// DESC: Mobile animation parameter ID used in mobile animation blend - 移動アニメブレンドで使用される移動アニメパラメータＩＤ
	int32_t analogMoveParamId;

	// NAME: No animation turning angle [deg] - アニメなし旋回角度[deg]
	// DESC: If the turning angle is less than this value, the turning animation will not be played (only the enemy turning control is effective). - 旋回角度がこの値以下だと旋回アニメを再生しません（敵旋回制御のみ有効）
	uint8_t turnNoAnimAngle;

	// NAME: 45 degree turning animation angle [deg] - 45度旋回アニメ角度[deg]
	// DESC: If the turning angle is less than this value, the 45 degree turning animation will be played (only 2 bosses are valid). - 旋回角度がこの値以下だと45度旋回アニメを再生します（ボス2足のみ有効）
	uint8_t turn45Angle;

	// NAME: 90 degree turning animation angle [deg] - 90度旋回アニメ角度[deg]
	// DESC: If the turning angle is less than this value, the 90 degree turning animation will be played (only the enemy turning control is effective). - 旋回角度がこの値以下だと90度旋回アニメを再生します（敵旋回制御のみ有効）
	uint8_t turn90Angle;

	// NAME: No animation when stopped Turning angle [deg] - 停止時アニメなし旋回角度[deg]
	// DESC: If the turning angle is less than this value, the turning animation will not be played [when stopped] (only valid for 2 boss legs) - 旋回角度がこの値以下だと旋回アニメを再生しません[停止時]（ボス2足のみ有効）
	uint8_t turnWaitNoAnimAngle;
};

#endif
