/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_NETWORK_MSG_PARAM_ST_H
#define _PARAMDEF_NETWORK_MSG_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct NETWORK_MSG_PARAM_ST {

	// NAME: priority - 優先度
	// DESC: priority - 優先度
	uint16_t priority;

	// NAME: Forced interrupt - 強制割り込み
	// DESC: Forced interrupt - 強制割り込み
	uint8_t forcePlay;

	// NAME: reserve - 予約
	// DESC: reserve - 予約
	uint8_t pad1[1];

	// NAME: White spirit (white sign) - 白霊（白サイン）
	// DESC: White spirit (white sign) - 白霊（白サイン）
	int32_t normalWhite;

	// NAME: Sun spirit (white sign) - 太陽霊（白サイン）
	// DESC: Sun spirit (white sign) - 太陽霊（白サイン）
	int32_t umbasaWhite;

	// NAME: Berserker spirit (white sign) - バーサーカー霊（白サイン）
	// DESC: Berserker spirit (white sign) - バーサーカー霊（白サイン）
	int32_t berserkerWhite;

	// NAME: Sinner Hero Spirit (white sign) - 罪人英雄霊（白サイン ）
	// DESC: Sinner Hero Spirit (white sign) - 罪人英雄霊（白サイン ）
	int32_t sinnerHeroWhite;

	// NAME: Dark spirit (red sign) - 闇霊（赤サイン）
	// DESC: Dark spirit (red sign) - 闇霊（赤サイン）
	int32_t normalBlack;

	// NAME: Sun spirit (red sign) - 太陽霊（赤サイン）
	// DESC: Sun spirit (red sign) - 太陽霊（赤サイン）
	int32_t umbasaBlack;

	// NAME: Berserker spirit (red sign) - バーサーカー霊（赤サイン）
	// DESC: Berserker spirit (red sign) - バーサーカー霊（赤サイン）
	int32_t berserkerBlack;

	// NAME: Intrusion_A - 侵入_A
	// DESC: Intrusion_A - 侵入_A
	int32_t forceJoinBlack;

	// NAME: Sun spirit (intrusion) - 太陽霊（乱入）
	// DESC: Sun spirit (intrusion) - 太陽霊（乱入）
	int32_t forceJoinUmbasaBlack;

	// NAME: Berserker spirit (intrusion) - バーサーカー霊（乱入）
	// DESC: Berserker spirit (intrusion) - バーサーカー霊（乱入）
	int32_t forceJoinBerserkerBlack;

	// NAME: Sinner hunting spirit (visit) - 罪人狩り霊（訪問）
	// DESC: Sinner hunting spirit (visit) - 罪人狩り霊（訪問）
	int32_t sinnerHunterVisitor;

	// NAME: Red Scare Spirit (Visit) - 赤狩り霊（訪問）
	// DESC: Red Scare Spirit (Visit) - 赤狩り霊（訪問）
	int32_t redHunterVisitor;

	// NAME: Boss guardian spirit (visit) - ボス守護霊（訪問）
	// DESC: Boss guardian spirit (visit) - ボス守護霊（訪問）
	int32_t guardianOfBossVisitor;

	// NAME: Map Guardian Spirit_Forest (Visit) - マップ守護霊_森（訪問）
	// DESC: Map Guardian Spirit_Forest (Visit) - マップ守護霊_森（訪問）
	int32_t guardianOfForestMapVisitor;

	// NAME: Map Guardian_Anor (Visit) - マップ守護霊_アノール（訪問）
	// DESC: Map Guardian_Anor (Visit) - マップ守護霊_アノール（訪問）
	int32_t guardianOfAnolisVisitor;

	// NAME: Rosalia spirit (red sign) - ロザリア霊（赤サイン）
	// DESC: Rosalia spirit (red sign) - ロザリア霊（赤サイン）
	int32_t rosaliaBlack;

	// NAME: Rosalia spirit (intrusion) - ロザリア霊（乱入）
	// DESC: Rosalia spirit (intrusion) - ロザリア霊（乱入）
	int32_t forceJoinRosaliaBlack;

	// NAME: Red Scare Spirit 2 (Visit) - 赤狩り霊2（訪問）
	// DESC: Red Scare Spirit 2 (Visit) - 赤狩り霊2（訪問）
	int32_t redHunterVisitor2;

	// NAME: NPC Pseudo Multi 1 - NPC擬似マルチ1
	// DESC: NPC Pseudo Multi 1 - NPC擬似マルチ1
	int32_t npc1;

	// NAME: NPC Pseudo Multi 2 - NPC擬似マルチ2
	// DESC: NPC Pseudo Multi 2 - NPC擬似マルチ2
	int32_t npc2;

	// NAME: NPC Pseudo Multi 3 - NPC擬似マルチ3
	// DESC: NPC Pseudo Multi 3 - NPC擬似マルチ3
	int32_t npc3;

	// NAME: NPC Pseudo Multi 4 - NPC擬似マルチ4
	// DESC: NPC Pseudo Multi 4 - NPC擬似マルチ4
	int32_t npc4;

	// NAME: Battle royale - バトルロイヤル
	// DESC: Battle royale - バトルロイヤル
	int32_t battleRoyal;

	// NAME: NPC Pseudo Multi 5 - NPC擬似マルチ5
	// DESC: NPC Pseudo Multi 5 - NPC擬似マルチ5
	int32_t npc5;

	// NAME: NPC Pseudo Multi 6 - NPC擬似マルチ6
	// DESC: NPC Pseudo Multi 6 - NPC擬似マルチ6
	int32_t npc6;

	// NAME: NPC Pseudo Multi 7 - NPC擬似マルチ7
	// DESC: NPC Pseudo Multi 7 - NPC擬似マルチ7
	int32_t npc7;

	// NAME: NPC Pseudo Multi 8 - NPC擬似マルチ8
	// DESC: NPC Pseudo Multi 8 - NPC擬似マルチ8
	int32_t npc8;

	// NAME: NPC Pseudo Multi 9 - NPC擬似マルチ9
	// DESC: NPC Pseudo Multi 9 - NPC擬似マルチ9
	int32_t npc9;

	// NAME: NPC Pseudo Multi 10 - NPC擬似マルチ10
	// DESC: NPC Pseudo Multi 10 - NPC擬似マルチ10
	int32_t npc10;

	// NAME: NPC Pseudo Multi 11 - NPC擬似マルチ11
	// DESC: NPC Pseudo Multi 11 - NPC擬似マルチ11
	int32_t npc11;

	// NAME: NPC Pseudo Multi 12 - NPC擬似マルチ12
	// DESC: NPC Pseudo Multi 12 - NPC擬似マルチ12
	int32_t npc12;

	// NAME: NPC Pseudo Multi 13 - NPC擬似マルチ13
	// DESC: NPC Pseudo Multi 13 - NPC擬似マルチ13
	int32_t npc13;

	// NAME: NPC Pseudo Multi 14 - NPC擬似マルチ14
	// DESC: NPC Pseudo Multi 14 - NPC擬似マルチ14
	int32_t npc14;

	// NAME: NPC Pseudo Multi 15 - NPC擬似マルチ15
	// DESC: NPC Pseudo Multi 15 - NPC擬似マルチ15
	int32_t npc15;

	// NAME: NPC Pseudo Multi 16 - NPC擬似マルチ16
	// DESC: NPC Pseudo Multi 16 - NPC擬似マルチ16
	int32_t npc16;

	// NAME: Intrusion_B - 侵入_B
	// DESC: Intrusion_B - 侵入_B
	int32_t forceJoinBlack_B;

	// NAME: White spirit (white sign) for NPCs - 白霊（白サイン）_NPC用
	// DESC: White spirit (white sign) for NPCs - 白霊（白サイン）_NPC用
	int32_t normalWhite_Npc;

	// NAME: For intrusion_A_NPCs - 侵入_A_NPC用
	// DESC: For intrusion_A_NPCs - 侵入_A_NPC用
	int32_t forceJoinBlack_Npc;

	// NAME: For intrusion_B_NPCs - 侵入_B_NPC用
	// DESC: For intrusion_B_NPCs - 侵入_B_NPC用
	int32_t forceJoinBlack_B_Npc;

	// NAME: For intrusion_C_NPCs - 侵入_C_NPC用
	// DESC: For intrusion_C_NPCs - 侵入_C_NPC用
	int32_t forceJoinBlack_C_Npc;

	// NAME: reserve - 予約
	// DESC: reserve - 予約
	uint8_t pad2[28];
};

#endif
