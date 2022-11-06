/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_SWORD_ARTS_PARAM_ST_H
#define _PARAMDEF_SWORD_ARTS_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct SWORD_ARTS_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Swashbuckler ID - 剣戟ID
	// DESC: To pass to the behavior script to determine which swashbuckler - ビヘイビアスクリプトに渡してどの剣戟か判定するためのもの
	uint8_t swordArtsType;

	// NAME: Arts speed - アーツ速度
	// DESC: Which cancellation timing do you see? 0: Normal (left hand attack) / 1: Early / 2: Slow - どのキャンセルタイミングを見るか。0：通常（左手攻撃）／1：早い／2：遅い
	uint8_t artsSpeedType;

	// NAME: Related status - 関連ステータス
	// DESC: Which system of arts points to refer to - どの系統のアーツポイントを参照するか
	int8_t refStatus;

	// NAME: Whether to display the arts of the right hand when the left hand (holding one hand) - 左手（片手持ち）時に右手のアーツを表示するか
	// DESC: When set to the arts of the left-handed weapon, the arts of the right-handed weapon are displayed in FE. Assumed to be used for "weapon maneuvers" etc. - 左手武器のアーツに設定されている場合、右手武器のアーツをFEに表示します。「武器戦技」などに使われる想定
	uint8_t isRefRightArts: 1;

	// NAME: Whether to gray out with the left hand (holding one hand) - 左手（片手持ち）時にグレーアウトするか
	// DESC: Whether to gray out when displaying the arts name of the left hand (one-handed) - 左手（片手持ち）のアーツ名を表示するときにグレーアウトするか
	uint8_t isGrayoutLeftHand: 1;

	// NAME: Whether to gray out with the right hand (holding one hand) - 右手（片手持ち）時にグレーアウトするか
	// DESC: Whether to gray out when displaying the arts name of the right hand (one-handed) - 右手（片手持ち）のアーツ名を表示するときにグレーアウトするか
	uint8_t isGrayoutRightHand: 1;

	// NAME: Will it be grayed out when holding both hands? - 両手持ち時にグレーアウトするか
	// DESC: Whether to gray out when displaying the arts name of both hands - 両手持ちのアーツ名を表示するときにグレーアウトするか
	uint8_t isGrayoutBothHand: 1;

	// NAME: Reserved area - 予約領域
	uint8_t reserve2: 4;

	// NAME: Consumption point L1 - 消費ポイント L1
	// DESC: Points to spend when putting out arts by L1 - L1によりアーツを出したときに消費するポイント
	int8_t usePoint_L1;

	// NAME: Consumption point L2 - 消費ポイント L2
	// DESC: Points to spend when putting out arts by L2 - L2によりアーツを出したときに消費するポイント
	int8_t usePoint_L2;

	// NAME: Consumption point R1 - 消費ポイント R1
	// DESC: Points to spend when putting out arts by R1 - R1によりアーツを出したときに消費するポイント
	int8_t usePoint_R1;

	// NAME: Consumption point R2 - 消費ポイント R2
	// DESC: Points to spend when putting out arts by R2 - R2によりアーツを出したときに消費するポイント
	int8_t usePoint_R2;

	// NAME: Text ID - テキストID
	// DESC: Text ID for arts description - アーツ説明用のテキストID
	int32_t textId;

	// NAME: MP L1 consumed - 消費MP L1
	// DESC: MP consumed when issuing arts by L1 - L1によりアーツを出したときに消費するMP
	int16_t useMagicPoint_L1;

	// NAME: MP L2 consumed - 消費MP L2
	// DESC: MP consumed when issuing arts by L2 - L2によりアーツを出したときに消費するMP
	int16_t useMagicPoint_L2;

	// NAME: MP R1 consumed - 消費MP R1
	// DESC: MP consumed when issuing arts by R1 - R1によりアーツを出したときに消費するMP
	int16_t useMagicPoint_R1;

	// NAME: MP R2 consumed - 消費MP R2
	// DESC: MP consumed when issuing arts by R2 - R2によりアーツを出したときに消費するMP
	int16_t useMagicPoint_R2;

	// NAME: Shield type icon (overwrite) - 盾種別アイコン（上書き）
	// DESC: If you do not overwrite it, the icon will be displayed based on the swashbuckler ID of the weapon para. - 上書きしない場合は、武器パラの剣戟IDを元にアイコン表示されます。
	int8_t shieldIconType;

	// NAME: pad - pad
	uint8_t pad[1];

	// NAME: Icon ID - アイコンID
	// DESC: ID of the icon displayed in FE etc. - FEなどで表示するアイコンのID
	uint16_t iconId;

	// NAME: AI usage judgment ID - AI使用判断ID
	// DESC: AI usage judgment ID - AI使用判断ID
	int32_t aiUsageId;
};

#endif
