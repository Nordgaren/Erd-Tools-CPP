/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BUDDY_STONE_PARAM_ST_H
#define _PARAMDEF_BUDDY_STONE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BUDDY_STONE_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Conversation character entity ID - 会話キャラエンティティID
	// DESC: Used as a foreign key when referencing from a conversation. - 会話から参照する時の外部キーとして使う。
	uint32_t talkChrEntityId;

	// NAME: Defeat Target List Entity ID - 撃破対象リストエンティティID
	// DESC: Entity ID of the character / group to be defeated by the buddy when summoned from this stele - この石碑から召喚した際に、バディの撃破対象になるキャラ/グループのエンティティID
	uint32_t eliminateTargetEntityId;

	// NAME: Summoned event flag ID - 召喚済みイベントフラグID
	// DESC: Flag ID that stands when summoned from a stone monument. When this flag is set, the stone monument cannot be summoned. - 一度石碑から召喚した際に立つフラグID。このフラグが立っていると、石碑が召喚不可になる。
	uint32_t summonedEventFlagId;

	// NAME: Is it special? - スペシャルか
	// DESC: Is the stone monument an SP stone monument or a general-purpose stone monument? A bool that distinguishes. - 石碑がSP石碑か汎用石碑か？を区別するbool。
	uint8_t isSpecial: 1;

	// NAME: Padding - パディング
	uint8_t pad1: 7;

	// NAME: Padding - パディング
	uint8_t pad2[3];

	// NAME: Buddy ID - バディID
	// DESC: ID of the buddy parameter. If "Special" is ○, this buddy ID will be summoned. - バディパラメータのID。「スペシャルか」が○の場合、このバディIDが召喚される。
	int32_t buddyId;

	// NAME: Special effects ID for doping - ドーピング用特殊効果ID
	// DESC: Special effect ID applied to the buddy when summoning the buddy. - バディ召喚時に、バディにかかる特殊効果ID。
	int32_t dopingSpEffectId;

	// NAME: Buddy activation distance [m] - バディ起動距離[m]
	// DESC: If there is at least one character to be defeated in this range, you can summon a buddy at that stone monument. - 撃破対象のキャラがこの範囲に1体でも居れば、その石碑でバディ召喚が可能になる
	uint16_t activateRange;

	// NAME: Buddy homecoming distance overwrite [m] - バディ帰巣距離上書き[m]
	// DESC: Buddy's homecoming distance can be overridden - バディの帰巣距離を上書きできる
	int16_t overwriteReturnRange;

	// NAME: Launch range overwrite area entity ID - 起動範囲上書き領域エンティティID
	// DESC: The range where the buddy can be summoned can be overwritten in the area of the specified entity ID. - バディを召喚できる範囲を、指定エンティティIDの領域で上書きできる
	uint32_t overwriteActivateRegionEntityId;

	// NAME: Warning range overwrite area entity ID - 警告範囲上書き領域エンティティID
	// DESC: Warning area entity ID - 警告領域エンティティID
	uint32_t warnRegionEntityId;

	// NAME: Padding - パディング
	uint8_t pad3[24];
};

#endif
