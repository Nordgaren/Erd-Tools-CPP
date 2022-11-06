/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CHARMAKEMENUTOP_PARAM_ST_H
#define _PARAMDEF_CHARMAKEMENUTOP_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CHARMAKEMENUTOP_PARAM_ST {

	// NAME: Command type - コマンドタイプ
	// DESC: Command type - コマンドの種別
	int32_t commandType;

	// NAME: Item text ID - 項目テキストID
	// DESC: ID of the text to be displayed - 表示するテキストのID
	int32_t captionId;

	// NAME: Face Param ID - 顔パラムID
	// DESC: Face Param ID - 顔パラムID
	int32_t faceParamId;

	// NAME: Table ID (male) - テーブルID（男性）
	// DESC: First ID (male) in the list of items to select. The command type is [Slider: Text ID of minimum label (n) and maximum label (n + 1), Color: ID of color table, Grid or text: First ID of character make list item, Other: Ignore] - 選択するアイテム一覧の先頭ID（男）。コマンドタイプが[スライダー：最小値ラベル(n)と最大値ラベル(n+1)のテキストID、カラー：カラーテーブルのID、グリッド or テキスト：キャラメイクリストアイテムの先頭ID、それ以外：無視]
	int32_t tableId;

	// NAME: Display conditions - 表示条件
	// DESC: Conditions for displaying this command - このコマンドを表示する条件
	int32_t viewCondition;

	// NAME: Preview mode - プレビューモード
	// DESC: Display mode of the character model displayed in preview - プレビュー表示しているキャラクターモデルの表示モード
	int8_t previewMode;

	// NAME: reserve - 予約
	uint8_t reserved2[3];

	// NAME: Table ID (female) - テーブルID（女性）
	// DESC: For women with table ID. If -1, refer to for men - テーブルIDの女用。-1なら男用を参照する
	int32_t tableId2;

	// NAME: Referenced face Param ID - 参照先の顔パラムID
	// DESC: Face param ID of the matching destination for "matching to XX" - 「○○に合わせる」用の合わせ先の顔パラムID
	int32_t refFaceParamId;

	// NAME: Referenced text ID - 参照先テキストID
	// DESC: Display text ID for "fit to XX" - 「○○に合わせる」用の表示テキストID
	int32_t refTextId;

	// NAME: 1 line help text ID (overwrite) - 1行ヘルプテキストID（上書き）
	// DESC: 1-line help text ID (-1: Get 1-line help with item text ID). Basically, item text ID = 1 line help text ID, but if you want to overwrite part of it, specify it with this parameter. - 1行ヘルプのテキストID(-1: 項目テキストIDで1行ヘルプを取得する)。基本的に項目テキストID＝1行ヘルプテキストIDになっているが、一部上書きしたいときにこのパラメータで指定する
	int32_t helpTextId;

	// NAME: Event flag ID - イベントフラグID
	// DESC: Event flag to unlock this item (0: invalid value). Invalid value will always be unlocked - この項目をアンロックするイベントフラグ(0:無効値)。無効値なら常にアンロックされる
	uint32_t unlockEventFlagId;

	// NAME: reserve - 予約
	uint8_t reserved[4];
};

#endif
