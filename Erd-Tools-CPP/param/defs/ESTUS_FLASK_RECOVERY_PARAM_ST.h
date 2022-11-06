/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ESTUS_FLASK_RECOVERY_PARAM_ST_H
#define _PARAMDEF_ESTUS_FLASK_RECOVERY_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ESTUS_FLASK_RECOVERY_PARAM_ST {

	// NAME: host - ホスト
	// DESC: Number of host est recovery - ホストのエスト回復数
	uint8_t host;

	// NAME: No intrusion route_orb_ - 侵入経路_オーブ_なし
	// DESC: The number of est recovery of the power of the orb whose invasion route is - 侵入経路がオーブの勢力のエスト回復数
	uint8_t invadeOrb_None;

	// NAME: Invasion route_Orb_Sun - 侵入経路_オーブ_太陽
	// DESC: The number of est recovery of the power of the orb whose invasion route is - 侵入経路がオーブの勢力のエスト回復数
	uint8_t invadeOrb_Umbasa;

	// NAME: Intrusion route_Orb_Berserker - 侵入経路_オーブ_バーサーカー
	// DESC: The number of est recovery of the power of the orb whose invasion route is - 侵入経路がオーブの勢力のエスト回復数
	uint8_t invadeOrb_Berserker;

	// NAME: Invasion route_Orb_Sinner - 侵入経路_オーブ_罪人
	// DESC: The number of est recovery of the power of the orb whose invasion route is - 侵入経路がオーブの勢力のエスト回復数
	uint8_t invadeOrb_Sinners;

	// NAME: No intrusion route_sign_ - 侵入経路_サイン_なし
	// DESC: The number of est recovery of the power whose invasion route is a sign - 侵入経路がサインの勢力のエスト回復数
	uint8_t invadeSign_None;

	// NAME: Invasion route_sign_sun - 侵入経路_サイン_太陽
	// DESC: The number of est recovery of the power whose invasion route is a sign - 侵入経路がサインの勢力のエスト回復数
	uint8_t invadeSign_Umbasa;

	// NAME: Intrusion route_sign_berserker - 侵入経路_サイン_バーサーカー
	// DESC: The number of est recovery of the power whose invasion route is a sign - 侵入経路がサインの勢力のエスト回復数
	uint8_t invadeSign_Berserker;

	// NAME: Intrusion route_sign_sinner - 侵入経路_サイン_罪人
	// DESC: The number of est recovery of the power whose invasion route is a sign - 侵入経路がサインの勢力のエスト回復数
	uint8_t invadeSign_Sinners;

	// NAME: Invasion route_ring_sinner - 侵入経路_指輪_罪人
	// DESC: The number of est recovery of the power of the ring whose invasion route is - 侵入経路が指輪の勢力のエスト回復数
	uint8_t invadeRing_Sinners;

	// NAME: Invasion route_Ring_Boss guard (Rosalia) - 侵入経路_指輪_ボス守(ロザリア)
	// DESC: The number of est recovery of the power of the ring whose invasion route is - 侵入経路が指輪の勢力のエスト回復数
	uint8_t invadeRing_Rosalia;

	// NAME: Invasion route_Ring_Map Mamoru (Forest) - 侵入経路_指輪_マップ守(森)
	// DESC: The number of est recovery of the power of the ring whose invasion route is - 侵入経路が指輪の勢力のエスト回復数
	uint8_t invadeRing_Forest;

	// NAME: Cooperation route_sign_ None - 協力経路_サイン_なし
	// DESC: The number of est recovery of the power whose cooperation route is a sign - 協力経路がサインの勢力のエスト回復数
	uint8_t coopSign_None;

	// NAME: Cooperation route_sign_sun - 協力経路_サイン_太陽
	// DESC: The number of est recovery of the power whose cooperation route is a sign - 協力経路がサインの勢力のエスト回復数
	uint8_t coopSign_Umbasa;

	// NAME: Cooperation route_sign_berserker - 協力経路_サイン_バーサーカー
	// DESC: The number of est recovery of the power whose cooperation route is a sign - 協力経路がサインの勢力のエスト回復数
	uint8_t coopSign_Berserker;

	// NAME: Cooperation route_sign_sinner - 協力経路_サイン_罪人
	// DESC: The number of est recovery of the power whose cooperation route is a sign - 協力経路がサインの勢力のエスト回復数
	uint8_t coopSign_Sinners;

	// NAME: Cooperation route _ ring _ red hunting - 協力経路_指輪 _赤狩り
	// DESC: Cooperation route is the number of est recovery of the power of the ring - 協力経路が指輪の勢力のエスト回復数
	uint8_t coopRing_RedHunter;

	// NAME: Intrusion route_Ring_Map guard (Anor) - 侵入経路_指輪_マップ守(アノール)
	// DESC: The number of est recovery of the power of the ring whose invasion route is - 侵入経路が指輪の勢力のエスト回復数
	uint8_t invadeRing_Anor;

	// NAME: Recovery number Parameter replacement rate - 回復数パラメータ差し替え率
	// DESC: Recovery number Parameter replacement rate - 回復数パラメータ差し替え率
	uint16_t paramReplaceRate;

	// NAME: Recovery number Parameter replacement destination ID - 回復数パラメータ差し替え先ID
	// DESC: Recovery number Parameter replacement destination ID - 回復数パラメータ差し替え先ID
	int32_t paramReplaceId;

	// NAME: pad - pad
	uint8_t pad[8];
};

#endif
