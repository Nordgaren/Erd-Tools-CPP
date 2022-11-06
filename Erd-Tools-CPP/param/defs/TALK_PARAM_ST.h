/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_TALK_PARAM_ST_H
#define _PARAMDEF_TALK_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct TALK_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: PC Gender is Male: Message ID - PC性別が男：メッセージID
	// DESC: PC Gender is Male: Specify Message-> Menu - PC性別が男：メッセージを指定->メニュー
	int32_t msgId;

	// NAME: PC Gender is Male: Voice ID - PC性別が男：ボイスID
	// DESC: PC Gender is Male: Specify Voice-> Sound - PC性別が男：ボイスを指定->サウンド
	int32_t voiceId;

	// NAME: Special effect ID0 - 特殊効果ID0
	// DESC: Specify special effects-> Character - 特殊効果を指定->キャラ
	int32_t spEffectId0;

	// NAME: Motion ID 0 - モーションID0
	// DESC: Specify motion-> Character - モーションを指定->キャラ
	int32_t motionId0;

	// NAME: Special effect ID1 - 特殊効果ID1
	// DESC: Specify special effects-> Character - 特殊効果を指定->キャラ
	int32_t spEffectId1;

	// NAME: Motion ID 1 - モーションID1
	// DESC: Specify motion-> Character - モーションを指定->キャラ
	int32_t motionId1;

	// NAME: Return position - 復帰位置
	// DESC: Relative position of returning conversation-> Conversation - 復帰する会話の相対位置->会話
	int32_t returnPos;

	// NAME: Reaction ID - リアクションID
	// DESC: Conversation specification when returning-> Conversation - 復帰時の会話指定->会話
	int32_t reactionId;

	// NAME: Event ID - イベントID
	// DESC: Event ID-> Event - イベントID->イベント
	int32_t eventId;

	// NAME: PC Gender is Female: Message - PC性別が女：メッセージ
	// DESC: PC Gender is Female: Specify Message-> Menu - PC性別が女：メッセージを指定->メニュー
	int32_t msgId_female;

	// NAME: PC Gender is Female: Voice ID - PC性別が女：ボイスID
	// DESC: PC Gender is Female: Specify Voice-> Sound - PC性別が女：ボイスを指定->サウンド
	int32_t voiceId_female;

	// NAME: Speaker: Lip-sync start time - 話者：口パク開始時間
	// DESC: Speaker: Lip-sync start time. -1 with no lip-sync - 話者：口パク開始時間。-1で口パク無し
	int16_t lipSyncStart;

	// NAME: Speaker: Lip-sync duration - 話者：口パク継続時間
	// DESC: Speaker: Lip-sync duration. Lip-sync at -1 continues forever - 話者：口パク継続時間。-1で口パクずっと継続
	int16_t lipSyncTime;

	// NAME: Padding - パディング
	uint8_t pad2[4];

	// NAME: Voice playback timeout time - ボイス再生タイムアウト時間
	// DESC: Voice playback timeout period. In case of -1, time-out processing is performed in "NPC conversation voice playback timeout time" of "Common_Game system parameter". - ボイス再生タイムアウト時間。-1の場合は「共通_ゲームシステムパラメータ」の「NPC会話ボイス再生タイムアウト時間」でタイムアウト処理を行う。
	float timeout;

	// NAME: Speaker: Subtitled play Anime ID - 話者：字幕芝居アニメID
	// DESC: Speaker: Animation ID during conversation - 話者：会話中のアニメーションID
	int32_t talkAnimationId;

	// NAME: Whether to forcibly display subtitles - 強制的に字幕を表示するか
	// DESC: Do you want to force the display of subtitles? Display subtitles even when subtitles are turned off as an option - 強制的に字幕を表示するか。オプションで字幕オフでも字幕を表示する
	uint8_t isForceDisp: 1;

	// NAME: Padding - パディング
	uint8_t pad3: 7;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t pad1[31];
};

#endif
