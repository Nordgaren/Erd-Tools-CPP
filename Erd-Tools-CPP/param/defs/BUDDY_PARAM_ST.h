/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BUDDY_PARAM_ST_H
#define _PARAMDEF_BUDDY_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BUDDY_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Summon special effect ID - 召喚特殊効果ID
	// DESC: Set the special effect ID that will be the summoning condition - 召喚条件になる特殊効果IDを設定します 
	int32_t triggerSpEffectId;

	// NAME: NPC parameter ID - NPCパラメータID
	// DESC: Set the NPC parameter ID of the summoned buddy - 召喚されるバディのNPCパラメータIDを設定します
	int32_t npcParamId;

	// NAME: Thinking parameter ID - 思考パラメータID
	// DESC: Sets the NPC Thinking Parameter ID of the summoned buddy - 召喚されるバディのNPC思考パラメータIDを設定します
	int32_t npcThinkParamId;

	// NAME: Riding (riding side): NPC parameter ID - 騎乗（乗られる側）：NPCパラメータID
	// DESC: For buddies that you want to summon while riding, set the NPC parameter ID for the "rider" - 騎乗状態で召喚したいバディの場合、「乗られる側」のNPCパラメータIDを設定します 
	int32_t npcParamId_ridden;

	// NAME: Riding (riding side): Thinking parameter ID - 騎乗（乗られる側）：思考パラメータID
	// DESC: For buddies that you want to summon while riding, set the NPC Thinking Parameter ID for the "rider" - 騎乗状態で召喚したいバディの場合、「乗られる側」のNPC思考パラメータIDを設定します
	int32_t npcThinkParamId_ridden;

	// NAME: X: Placement coordinate offset [m] - X：配置座標オフセット[m]
	// DESC: Sets the distance in meters to offset the buddy from the summon point to the X coordinate - バディを召喚ポイントから、X座標にオフセットする距離をメートル単位で設定します
	float x_offset;

	// NAME: Z: Placement coordinate offset [m] - Z：配置座標オフセット[m]
	// DESC: Sets the distance in meters that offsets the buddy from the summon point to the Z coordinate. - バディを召喚ポイントから、Z座標にオフセットする距離をメートル単位で設定します
	float z_offset;

	// NAME: Y: Your placement angle [deg] - Y：自分の配置角度[deg]
	// DESC: Set the angle to rotate yourself around the Y axis - Y軸を中心に、自分を回転させる角度を設定します
	float y_angle;

	// NAME: Will it emerge from around the stone monument? - 石碑周辺から出現するか？
	// DESC: Will it emerge from around the stone monument? - 石碑周辺から出現するか？
	uint8_t appearOnAroundSekihi;

	// NAME: Do you want to skip target sharing with your PC? - PCとのターゲット共有をスキップするか？
	// DESC: Do you want to skip target sharing with your PC? - PCとのターゲット共有をスキップするか？
	uint8_t disablePCTargetShare;

	// NAME: PC tracking & warp type - PC追従＆ワープタイプ 
	// DESC: PC tracking & warp type - PC追従＆ワープタイプ 
	uint8_t pcFollowType;

	// NAME: Reserve - リザーブ
	// DESC: Reserve - リザーブ
	uint8_t Reserve[1];

	// NAME: +0 o'clock doping special effect - +0時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv0;

	// NAME: +1 o'clock doping special effect - +1時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv1;

	// NAME: +2 o'clock doping special effect - +2時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv2;

	// NAME: +3 o'clock doping special effect - +3時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv3;

	// NAME: +4 o'clock doping special effect - +4時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv4;

	// NAME: +5 o'clock doping special effect - +5時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv5;

	// NAME: +6 o'clock doping special effect - +6時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv6;

	// NAME: +7 o'clock doping special effect - +7時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv7;

	// NAME: +8 o'clock doping special effect - +8時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv8;

	// NAME: +9 o'clock doping special effect - +9時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv9;

	// NAME: +10 o'clock doping special effect - +10時ドーピング特殊効果
	// DESC: +0 o'clock doping special effect - +0時ドーピング特殊効果
	int32_t dopingSpEffect_lv10;

	// NAME: Initial parameter ID by architype - アーキタイプ別初期パラメータID
	// DESC: Initial parameter ID by architype - アーキタイプ別初期パラメータID
	int32_t npcPlayerInitParamId;

	// NAME: Generate Anime ID - ジェネレートアニメID
	// DESC: Generate Anime ID - ジェネレートアニメID
	int32_t generateAnimId;

	// NAME: Reserve 2 - リザーブ2
	// DESC: Reserve 2 - リザーブ２
	uint8_t Reserve2[4];
};

#endif
