/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST_H
#define _PARAMDEF_KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Lifting flag - 解禁フラグ
	// DESC: Lifting flag (default: 0). If this event flag is set, the ban will be lifted (displayed on the loading screen). If it is 0, the ban is always lifted. The invalid flag has priority - 解禁フラグ(default: 0)。このイベントフラグが立っていれば解禁される（ローディング画面に表示される）。0なら常に解禁されている。無効フラグの方が優先される
	uint32_t unlockFlagId;

	// NAME: Invalid flag - 無効フラグ
	// DESC: Invalid flag (default: 0). If this event flag is set, it will be disabled (it will not be displayed on the loading screen). If it is 0, this flag is not always set. - 無効フラグ(default: 0)。このイベントフラグが立っていると無効化（ローディング画面に表示されなくなる）。0なら常にこのフラグは立っていないものとする
	uint32_t invalidFlagId;

	// NAME: Text ID - テキストID
	// DESC: Text ID (Loading Text.xlsx). Used for both loading titles and loading text - テキストID(Loading Text.xlsx)。ローディングタイトルとローディングテキスト両方に使われる
	int32_t msgId;
};

#endif
