/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ENEMY_STANDARD_INFO_BANK_H
#define _PARAMDEF_ENEMY_STANDARD_INFO_BANK_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ENEMY_STANDARD_INFO_BANK {

	// NAME: Behavior id - 挙動ｉｄ
	// DESC: Enemy behavior ID - 敵の挙動ＩＤ
	int32_t EnemyBehaviorID;

	// NAME: Hit points - ヒットポイント
	// DESC: Hit points - ヒットポイント
	uint16_t HP;

	// NAME: Offensive power - 攻撃力
	// DESC: Attack power (for proto only) - 攻撃力（プロト専用）
	uint16_t AttackPower;

	// NAME: Character type - キャラタイプ
	// DESC: Character type - キャラタイプ
	int32_t ChrType;

	// NAME: Height per [m] - あたりの高さ[m]
	// DESC: Height per (Please specify a size larger than the diameter) - あたりの高さ（直径以上のサイズを指定してください）
	float HitHeight;

	// NAME: Radius around [m] - あたりの半径[m]
	// DESC: Radius around - あたりの半径
	float HitRadius;

	// NAME: Weight [kg] - 重さ[kg]
	// DESC: The weight of the character - キャラの重さ
	float Weight;

	// NAME: Dynamic friction force - 動摩擦力
	// DESC: Dynamic friction force - 動摩擦力
	float DynamicFriction;

	// NAME: Static friction - 静摩擦力
	// DESC: Static friction force - 静止摩擦力
	float StaticFriction;

	// NAME: Upper body initial state - 上半身初期状態
	// DESC: Upper body initial state (PG input) - 上半身初期状態（PG入力）
	int32_t UpperDefState;

	// NAME: Initial state of action - アクション初期状態
	// DESC: Action initial state (PG input) - アクション初期状態（PG入力）
	int32_t ActionDefState;

	// NAME: Angle that can be turned per unit time [deg / s] - 単位時間当たり旋回できる角度[deg/s]
	// DESC: Y-axis turning angle per unit time [deg / s] - 単位時間当たりのＹ軸旋回角度[deg/s]
	float RotY_per_Second;

	// NAME: reserve - 予約
	uint8_t reserve0[20];

	// NAME: unused - 未使用
	// DESC: unused - 未使用
	uint8_t RotY_per_Second_old;

	// NAME: Can you move left and right? - 左右移動できるか
	// DESC: Can you move left and right? - 左右移動できるか
	uint8_t EnableSideStep;

	// NAME: Whether to use a ragdoll per character - キャラあたりにラグドールを使用するか
	// DESC: Whether to use a ragdoll per character - キャラあたりにラグドールを使用するか
	uint8_t UseRagdollHit;

	// NAME: reserve - 予約
	uint8_t reserve_last[5];

	// NAME: Amount of stamina - スタミナ量
	// DESC: Total amount of stamina - スタミナ総量
	uint16_t stamina;

	// NAME: Stamina recovery - スタミナ回復
	// DESC: Stamina recovery amount per second - 1秒間あたりのスタミナ回復量
	uint16_t staminaRecover;

	// NAME: Stamina basic consumption - スタミナ基本消費
	// DESC: Basic value of stamina consumption used when attacking and guarding - 攻撃、ガード時に使用するスタミナ消費の基本値
	uint16_t staminaConsumption;

	// NAME: Physical defense - 物理防御力
	// DESC: Damage reduction base value for physical attacks - 物理攻撃に対するダメージ減少基本値
	uint16_t deffenct_Phys;

	// NAME: Reservation 1 - 予約1
	uint8_t reserve_last2[48];
};

#endif
