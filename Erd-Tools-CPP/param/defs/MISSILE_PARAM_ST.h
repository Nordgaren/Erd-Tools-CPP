/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MISSILE_PARAM_ST_H
#define _PARAMDEF_MISSILE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MISSILE_PARAM_ST {

	// NAME: FFXID - FFXID
	// DESC: ID on the FFX editor - ＦＦＸエディタ上のＩＤ
	int32_t FFXID;

	// NAME: Survival time [frame] - 生存時間[frame]
	// DESC: Survival time. - 生存時間。
	uint16_t LifeTime;

	// NAME: Hit ball radius [cm] - 当たり球半径[cm]
	// DESC: Hit ball radius. Unit cm - 当たり球半径。単位cm
	uint16_t HitSphereRadius;

	// NAME: Landing damage - 着弾ダメージ
	// DESC: Amount of damage at the time of landing - 着弾時のダメージ量
	uint16_t HitDamage;

	// NAME: reserve - 予約
	uint8_t reserve0[6];

	// NAME: Initial speed [m / s] - 初速度[m/s]
	// DESC: Initial speed [m / s] - 初速度[m/s]
	float InitVelocity;

	// NAME: Range distance - 射程距離
	// DESC: Range distance - 射程距離
	float distance;

	// NAME: Gravity within range - 射程距離内重力
	// DESC: Gravity within range - 射程距離内重力
	float gravityInRange;

	// NAME: Out-of-range gravity - 射程距離外重力
	// DESC: Out-of-range gravity - 射程距離外重力
	float gravityOutRange;

	// NAME: MP consumption - 消費MP
	// DESC: MP consumption - 消費MP
	int32_t mp;

	// NAME: Acceleration within range - 射程距離内加速度
	// DESC: Acceleration within range - 射程距離内加速度
	float accelInRange;

	// NAME: Out-of-range acceleration - 射程距離外加速度
	// DESC: Out-of-range acceleration - 射程距離外加速度
	float accelOutRange;

	// NAME: reserve - 予約
	uint8_t reserve1[20];

	// NAME: Landing ID - 着弾ＩＤ
	// DESC: Landing ID - 着弾ＩＤ
	uint16_t HitMissileID;

	// NAME: Will you die at the end of your life? - 寿命で死ぬか？
	// DESC: Will it use up its life without dying even if it lands? - 着弾しても、死なずに、寿命を使い切るか？
	uint8_t DiedNaturaly;

	// NAME: Will it land when the life has expired? - 寿命が切れたときに着弾するか
	// DESC: Will it land when the life has expired? - 寿命が切れたときに着弾するか
	uint8_t ExplosionDie;

	// NAME: Action ID on hit - ヒット時行動ID
	// DESC: Action ID given to the opponent when doing damage - ダメージを与えたとき相手に与える行動ID
	int32_t behaviorId;

	// NAME: reserve - 予約
	uint8_t reserve_last[56];
};

#endif
