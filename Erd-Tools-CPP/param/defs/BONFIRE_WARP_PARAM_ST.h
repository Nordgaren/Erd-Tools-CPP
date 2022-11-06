/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_BONFIRE_WARP_PARAM_ST_H
#define _PARAMDEF_BONFIRE_WARP_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 6
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct BONFIRE_WARP_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Event flag ID - イベントフラグID
	// DESC: Release condition event flag ID - 解除条件イベントフラグID
	uint32_t eventflagId;

	// NAME: Bonfire entity ID - 篝火エンティティID
	// DESC: Bonfire entity ID - 篝火エンティティID
	uint32_t bonfireEntityId;

	// NAME: pad - パッド
	// DESC: Padding. The place where the deleted old work origin data was defined - パディング。削除した旧作由来データが定義されてた場所
	uint8_t pad4[2];

	// NAME: Sort ID - ソートID
	// DESC: Bonfire Warp Subcategory Sort ID. Specify the order (ascending order) in the same subcategory - 篝火ワープサブカテゴリソートID。同じサブカテゴリ内の並び順（昇順）を指定する
	uint16_t bonfireSubCategorySortId;

	// NAME: Warp Prohibition Icon ID - ワープ禁止アイコンID
	// DESC: Icon ID when warp is prohibited - ワープ禁止時のアイコンID
	uint16_t forbiddenIconId;

	// NAME: Display zoom step - 表示ズームステップ
	// DESC: Zoom step to display the bonfire (0 when zoomed out most, +1 for each zoom). Displayed when "<< Display zoom step >> ≤ Current zoom step". Default is 0 (always displayed) - 篝火を表示するズームステップ（一番ズームアウトした状態が0、ズームするごとに+1）。「《表示ズームステップ》≦ 現在のズームステップ 」のときに表示される。デフォルトは 0（常に表示）
	uint8_t dispMinZoomStep;

	// NAME: Selectable zoom steps - 選択可能ズームステップ
	// DESC: A zoom step that allows you to select and snap a bonfire (0 for the most zoomed out state, +1 for each zoom). Can be selected and snapped when "<< Selectable zoom step >> ≤ current enlargement stage". The default is 0 (always selectable / snappable) - 篝火を選択及びスナップ可能なズームステップ（一番ズームアウトした状態が0、ズームするごとに+1）。「《選択可能ズームステップ》≦ 現在の拡大段階 」のときに選択及びスナップ可能。デフォルトは 0（常に選択・スナップ可能）
	uint8_t selectMinZoomStep;

	// NAME: Subcategory ID - サブカテゴリID
	// DESC: Bonfire Warp Subcategory Parameter ID (-1: Invalid). Set which subcategory it belongs to. If it is invalid, it will not be displayed in the bonfire list. - 篝火ワープサブカテゴリパラメータID(-1:無効)。どのサブカテゴリに属するかを設定する。無効なら篝火一覧に表示されない
	int32_t bonfireSubCategoryId;

	// NAME: Cleared event flag ID - クリア済イベントフラグID
	// DESC: Cleared event flag ID (0: always treated as cleared) - クリア済みイベントフラグID(0:常にクリア済み扱い)
	uint32_t clearedEventFlagId;

	// NAME: Icon ID - アイコンID
	// DESC: Icon ID - アイコンID
	uint16_t iconId;

	// NAME: Display setting M00 - 表示設定M00
	// DESC: Whether to display with M00 - M00で表示するか
	uint8_t dispMask00: 1;

	// NAME: Display setting M01 - 表示設定M01
	// DESC: Whether to display with M01 - M01で表示するか
	uint8_t dispMask01: 1;

	// NAME: pad - パッド
	// DESC: pad1: 6 - pad1:6
	uint8_t pad1: 6;

	// NAME: pad - パッド
	// DESC: pad2 - pad2
	uint8_t pad2[1];

	// NAME: Area number - エリア番号
	// DESC: AA part of mAA_BB_CC_DD - mAA_BB_CC_DD の AA 部分
	uint8_t areaNo;

	// NAME: Grid X number - グリッドX番号
	// DESC: BB part of mAA_BB_CC_DD - mAA_BB_CC_DD の BB 部分
	uint8_t gridXNo;

	// NAME: Grid Z number - グリッドZ番号
	// DESC: CC part of mAA_BB_CC_DD - mAA_BB_CC_DD の CC 部分
	uint8_t gridZNo;

	// NAME: Padding - パディング
	// DESC: pad3 - pad3
	uint8_t pad3[1];

	// NAME: X coordinate - X座標
	// DESC: X coordinate - X座標
	float posX;

	// NAME: Y coordinate - Y座標
	// DESC: Y coordinate (not used) - Y座標（使っていない）
	float posY;

	// NAME: Z coordinate - Z座標
	// DESC: Z coordinate - Z座標
	float posZ;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If the value is invalid (-1), nothing is displayed. - 表示するテキストID。無効値(-1)なら、何も表示しない
	int32_t textId1;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (0) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(0)なら、On扱いされる
	uint32_t textEnableFlagId1;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (0) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(0)なら、Off扱いされる
	uint32_t textDisableFlagId1;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-2), nothing is displayed. - 表示するテキストID。無効値(-2)なら、何も表示しない
	int32_t textId2;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (1) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(1)なら、On扱いされる
	uint32_t textEnableFlagId2;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (1) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(1)なら、Off扱いされる
	uint32_t textDisableFlagId2;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-3), nothing is displayed. - 表示するテキストID。無効値(-3)なら、何も表示しない
	int32_t textId3;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (2) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(2)なら、On扱いされる
	uint32_t textEnableFlagId3;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (2) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(2)なら、Off扱いされる
	uint32_t textDisableFlagId3;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-4), nothing is displayed. - 表示するテキストID。無効値(-4)なら、何も表示しない
	int32_t textId4;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (3) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(3)なら、On扱いされる
	uint32_t textEnableFlagId4;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (3) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(3)なら、Off扱いされる
	uint32_t textDisableFlagId4;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-5), nothing is displayed. - 表示するテキストID。無効値(-5)なら、何も表示しない
	int32_t textId5;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (4) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(4)なら、On扱いされる
	uint32_t textEnableFlagId5;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (4) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(4)なら、Off扱いされる
	uint32_t textDisableFlagId5;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-6), nothing is displayed. - 表示するテキストID。無効値(-6)なら、何も表示しない
	int32_t textId6;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (5) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(5)なら、On扱いされる
	uint32_t textEnableFlagId6;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (5) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(5)なら、Off扱いされる
	uint32_t textDisableFlagId6;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-7), nothing is displayed. - 表示するテキストID。無効値(-7)なら、何も表示しない
	int32_t textId7;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (6) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(6)なら、On扱いされる
	uint32_t textEnableFlagId7;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (6) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(6)なら、Off扱いされる
	uint32_t textDisableFlagId7;

	// NAME: Text ID - テキストID
	// DESC: The text ID to display. If it is an invalid value (-8), nothing is displayed. - 表示するテキストID。無効値(-8)なら、何も表示しない
	int32_t textId8;

	// NAME: Occurrence event flag ID - 出現イベントフラグID
	// DESC: Display text Event flag ID. Display if the event flag is On. If the event flag ID (7) is invalid, it will be treated as On. - テキストの表示イベントフラグID。イベントフラグがOnなら表示する。無効なイベントフラグID(7)なら、On扱いされる
	uint32_t textEnableFlagId8;

	// NAME: Hidden event flag ID - 非表示イベントフラグID
	// DESC: Hidden event flag ID of the text. If the event flag is On, it will not be displayed. It takes precedence over the display event flag ID. If the event flag ID (7) is invalid, it will be treated as Off. - テキストの非表示イベントフラグID。イベントフラグがOnなら表示しない。表示イベントフラグIDよりも優先される。無効なイベントフラグID(7)なら、Off扱いされる
	uint32_t textDisableFlagId8;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType1;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType2;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType3;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType4;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType5;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType6;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType7;

	// NAME: Text type - テキスト種別
	// DESC: Text type (place name, NPC name, ...) - テキストの種別(地名,NPC名,...)
	uint8_t textType8;

	// NAME: Before ignition SFX Damipoly ID0 - 点火前SFXダミポリID0
	// DESC: Damipoli ID that issues SFX before bonfire ignition - 篝火点火前にSFXを出すダミポリID
	int32_t noIgnitionSfxDmypolyId_0;

	// NAME: Before ignition SFXID0 - 点火前SFXID0
	// DESC: SFX ID issued before bonfire ignition. It goes out when ignited. In case of -1, SFX is not issued. - 篝火点火前に出すSFXID。点火したら消える。-1の場合はSFXを出さない。
	int32_t noIgnitionSfxId_0;

	// NAME: Before ignition SFX Damipoly ID1 - 点火前SFXダミポリID1
	// DESC: Damipoli ID that issues SFX before bonfire ignition - 篝火点火前にSFXを出すダミポリID
	int32_t noIgnitionSfxDmypolyId_1;

	// NAME: Before ignition SFXID1 - 点火前SFXID1
	// DESC: SFX ID issued before bonfire ignition. It goes out when ignited. In case of -1, SFX is not issued. - 篝火点火前に出すSFXID。点火したら消える。-1の場合はSFXを出さない。
	int32_t noIgnitionSfxId_1;

	// NAME: unkA8 - unkA8
	int32_t unkA8;

	// NAME: unkAC - unkAC
	int32_t unkAC;

	// NAME: unkB0 - unkB0
	int32_t unkB0;

	// NAME: unkB4 - unkB4
	int32_t unkB4;

	// NAME: unkB8 - unkB8
	int32_t unkB8;

	// NAME: unkBC - unkBC
	int32_t unkBC;

	// NAME: unkC0 - unkC0
	int32_t unkC0;

	// NAME: unkC4 - unkC4
	int32_t unkC4;

	// NAME: unkC8 - unkC8
	int32_t unkC8;

	// NAME: unkCC - unkCC
	int32_t unkCC;

	// NAME: unkD0 - unkD0
	int32_t unkD0;

	// NAME: unkD4 - unkD4
	int32_t unkD4;

	// NAME: unkD8 - unkD8
	int32_t unkD8;

	// NAME: unkDC - unkDC
	int32_t unkDC;

	// NAME: unkE0 - unkE0
	int32_t unkE0;

	// NAME: unkE4 - unkE4
	int32_t unkE4;

	// NAME: unkE8 - unkE8
	int32_t unkE8;
};

#endif
