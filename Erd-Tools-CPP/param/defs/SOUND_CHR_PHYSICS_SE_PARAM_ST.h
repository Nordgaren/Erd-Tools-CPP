/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SOUND_CHR_PHYSICS_SE_PARAM_ST_H
#define _PARAMDEF_SOUND_CHR_PHYSICS_SE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SOUND_CHR_PHYSICS_SE_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Ground contact SEID - 地面接触SEID
	// DESC: SEID pronounced when contacting the ground after death. (-1: Invalid). SEID category is fixed to c - 死亡後、地面と接触したときに発音するSEID。(-1：無効)。SEIDカテゴリーはc固定
	int32_t ContactLandSeId;

	// NAME: Ground contact additional SEID (for material) - 地面接触追加SEID(材質用)
	// DESC: Additional SEID (for material) that sounds when it comes into contact with the ground after death. (-1: Invalid). SEID category is fixed to c - 死亡後、地面と接触したときに発音する追加SEID(材質用)。(-1：無効)。SEIDカテゴリーはc固定
	int32_t ContactLandAddSeId;

	// NAME: Number of ground contact pronunciations - 地面接触発音回数
	// DESC: Number of pronunciations when touching the ground after death - 死亡後、地面接触時に発音する回数
	int32_t ContactLandPlayNum;

	// NAME: Do you count the number of ground contact sounds in rigid body units? - 地面接触発音回数を剛体単位でカウントするか？
	// DESC: Do you count the number of pronunciations of surface contact after death in rigid body units? (○: Rigid body unit, ×: Character unit) - 死亡後地、面接触発音回数を剛体単位でカウントするか？(〇：剛体単位、×：キャラ単位)
	uint8_t IsEnablePlayCountPerRigid;

	// NAME: pad - pad
	uint8_t pad[3];

	// NAME: Ground contact minimum impulse value - 地面接触最小力積値
	// DESC: Minimum impulse value required for ground contact determination after death - 死亡後、地面接触判定に必要な最小力積値
	float ContactLandMinImpuse;

	// NAME: Ground contact minimum velocity value - 地面接触最小速度値
	// DESC: Minimum speed value required for ground contact determination after death - 死亡後、地面接触判定に必要な最小速度値
	float ContactLandMinSpeed;

	// NAME: Player contact SEID - Player接触SEID
	// DESC: SEID that sounds when you come into contact with Player after death. (-1: Invalid). SEID category is fixed to c - 死亡後、Playerと接触したときに鳴らすSEID。(-1：無効)。SEIDカテゴリーはc固定
	int32_t ContactPlayerSeId;

	// NAME: Player minimum contact impulse value - Player接触最小力積値
	// DESC: Minimum impulse value required for Player contact judgment after death - 死亡後、Player接触判定に必要な最小力積値
	float ContactPlayerMinImpuse;

	// NAME: Player minimum contact speed value - Player接触最小速度値
	// DESC: Minimum speed value required for Player contact judgment after death - 死亡後、Player接触判定に必要な最小速度値
	float ContactPlayerMinSpeed;

	// NAME: Contact judgment rigid body IDX0 - 接触判定剛体IDX0
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx0;

	// NAME: Contact judgment rigid body IDX1 - 接触判定剛体IDX1
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx1;

	// NAME: Contact judgment rigid body IDX2 - 接触判定剛体IDX2
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx2;

	// NAME: Contact judgment rigid body IDX3 - 接触判定剛体IDX3
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx3;

	// NAME: Contact judgment rigid body IDX4 - 接触判定剛体IDX4
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx4;

	// NAME: Contact judgment rigid body IDX5 - 接触判定剛体IDX5
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx5;

	// NAME: Contact judgment rigid body IDX6 - 接触判定剛体IDX6
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx6;

	// NAME: Contact judgment rigid body IDX7 - 接触判定剛体IDX7
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx7;

	// NAME: Contact judgment rigid body IDX8 - 接触判定剛体IDX8
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx8;

	// NAME: Contact judgment rigid body IDX9 - 接触判定剛体IDX9
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx9;

	// NAME: Contact judgment rigid body IDX10 - 接触判定剛体IDX10
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx10;

	// NAME: Contact judgment rigid body IDX11 - 接触判定剛体IDX11
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx11;

	// NAME: Contact judgment rigid body IDX12 - 接触判定剛体IDX12
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx12;

	// NAME: Contact judgment rigid body IDX13 - 接触判定剛体IDX13
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx13;

	// NAME: Contact judgment rigid body IDX14 - 接触判定剛体IDX14
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx14;

	// NAME: Contact judgment rigid body IDX15 - 接触判定剛体IDX15
	// DESC: Specify the INDEX of the rigid body for contact judgment. Specify only the rigid body to which you want to attach SE - 接触判定する剛体のINDEXを指定します。SEを付けたい剛体だけ指定します
	int8_t ContactCheckRigidIdx15;
};

#endif
