/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_RIDE_PARAM_ST_H
#define _PARAMDEF_RIDE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct RIDE_PARAM_ST {

	// NAME: Riding side character ID - 乗る側キャラID
	// DESC: It is a parameter that identifies the character of the "riding side" when riding. - 騎乗時に「乗る側」のキャラクタを特定するパラメータです
	uint32_t atkChrId;

	// NAME: Riding side character ID - 乗られる側キャラID
	// DESC: It is a parameter that identifies the character of the "riding side" when riding. - 騎乗時に「乗られる側」のキャラクタを特定するパラメータです
	uint32_t defChrId;

	// NAME: Camera ID when riding - 騎乗時カメラID
	// DESC: It is a parameter to change the camera parameter at the time of riding to a dedicated camera. It is a parameter for PC only, and it does not work even if it is set to the enemy. - 騎乗時のカメラパラメータを専用のカメラに変更するパラメータです。PC専用のパラメータで、敵に設定しても機能しません。
	int32_t rideCamParamId;

	// NAME: Riding side_Riding animation type and direction variable value - 乗る側_騎乗アニメの種類と方向変数値
	// DESC: It is a parameter to rewrite the value of variable "RideOnAnimId" set in "RideOn (playback during riding) state" of the tool "HavokAnimationTool (HAT)" that controls character animation playback. - キャラクタアニメ再生を制御しているツール「HavokAnimationTool（HAT）」の「RideOn（騎乗時再生）ステート」内に設定しているvariable（変数）"RideOnAnimId"の値を書き換えるパラメータです
	uint32_t atkChrAnimId;

	// NAME: Riding side_Riding animation type and direction variable value - 乗られる側_騎乗アニメの種類と方向変数値
	// DESC: It is a parameter to rewrite the value of variable "RiddenOnAnimId" set in "RiddenOn (playback when riding) state" of the tool "HavokAnimationTool (HAT)" that controls character animation playback. - キャラクタアニメ再生を制御しているツール「HavokAnimationTool（HAT）」の「RiddenOn（被騎乗時再生）ステート」内に設定しているvariable（変数）"RiddenOnAnimId"の値を書き換えるパラメータです
	uint32_t defChrAnimId;

	// NAME: Alignment of the rider at the start of riding animation Damipoli ID - 騎乗アニメ開始時の乗られる側の位置合わせダミポリID
	// DESC: This is a Damipoli setting that is required only for the rider (the rider's character does not need to be set). - 乗られる側にのみ必要なダミポリ設定です（乗る側キャラクタには、設定の必要ありません）
	int32_t defAdjustDmyId;

	// NAME: Riding judgment _ Judgment criteria of the rider Damipoli ID - 騎乗判定_乗られる側の判定基準ダミポリID
	// DESC: There is no need to set Damipoli for the character on the riding side. - 乗る側のキャラには、ダミポリの設定はとくに必要ありません
	int32_t defCheckDmyId;

	// NAME: Riding judgment_Front judgment angle range on the riding side [deg] - 騎乗判定_乗る側の正面判定角度範囲[deg]
	// DESC: Judgment is made by the angle difference between the [direction] on the riding side and the "front judgment Damipoly ID" on the riding side. The higher the value, the more you can ride even if you are facing away. - 乗る側の【向き】と、乗られる側の「正面判定ダミポリID」の角度差で判定します。値が大きいほど、「そっぽを向いていても乗れる」ようになります
	float diffAngMyToDef;

	// NAME: Riding judgment_effective distance [m] - 騎乗判定_有効距離[m]
	// DESC: It is a parameter that determines the "mountable distance to the target" - 「対象との騎乗可能距離」を決定するパラメータです
	float dist;

	// NAME: Riding judgment_effective height upward [m] - 騎乗判定_有効高さ上方向[m]
	// DESC: Is it possible to ride even if the target to be ridden is above the target to be ridden? Is set in meters - 乗られる対象が、乗る対象よりどの程度上方にいても騎乗可能か？を、メートル単位で設定します
	float upperYRange;

	// NAME: Riding judgment_effective height downward [m] - 騎乗判定_有効高さ下方向[m]
	// DESC: Is it possible to ride even if the target to be ridden is below the target to be ridden? Is set in meters - 乗られる対象が、乗る対象よりどの程度下方にいても騎乗可能か？を、メートル単位で設定します
	float lowerYRange;

	// NAME: Riding judgment_angle difference range between objects min [deg] - 騎乗判定_対象間の角度差範囲min[deg]
	// DESC: In what range (angle) of the rider can ride? Set the minimum value of - 乗る側が、乗られる側のどの範囲(角度)にいれば騎乗できるか？の最小値を設定します
	float diffAngMin;

	// NAME: Riding judgment_angle difference range between objects max [deg] - 騎乗判定_対象間の角度差範囲max[deg]
	// DESC: In what range (angle) of the rider can ride? Set the maximum value of - 乗る側が、乗られる側のどの範囲(角度)にいれば騎乗できるか？の最大値を設定します
	float diffAngMax;

	// NAME: reserve - 予約
	// DESC: Reserved area - 予約領域
	uint8_t pad[12];
};

#endif
