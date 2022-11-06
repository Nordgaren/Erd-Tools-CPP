/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_NPC_AI_ACTION_PARAM_ST_H
#define _PARAMDEF_NPC_AI_ACTION_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct NPC_AI_ACTION_PARAM_ST {

	// NAME: Move direction input - 移動方向入力
	// DESC: Moving direction to enter - 入力する移動方向
	uint8_t moveDir;

	// NAME: Key input 1 - キー入力1
	// DESC: Key to enter - 入力するキー
	uint8_t key1;

	// NAME: Key input 2 - キー入力2
	// DESC: Key to enter - 入力するキー
	uint8_t key2;

	// NAME: Key input 3 - キー入力3
	// DESC: Key to enter - 入力するキー
	uint8_t key3;

	// NAME: Press and hold the movement direction input? - 移動方向入力は長押し？
	// DESC: Whether to handle the input movement direction as long press - 入力する移動方向を長押し扱いするか
	uint8_t bMoveDirHold;

	// NAME: Press and hold key input 1? - キー入力1は長押し？
	// DESC: Whether to treat the key to be entered as a long press - 入力するキーを長押扱いするか
	uint8_t bKeyHold1;

	// NAME: Press and hold key input 2? - キー入力2は長押し？
	// DESC: Whether to treat the key to be entered as a long press - 入力するキーを長押扱いするか
	uint8_t bKeyHold2;

	// NAME: Press and hold key input 3? - キー入力3は長押し？
	// DESC: Whether to treat the key to be entered as a long press - 入力するキーを長押扱いするか
	uint8_t bKeyHold3;

	// NAME: Gesture ID (valid only when any key input is GESTURE) - ジェスチャーID（どれかのキー入力がGESTUREの時のみ有効）
	// DESC: Gesture ID - ジェスチャーID
	int32_t gestureId;

	// NAME: Treat as successful when life is over - 寿命が尽きた時成功扱いにする
	// DESC: If this is ON, the AI goal will not be successful until the end of its life - これがONならAIのゴールが寿命まで成功にならない
	uint8_t bLifeEndSuccess;

	// NAME: pad - パッド
	// DESC: pad - pad
	uint8_t pad1[3];
};

#endif
