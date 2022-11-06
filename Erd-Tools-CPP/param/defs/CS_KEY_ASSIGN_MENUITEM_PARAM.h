/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_KEY_ASSIGN_MENUITEM_PARAM_H
#define _PARAMDEF_CS_KEY_ASSIGN_MENUITEM_PARAM_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_KEY_ASSIGN_MENUITEM_PARAM {

	// NAME: text - テキスト
	// DESC: Key specified ⇒ Item name, 1-line help ID. No key specified ⇒ Category name ID. No text specified ⇒ Not displayed in pad / key settings (operation list display only) - キー指定あり⇒項目名、1行ヘルプのID。キー指定なし⇒カテゴリ名のID。テキスト指定なし⇒パッド/キー設定に表示しない(操作一覧表示のみ)
	int32_t textID;

	// NAME: Key - キー
	// DESC: User input key to be assigned. If not specified, it will be treated as a category display item. - 割り当て対象のユーザー入力キー。指定が無い時はカテゴリ表示用項目として扱う
	int32_t key;

	// NAME: lift - 解除
	// DESC: Is it possible to unassign (default: possible) - 割り当ての解除が可能か(デフォルト:可能)
	uint8_t enableUnassign;

	// NAME: pad - パッド
	// DESC: Is it possible to change the pad operation assignment (default: possible)? - パッド操作の割り当て変更が可能か(デフォルト:可能)
	uint8_t enablePadConfig;

	// NAME: mouse - マウス
	// DESC: Is it possible to change the mouse operation assignment (default: possible)? - マウス操作の割り当て変更が可能か(デフォルト:可能)
	uint8_t enableMouseConfig;

	// NAME: group - グループ
	// DESC: Group for determining duplicate assignments. Cannot be duplicated in the same group - 割り当ての重複判定用グループ。同一グループでは重複不可
	uint8_t group;

	// NAME: text - テキスト
	// DESC: Item name to be displayed in the operation list. 0 :: Do not display in the list - 操作一覧で表示する項目名。0:：一覧に表示しない
	int32_t mappingTextID;

	// NAME: pad - パッド
	// DESC: Whether to display with key config (pad) (default: display) - キーコンフィグ（パッド）で表示するか(デフォルト:表示)
	uint8_t viewPad;

	// NAME: Mouse / keyboard - マウス・キーボード
	// DESC: Whether to display with key config (mouse / keyboard) (default: display) - キーコンフィグ（マウス・キーボード）で表示するか(デフォルト:表示）
	uint8_t viewKeyboardMouse;

	// NAME: padding - padding
	// DESC: Is it possible to change the pad operation assignment (default: possible)? - パッド操作の割り当て変更が可能か(デフォルト:可能)
	uint8_t padding[6];
};

#endif
