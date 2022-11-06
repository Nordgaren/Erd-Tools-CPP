/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_ITEMLOT_PARAM_ST_H
#define _PARAMDEF_ITEMLOT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct ITEMLOT_PARAM_ST {

	// NAME: 1: Item ID - １：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId01;

	// NAME: 2: Item ID - ２：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId02;

	// NAME: 3: Item ID - ３：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId03;

	// NAME: 4: Item ID - ４：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId04;

	// NAME: 5: Item ID - ５：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId05;

	// NAME: 6: Item ID - ６：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId06;

	// NAME: 7: Item ID - ７：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId07;

	// NAME: 8: Item ID - ８：アイテムID
	// DESC: Item ID that can be obtained - 取得できるアイテムのID
	int32_t lotItemId08;

	// NAME: 1: Item category - １：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory01;

	// NAME: 2: Item category - ２：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory02;

	// NAME: 3: Item category - ３：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory03;

	// NAME: 4: Item category - ４：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory04;

	// NAME: 5: Item category - ５：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory05;

	// NAME: 6: Item category - ６：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory06;

	// NAME: 7: Item category - ７：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory07;

	// NAME: 8: Item category - ８：アイテムカテゴリ
	// DESC: Category of items that can be obtained - 取得できるアイテムのカテゴリ
	int32_t lotItemCategory08;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint01;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint02;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint03;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint04;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint05;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint06;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint07;

	// NAME: Basic appearance point - 基本出現ポイント
	// DESC: Appearance point at normal time - 通常時の出現ポイント
	uint16_t lotItemBasePoint08;

	// NAME: Appearance points after accumulation - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint01;

	// NAME: Appearance points after accumulation - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint02;

	// NAME: Cumulative post-appearance points - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint03;

	// NAME: Appearance points after accumulation - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint04;

	// NAME: Appearance points after accumulation - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint05;

	// NAME: Appearance points after accumulation - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint06;

	// NAME: Cumulative post-appearance points - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint07;

	// NAME: Cumulative post-appearance points - 累積後出現ポイント
	// DESC: Appearance point at maximum cumulative - 最大累積時の出現ポイント
	uint16_t cumulateLotPoint08;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId01;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId02;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId03;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId04;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId05;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId06;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId07;

	// NAME: Another crunchy flag ID - 別ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: common use) - 取得済みフラグとザクザク枠兼用(0:共通使用)
	uint32_t getItemFlagId08;

	// NAME: Crunchy flag ID - ザクザクフラグID
	// DESC: Combined use of acquired flag and crunchy frame (0: flag invalid) - 取得済みフラグとザクザク枠兼用(0:フラグ無効)
	uint32_t getItemFlagId;

	// NAME: Lottery cumulative save flag ID - 抽選累積保存フラグID
	// DESC: For saving the number of lottery (* 8 flag serial number used) - 抽選回数保存用(※8フラグ連番使用)
	uint32_t cumulateNumFlagId;

	// NAME: Maximum number of lottery cumulative - 抽選累積最大数
	// DESC: Maximum number of lottery cumulative (0: no cumulative) - 抽選累積最大数(0:累積なし)
	uint8_t cumulateNumMax;

	// NAME: Rarity overwrite - レア度上書き
	// DESC: Specify how valuable items are in the treasure chest. When -1, use the rarity of the equipment para without overwriting - 宝箱などに、どれくらい貴重なアイテムが入っているかを指定する。-1の時は上書きせず装備品パラのレア度を使用する
	int8_t lotItem_Rarity;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum01;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum02;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum03;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum04;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum05;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum06;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum07;

	// NAME: Quantity - 個数
	// DESC: Number of items that can be acquired - 取得できるアイテムの個数
	uint8_t lotItemNum08;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck01: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck02: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck03: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck04: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck05: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck06: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck07: 1;

	// NAME: Luck parameter valid - 運パラメータ有効
	// DESC: Whether the probability of lottery reflects the player's luck - 抽選の確率をプレイヤーの運を反映させるか
	uint16_t enableLuck08: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset01: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset02: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset03: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset04: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset05: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset06: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset07: 1;

	// NAME: Cumulative reset - 累積リセット
	// DESC: Whether to reset cumulatively - 累積リセットするか
	uint16_t cumulateReset08: 1;

	// NAME: Offset after X week - X週目以降オフセット
	// DESC: Offset during lap play - 周回プレイ時のオフセット
	int8_t GameClearOffset;

	// NAME: Do you draw lots even with cooperating spirits? - 協力霊でも抽選するか
	// DESC: Do you draw lots even when you are a cooperating spirit? - 自身が協力霊の時でも抽選するか
	uint8_t canExecByFriendlyGhost: 1;

	// NAME: Do you draw even hostile spirits? - 敵対霊でも抽選するか
	// DESC: Do you draw lots even when you are a hostile spirit? - 自身が敵対霊の時でも抽選するか
	uint8_t canExecByHostileGhost: 1;

	// NAME: PAD1 - PAD1
	// DESC: PAD1 - PAD1
	uint8_t PAD1: 6;

	// NAME: PAD2 - PAD2
	// DESC: PAD2 - PAD2
	uint16_t PAD2;
};

#endif
