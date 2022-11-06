/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_GESTURE_PARAM_ST_H
#define _PARAMDEF_GESTURE_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct GESTURE_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Reference item ID - 参照アイテムID
	// DESC: Reference item ID. Used to bring in the gesture text ID, icon ID, and sort ID for each menu. Register the tool ID of the equipment parameter - 参照アイテムID。各メニューでのジェスチャのテキストID、アイコンID、ソートIDを持ってくるのに使用される。装備品パラメータの道具IDを登録します
	int32_t itemId;

	// NAME: Anime ID for message attachment - メッセージ添付用アニメID
	// DESC: Anime ID for attaching messages. Specify the animation ID when attaching a message - メッセージ添付用アニメID。メッセージ添付時のアニメIDを指定します
	int32_t msgAnimId;

	// NAME: Is it prohibited to use while riding? - 騎乗中使用禁止か
	// DESC: Is it prohibited to use while riding (default: ×)? If ○, it cannot be used while riding - 騎乗中使用禁止か(デフォルト:×)。○なら騎乗中に使用できない
	uint8_t cannotUseRiding: 1;

	// NAME: Reserved area - 予約領域
	uint8_t pad2: 7;

	// NAME: Reserved area - 予約領域
	uint8_t pad1[3];
};

#endif
