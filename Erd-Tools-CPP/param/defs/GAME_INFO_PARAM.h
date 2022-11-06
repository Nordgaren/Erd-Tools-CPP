/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_GAME_INFO_PARAM_H
#define _PARAMDEF_GAME_INFO_PARAM_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct GAME_INFO_PARAM {

	// NAME: Title MsgID - タイトルのMsgID
	// DESC: Title name - タイトル名
	int32_t titleMsgId;

	// NAME: Content MsgID - 内容のMsgID
	// DESC: Contents - 内容
	int32_t contentMsgId;

	// NAME: price - 価格
	// DESC: price - 価格
	int32_t value;

	// NAME: Sort ID - ソートID
	// DESC: Sort ID - ソートID
	int32_t sortId;

	// NAME: Action ID - アクションID
	// DESC: This is the action ID that determines the sales status. - 販売状況を判断するアクションIDです。
	int32_t eventId;

	// NAME: Padding - パディング
	// DESC: Padding - パディング
	uint8_t Pad[12];
};

#endif
