/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_TUTORIAL_PARAM_ST_H
#define _PARAMDEF_TUTORIAL_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct TUTORIAL_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Display type - 表示タイプ
	// DESC: Specifies the type of tutorial menu to display - 表示するチュートリアルメニューの種類を指定します
	uint8_t menuType;

	// NAME: Display timing - 表示タイミング
	// DESC: Display timing (default: 0: "-"). You will see this tutorial when you open this menu. Specify 0: "-" if you do not want to display it when you open the menu. - 表示タイミング（デフォルト: 0:"-"）。このメニューを開いたときに、このチュートリアルを表示します。メニューを開いたときに表示しない場合は 0:"-" を指定します
	uint8_t triggerType;

	// NAME: Impressions - 表示回数
	// DESC: Number of times to display (default: 0: once in the game) - 表示する回数（デフォルト: 0:ゲーム中1回）
	uint8_t repeatType;

	// NAME: Padding - パディング
	uint8_t pad1[1];

	// NAME: Image ID - イメージID
	// DESC: Specifies the tutorial image ID to display (default: 0). Specify 0 if you do not want to display the image - 表示するチュートリアル画像IDを指定します（デフォルト: 0）。画像を表示しない場合は、0 を指定します
	uint16_t imageId;

	// NAME: Padding - パディング
	uint8_t pad2[2];

	// NAME: Display permission flag - 表示許可フラグ
	// DESC: Event flag ID for display permission (default: 0). It will not be displayed until this flag is set. Specify 0 if you always want to allow - 表示許可用のイベントフラグID（デフォルト: 0）。このフラグが立つまでは表示されません。常に許可したい場合は 0 を指定します
	uint32_t unlockEventFlagId;

	// NAME: Text ID - テキストID
	// DESC: ID of the text to be displayed in the tutorial [TutorialText.xlsm]. This text ID is used for both "Title" and "Body" - チュートリアルに表示するテキストのID[TutorialText.xlsm]。「タイトル」も「本文」もこのテキストIDが使われる
	int32_t textId;

	// NAME: at the earliest - 最短
	// DESC: Shortest display guaranteed time [seconds]. Even if it is closed due to an event etc., it will be closed after displaying at least this time. It's only for toast, so it's ignored in modals - 最短表示保障時間[秒]。イベントなどから閉じられたとしても、少なくともこの時間は表示してから閉じられるます。トースト専用なのでモーダルでは無視されます
	float displayMinTime;

	// NAME: Longest - 最長
	// DESC: Display time [seconds]. It will close automatically after this time has passed since the toast was displayed. It's only for toast, so it's ignored in modals - 表示時間[秒]。トーストが表示されてからこの時間経過すると自動的に閉じられます。トースト専用なのでモーダルでは無視されます
	float displayTime;

	// NAME: Padding - パディング
	uint8_t pad3[4];
};

#endif
