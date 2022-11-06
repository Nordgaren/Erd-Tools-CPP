/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ROLE_PARAM_ST_H
#define _PARAMDEF_ROLE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ROLE_PARAM_ST {

	// NAME: Team type - チームタイプ
	// DESC: Team type - チームタイプ
	uint8_t teamType;

	// NAME: pad10 - pad10
	uint8_t pad10[3];

	// NAME: Phantom parameter ID (pledge rank 0) - ファントムパラメータID(誓約ランク0)
	// DESC: Phantom parameter ID when pledge rank is 0 - 誓約ランクが0のときのファントムパラメータID
	int32_t phantomParamId;

	// NAME: Resident special effect 0 - 常駐特殊効果0
	// DESC: Resident special effect 0 - 常駐特殊効果0
	int32_t spEffectID0;

	// NAME: Resident special effect 1 - 常駐特殊効果1
	// DESC: Resident special effect 1 - 常駐特殊効果1
	int32_t spEffectID1;

	// NAME: Resident special effect 2 - 常駐特殊効果2
	// DESC: Resident special effect 2 - 常駐特殊効果2
	int32_t spEffectID2;

	// NAME: Resident special effect 3 - 常駐特殊効果3
	// DESC: Resident special effect 3 - 常駐特殊効果3
	int32_t spEffectID3;

	// NAME: Resident special effect 4 - 常駐特殊効果4
	// DESC: Resident special effect 4 - 常駐特殊効果4
	int32_t spEffectID4;

	// NAME: Resident special effect 5 - 常駐特殊効果5
	// DESC: Resident special effect 5 - 常駐特殊効果5
	int32_t spEffectID5;

	// NAME: Resident special effect 6 - 常駐特殊効果6
	// DESC: Resident special effect 6 - 常駐特殊効果6
	int32_t spEffectID6;

	// NAME: Resident special effect 7 - 常駐特殊効果7
	// DESC: Resident special effect 7 - 常駐特殊効果7
	int32_t spEffectID7;

	// NAME: Resident special effect 8 - 常駐特殊効果8
	// DESC: Resident special effect 8 - 常駐特殊効果8
	int32_t spEffectID8;

	// NAME: Resident special effect 9 - 常駐特殊効果9
	// DESC: Resident special effect 9 - 常駐特殊効果9
	int32_t spEffectID9;

	// NAME: SOS sign SFX ID - SOSサインSFX ID
	// DESC: SOS sign SFX ID issued by another person - 他の人が出したSOSサインSFX ID
	int32_t sosSignSfxId;

	// NAME: SOS sign SFX ID issued by me - 自分が出したSOSサインSFX ID
	// DESC: SOS sign SFX ID issued by me - 自分が出したSOSサインSFX ID
	int32_t mySosSignSfxId;

	// NAME: Anime ID (player) when summoned - 召喚された時のアニメID(プレイヤ)
	// DESC: Anime ID to play when the player is summoned and the game starts - プレイヤが召喚されてゲーム開始するときに再生するアニメID
	int32_t summonStartAnimId;

	// NAME: Reward item lottery ID_for map - 報酬アイテム抽選ID_マップ用
	// DESC: Acquisition reward item lottery parameter ID_for map (not -1) - 獲得報酬のアイテム抽選パラメータID_マップ用(-1で無し)
	int32_t itemlotParamId;

	// NAME: Voice chat group - ボイスチャットグループ
	// DESC: Voice chat group - ボイスチャットグループ
	uint8_t voiceChatGroup;

	// NAME: Role name text color - ロール名テキストカラー
	// DESC: The color of the role name text displayed on the FE of the network PC - ネットワークPCのFEに表示するロール名テキストの色
	uint8_t roleNameColor;

	// NAME: pad1 - pad1
	uint8_t pad1[2];

	// NAME: Role name text ID - ロール名テキストID
	// DESC: Text ID of the role name to be displayed on the FE of the network PC - ネットワークPCのFEに表示するロール名のテキストID
	int32_t roleNameId;

	// NAME: Threat level - 脅威度
	// DESC: Threat level - 脅威度
	uint32_t threatLv;

	// NAME: Phantom parameter ID (pledge rank 1) - ファントムパラメータID(誓約ランク1)
	// DESC: Phantom parameter ID when pledge rank is 1 - 誓約ランクが1のときのファントムパラメータID
	int32_t phantomParamId_vowRank1;

	// NAME: Phantom Parameter ID (Pledge Rank 2) - ファントムパラメータID(誓約ランク2)
	// DESC: Phantom parameter ID when pledge rank is 2 - 誓約ランクが2のときのファントムパラメータID
	int32_t phantomParamId_vowRank2;

	// NAME: Phantom Parameter ID (Pledge Rank 3) - ファントムパラメータID(誓約ランク3)
	// DESC: Phantom parameter ID when pledge rank is 3 - 誓約ランクが3のときのファントムパラメータID
	int32_t phantomParamId_vowRank3;

	// NAME: Special effect ID for SFX (pledge rank 0) - SFX用特殊効果ID(誓約ランク0)
	// DESC: Special effect ID for SFX when pledge rank 0 - 誓約ランク0のときのSFX用特殊効果ID
	int32_t spEffectID_vowRank0;

	// NAME: Special effect ID for SFX (pledge rank 1) - SFX用特殊効果ID(誓約ランク1)
	// DESC: Special effect ID for SFX when pledge rank 1 - 誓約ランク1のときのSFX用特殊効果ID
	int32_t spEffectID_vowRank1;

	// NAME: Special effect ID for SFX (pledge rank 2) - SFX用特殊効果ID(誓約ランク2)
	// DESC: Special effect ID for SFX when pledge rank 2 - 誓約ランク2のときのSFX用特殊効果ID
	int32_t spEffectID_vowRank2;

	// NAME: Special effect ID for SFX (pledge rank 3) - SFX用特殊効果ID(誓約ランク3)
	// DESC: Special effect ID for SFX when pledge rank 3 - 誓約ランク3のときのSFX用特殊効果ID
	int32_t spEffectID_vowRank3;

	// NAME: Phantom ID for sign illusion - サイン幻影用のファントムID
	// DESC: Multiplayer pledge ghost body sign phantom ID designation for illusion - マルチプレイ誓約霊体用　サイン幻影用のファントムID指定
	int32_t signPhantomId;

	// NAME: Anime ID when summoned (other than player) - 召喚された時のアニメID(プレイヤ以外)
	// DESC: Anime ID to play when a player other than the player is summoned and the game starts - プレイヤ以外が召喚されてゲーム開始するときに再生するアニメID
	int32_t nonPlayerSummonStartAnimId;

	// NAME: pad2 - pad2
	uint8_t pad2[16];
};

#endif
