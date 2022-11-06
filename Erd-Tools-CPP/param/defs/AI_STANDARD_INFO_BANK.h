/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_AI_STANDARD_INFO_BANK_H
#define _PARAMDEF_AI_STANDARD_INFO_BANK_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct AI_STANDARD_INFO_BANK {

	// NAME: Recognition distance [m] - 認識距離[m]
	// DESC: Distance to recognize hostile characters - 敵性キャラクタを認識する距離
	uint16_t RadarRange;

	// NAME: Recognition angle X [deg] - 認識角度Ｘ[deg]
	// DESC: X angle for recognizing hostile characters: The current line-of-sight direction is 0 degrees, and the top is +. - 敵性キャラクタを認識するX角度　現在の視線方向を０度として、上が＋。
	uint8_t RadarAngleX;

	// NAME: Recognition angle Y [deg] - 認識角度Y[deg]
	// DESC: Y angle for recognizing hostile characters: The current line-of-sight direction is 0 degrees, and the right is +. - 敵性キャラクタを認識するY角度　現在の視線方向を０度として、右が＋。
	uint8_t RadarAngleY;

	// NAME: Territory distance [m] - 縄張り距離[m]
	// DESC: The distance of your territory. If the recognizing player deviates from this distance, it will return to the initial position. - 自分の縄張りの距離。認識しているプレイヤーがこの距離から外れると初期位置に戻ります。
	uint16_t TerritorySize;

	// NAME: Intimidation rate before attack [0-100] - 攻撃前威嚇率[0～100]
	// DESC: Probability of threatening before attack - 攻撃前に威嚇する確率
	uint8_t ThreatBeforeAttackRate;

	// NAME: First recognition menacing - 初回認識威嚇
	// DESC: Whether to intimidate when recognizing the first player - 初回プレイヤー認識時に必ず威嚇するかどうか
	uint8_t ForceThreatOnFirstLocked;

	// NAME: reserve - 予約
	uint8_t reserve0[24];

	// NAME: Attack 1 Maai [m] - 攻撃１　間合い[m]
	// DESC: Time to attack [m] - 攻撃するときの間合い[m]
	uint16_t Attack1_Distance;

	// NAME: Attack 1 Maai play [m] - 攻撃１　間合い遊び[m]
	// DESC: Play between attacks. Do not vibrate near the distance - 攻撃間合いの遊び。間合い距離近辺で、振動しないように
	uint16_t Attack1_Margin;

	// NAME: Attack 1 ratio [0-100] - 攻撃１　割合[0～100]
	// DESC: Frequency of attacks - 攻撃の頻度
	uint8_t Attack1_Rate;

	// NAME: Attack 1 type - 攻撃１　種類
	// DESC: Types of attacks - 攻撃の種類
	uint8_t Attack1_ActionID;

	// NAME: Attack 1 Minimum delay time [frame] - 攻撃１　最小遅延時間[frame]
	// DESC: The minimum delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
	uint8_t Attack1_DelayMin;

	// NAME: Attack 1 Maximum delay time [frame] - 攻撃１　最長遅延時間[frame]
	// DESC: The longest delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
	uint8_t Attack1_DelayMax;

	// NAME: Attack 1 Attack permission Conical angle [deg] - 攻撃１　攻撃許可円錐の角度[deg]
	// DESC: If the angle between the line-of-sight direction and the direction vector to the target is within this angle, the attack is OK. - 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
	uint8_t Attack1_ConeAngle;

	// NAME: reserve - 予約
	uint8_t reserve10[7];

	// NAME: Attack 2 Maai [m] - 攻撃２　間合い[m]
	// DESC: Time to attack [m] - 攻撃するときの間合い[m]
	uint16_t Attack2_Distance;

	// NAME: Attack 2 Maai play [m] - 攻撃２　間合い遊び[m]
	// DESC: Play between attacks. Do not vibrate near the distance - 攻撃間合いの遊び。間合い距離近辺で、振動しないように
	uint16_t Attack2_Margin;

	// NAME: Attack 1 ratio [0-100] - 攻撃１　割合[0～100]
	// DESC: Frequency of attacks - 攻撃の頻度
	uint8_t Attack2_Rate;

	// NAME: Attack 2 type - 攻撃２　種類
	// DESC: Types of attacks - 攻撃の種類
	uint8_t Attack2_ActionID;

	// NAME: Attack 2 Minimum delay time [frame] - 攻撃2　最小遅延時間[frame]
	// DESC: The minimum delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
	uint8_t Attack2_DelayMin;

	// NAME: Attack 2 Maximum delay time [frame] - 攻撃2　最長遅延時間[frame]
	// DESC: The longest delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
	uint8_t Attack2_DelayMax;

	// NAME: Attack 2 Attack permission Conical angle [deg] - 攻撃2　攻撃許可円錐の角度[deg]
	// DESC: If the angle between the line-of-sight direction and the direction vector to the target is within this angle, the attack is OK. - 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
	uint8_t Attack2_ConeAngle;

	// NAME: reserve - 予約
	uint8_t reserve11[7];

	// NAME: Attack 3 Maai [m] - 攻撃３　間合い[m]
	// DESC: Time to attack [m] - 攻撃するときの間合い[m]
	uint16_t Attack3_Distance;

	// NAME: Attack 3 Maai play [m] - 攻撃３　間合い遊び[m]
	// DESC: Play between attacks. Do not vibrate near the distance - 攻撃間合いの遊び。間合い距離近辺で、振動しないように
	uint16_t Attack3_Margin;

	// NAME: Attack 1 ratio [0-100] - 攻撃１　割合[0～100]
	// DESC: Frequency of attacks - 攻撃の頻度
	uint8_t Attack3_Rate;

	// NAME: Attack 3 types - 攻撃３　種類
	// DESC: Types of attacks - 攻撃の種類
	uint8_t Attack3_ActionID;

	// NAME: Attack 3 Minimum delay time [frame] - 攻撃3　最小遅延時間[frame]
	// DESC: The minimum delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
	uint8_t Attack3_DelayMin;

	// NAME: Attack 3 Maximum delay time [frame] - 攻撃3　最長遅延時間[frame]
	// DESC: The longest delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
	uint8_t Attack3_DelayMax;

	// NAME: Attack 3 Attack permission Conical angle [deg] - 攻撃3　攻撃許可円錐の角度[deg]
	// DESC: If the angle between the line-of-sight direction and the direction vector to the target is within this angle, the attack is OK. - 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
	uint8_t Attack3_ConeAngle;

	// NAME: reserve - 予約
	uint8_t reserve12[7];

	// NAME: Attack 4 Maai [m] - 攻撃４　間合い[m]
	// DESC: Time to attack [m] - 攻撃するときの間合い[m]
	uint16_t Attack4_Distance;

	// NAME: Attack 4 Maai play [m] - 攻撃４　間合い遊び[m]
	// DESC: Play between attacks. Do not vibrate near the distance - 攻撃間合いの遊び。間合い距離近辺で、振動しないように
	uint16_t Attack4_Margin;

	// NAME: Attack 1 ratio [0-100] - 攻撃１　割合[0～100]
	// DESC: Frequency of attacks - 攻撃の頻度
	uint8_t Attack4_Rate;

	// NAME: 4 types of attacks - 攻撃４　種類
	// DESC: Types of attacks - 攻撃の種類
	uint8_t Attack4_ActionID;

	// NAME: Attack 4 Minimum delay time [frame] - 攻撃4　最小遅延時間[frame]
	// DESC: The minimum delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最小。
	uint8_t Attack4_DelayMin;

	// NAME: Attack 4 Maximum delay time [frame] - 攻撃4　最長遅延時間[frame]
	// DESC: The longest delay time from the time when an attack becomes possible to the time when an attack is possible. - 攻撃可能になった時点から、攻撃するまでの遅延時間の最長。
	uint8_t Attack4_DelayMax;

	// NAME: Attack 4 Attack permission Conical angle [deg] - 攻撃4　攻撃許可円錐の角度[deg]
	// DESC: If the angle between the line-of-sight direction and the direction vector to the target is within this angle, the attack is OK. - 視線方向とターゲットへの方向ベクトルのなす角が、この角度以内の場合、攻撃ＯＫ。
	uint8_t Attack4_ConeAngle;

	// NAME: reserve - 予約
	uint8_t reserve13[7];

	// NAME: reserve - 予約
	uint8_t reserve_last[32];
};

#endif
