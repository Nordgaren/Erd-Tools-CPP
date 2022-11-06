/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_LOCK_CAM_PARAM_ST_H
#define _PARAMDEF_LOCK_CAM_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct LOCK_CAM_PARAM_ST {

	// NAME: Camera distance target [m] - カメラ距離目標[m]
	// DESC: Camera distance target - カメラ距離目標
	float camDistTarget;

	// NAME: Minimum X-axis rotation [deg] - X軸回転最小値[deg]
	// DESC: Minimum X-axis rotation - X軸回転最小値
	float rotRangeMinX;

	// NAME: Lock X rotation shift rate (0.0-1.0) - ロックX回転シフト率(0.0～1.0)
	// DESC: Lock X rotation shift rate - ロックX回転シフト率
	float lockRotXShiftRatio;

	// NAME: Character base point offset (character space) - キャラ基点オフセット(キャラ空間)
	// DESC: Character base point offset - キャラ基点オフセット
	float chrOrgOffset_Y;

	// NAME: Character range maximum radius [m] - キャラ範囲最大半径[m]
	// DESC: Maximum radius of character range - キャラ範囲最大半径
	float chrLockRangeMaxRadius;

	// NAME: Vertical angle of view [deg] - 縦画角[deg]
	// DESC: Vertical angle of view - 縦画角
	float camFovY;

	// NAME: Maximum radius of character range for darkness [m] - 暗闇用キャラ範囲最大半径[m]
	// DESC: Lockable range of characters in dark places - 暗いところでのキャラのロック可能範囲
	float chrLockRangeMaxRadius_forD;

	// NAME: Maximum radius of character range for pitch darkness [m] - 真っ暗闇用キャラ範囲最大半径[m]
	// DESC: Character lockable range in total darkness - 真っ暗闇でのキャラのロック可能範囲
	float chrLockRangeMaxRadius_forPD;

	// NAME: Melee attack automatic capture Upper limit height [m] - 近接攻撃自動捕捉 上限高さ[m]
	// DESC: Automatic lock-on judgment height upper limit when non-lock-on is close - 非ロックオン時の自動ロックオン判定高さ上限　近接
	float closeMaxHeight;

	// NAME: Melee attack automatic capture Lower limit height [m] - 近接攻撃自動捕捉 下限高さ[m]
	// DESC: Automatic lock-on judgment height lower limit when not locked on Proximity - 非ロックオン時の自動ロックオン判定高さ下限　近接
	float closeMinHeight;

	// NAME: Melee attack automatic capture Angle range Left and right [deg] - 近接攻撃自動捕捉 角度範囲 左右[deg]
	// DESC: Automatic lock-on judgment when non-lock-on Left / right angle [deg] Proximity - 非ロックオン時の自動ロックオン判定左右角度[deg]　近接
	float closeAngRange;

	// NAME: Melee attack automatic capture Character range maximum radius [m] - 近接攻撃自動捕捉 キャラ範囲最大半径[m]
	// DESC: Automatic lock-on judgment distance when non-lock-on is close - 非ロックオン時の自動ロックオン判定距離　近接
	float closeMaxRadius;

	// NAME: Melee attack automatic capture Dark character range maximum radius [m] - 近接攻撃自動捕捉 暗闇用キャラ範囲最大半径[m]
	// DESC: Automatic lock-on judgment distance at non-lock-on _ darkness proximity - 非ロックオン時の自動ロックオン判定距離_暗闇　近接
	float closeMaxRadius_forD;

	// NAME: Melee attack automatic capture Character range for total darkness Maximum radius [m] - 近接攻撃自動捕捉 真っ暗闇用キャラ範囲最大半径[m]
	// DESC: Automatic lock-on when non-lock-on _ pitch black proximity - 非ロックオン時の自動ロックオン_真っ暗　近接
	float closeMaxRadius_forPD;

	// NAME: Bullet automatic capture Character range maximum radius [m] - 弾丸自動捕捉 キャラ範囲最大半径[m]
	// DESC: Automatic lock-on judgment distance when non-lock-on bullet - 非ロックオン時の自動ロックオン判定距離　弾丸
	float bulletMaxRadius;

	// NAME: Bullet automatic capture Maximum radius of character range for darkness [m] - 弾丸自動捕捉 暗闇用キャラ範囲最大半径[m]
	// DESC: Automatic lock-on judgment distance at non-lock-on _ darkness bullet - 非ロックオン時の自動ロックオン判定距離_暗闇　弾丸
	float bulletMaxRadius_forD;

	// NAME: Automatic bullet capture Character range for total darkness Maximum radius [m] - 弾丸自動捕捉 真っ暗闇用キャラ範囲最大半径[m]
	// DESC: Automatic lock-on judgment distance at non-lock-on _ pitch black bullet - 非ロックオン時の自動ロックオン判定距離_真っ暗　弾丸
	float bulletMaxRadius_forPD;

	// NAME: Bullet automatic capture Angle range Left and right [deg] - 弾丸自動捕捉 角度範囲 左右[deg]
	// DESC: Automatic lock-on left / right angle when non-lock-on bullet - 非ロックオン時の自動ロックオン左右角度　弾丸
	float bulletAngRange;

	// NAME: Time to continue locking even if the lock condition is not met [s] - ロック条件を満たさなくてもロック継続する時間[s]
	// DESC: Time to continue locking even if the lock condition is not met (disabled at 0.0) - ロック条件を満たさなくてもロック継続する時間(0.0で無効)
	float lockTgtKeepTime;

	// NAME: Normal character translation tracking rate - 通常用キャラ並進追尾率
	// DESC: Normal character translation tracking rate (disabled at -1.0) - 通常用キャラ並進追尾率(-1.0で無効)
	float chrTransChaseRateForNormal;

	// NAME: Padding - パディング
	uint8_t pad[48];
};

#endif
