/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_WORLD_MAP_POINT_PARAM_ST_H
#define _PARAMDEF_WORLD_MAP_POINT_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 6
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct WORLD_MAP_POINT_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Release event flag ID - 開放イベントフラグID
	// DESC: Event flag ID of open condition - 開放条件のイベントフラグID
	uint32_t eventFlagId;

	// NAME: Far-viewing platform discovery event flag ID - 遠見台発見イベントフラグID
	// DESC: Event flag ID to be set when found on the distant view - 遠見台で発見した際に立てるイベントフラグID
	uint32_t distViewEventFlagId;

	// NAME: Icon ID - アイコンID
	// DESC: Icon ID - アイコンID
	uint16_t iconId;

	// NAME: BGM location information (inside the entrance area) - BGM用場所情報（入場領域内）
	// DESC: Bgm location type - Bgm場所タイプ
	int16_t bgmPlaceType;

	// NAME: Is it a range icon? - 範囲アイコンか
	// DESC: Is it an icon that represents a range? Same size as the map - 範囲を表すアイコンか。地図に対して等倍になる
	uint8_t isAreaIcon: 1;

	// NAME: Tomidai mark_Coordinates overwrite - 遠見台目印_座標上書きするか
	// DESC: Whether to overwrite the coordinates when using it as a distant view marker - 遠見台目印として使うときに座標を上書きするか
	uint8_t isOverrideDistViewMarkPos: 1;

	// NAME: Whether to display when there is no text - テキストが無いときに表示するか
	// DESC: Do you want to display it even when there is no text? Basically, points are not displayed without text. Display without text when this flag is enabled - テキストが無いときにも表示するか。基本的にはテキストがなければポイントは表示しない。このフラグが有効なときにはテキストがなくても表示する
	uint8_t isEnableNoText: 1;

	// NAME: Pad 3 - パッド3
	uint8_t pad3: 5;

	// NAME: Overwrite distant view mark_area number - 遠見台目印上書き_エリア番号
	// DESC: AA part of mAA_BB_CC_DD - mAA_BB_CC_DD の AA 部分
	uint8_t areaNo_forDistViewMark;

	// NAME: Overwrite distant view mark_Grid X number - 遠見台目印上書き_グリッドX番号
	// DESC: BB part of mAA_BB_CC_DD - mAA_BB_CC_DD の BB 部分
	uint8_t gridXNo_forDistViewMark;

	// NAME: Overwrite distant view mark_Grid Z number - 遠見台目印上書き_グリッドZ番号
	// DESC: CC part of mAA_BB_CC_DD - mAA_BB_CC_DD の CC 部分
	uint8_t gridZNo_forDistViewMark;

	// NAME: Cleared event flag ID - クリア済イベントフラグID
	// DESC: Cleared event flag ID (0: always treated as cleared) - クリア済みイベントフラグID(0:常にクリア済み扱い)
	uint32_t clearedEventFlagId;

	// NAME: Display setting M00 - 表示設定M00
	// DESC: Whether to display with M00 - M00で表示するか
	uint8_t dispMask00: 1;

	// NAME: Display setting M01 - 表示設定M01
	// DESC: Whether to display with M01 - M01で表示するか
	uint8_t dispMask01: 1;

	// NAME: pad - パッド
	// DESC: pad2_0 - pad2_0
	uint8_t pad2_0: 6;

	// NAME: pad - パッド
	// DESC: pad2 - pad2
	uint8_t pad2[1];

	// NAME: Icon ID when distant view is found - 遠見台発見時アイコンID
	// DESC: Icon ID when distant view is found - 遠見台発見時アイコンID
	uint16_t distViewIconId;

	// NAME: Icon angle [deg] - アイコン角度[deg]
	// DESC: Display icon rotation angle [deg] - 表示アイコンの回転角度[deg]
	float angle;

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
	// DESC: Padding - パディング
	uint8_t pad[1];

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

	// NAME: Distance stand ID0 - 遠見台ID0
	// DESC: Distance stand ID - 遠見台ID
	int32_t distViewId;

	// NAME: Distance viewing marker overwrite _X coordinates - 遠見台目印上書き_X座標
	// DESC: X coordinate - X座標
	float posX_forDistViewMark;

	// NAME: Distance viewing mark overwrite Y coordinate - 遠見台目印上書きY座標
	// DESC: Y coordinate - Y座標
	float posY_forDistViewMark;

	// NAME: Distant mark overwrite Z coordinate - 遠見台目印上書きZ座標
	// DESC: Z coordinate - Z座標
	float posZ_forDistViewMark;

	// NAME: Distance stand ID1 - 遠見台ID1
	// DESC: Distance stand ID - 遠見台ID
	int32_t distViewId1;

	// NAME: Distance stand ID2 - 遠見台ID2
	// DESC: Distance stand ID - 遠見台ID
	int32_t distViewId2;

	// NAME: Distance stand ID3 - 遠見台ID3
	// DESC: Distance stand ID - 遠見台ID
	int32_t distViewId3;

	// NAME: Display zoom step - 表示ズームステップ
	// DESC: Zoom step to display map points (0 when zoomed out most, +1 for each zoom). Displayed when "<< Display zoom step >> ≤ Current zoom step". Default is 0 (always displayed) - 地図ポイントを表示するズームステップ（一番ズームアウトした状態が0、ズームするごとに+1）。「《表示ズームステップ》≦ 現在のズームステップ 」のときに表示される。デフォルトは 0（常に表示）
	uint8_t dispMinZoomStep;

	// NAME: Selectable zoom steps - 選択可能ズームステップ
	// DESC: Zoom step where map points can be selected (0 when zoomed out most, +1 for each zoom). Selectable when "<< Selectable zoom step >> ≤ Current enlargement stage". Default is 0 (always selectable) - 地図ポイントを選択可能なズームステップ（一番ズームアウトした状態が0、ズームするごとに+1）。「《選択可能ズームステップ》≦ 現在の拡大段階 」のときに選択可能。デフォルトは 0（常に選択可能）
	uint8_t selectMinZoomStep;

	// NAME: Admission display format - 入場表示形式
	// DESC: Admission display format. Map points to be displayed at the time of admission Types of admission FE - 入場表示形式。入場時に表示する地図ポイント入場FEの種類
	uint8_t entryFEType;

	// NAME: pad - パッド
	// DESC: pad3 - pad3
	uint8_t pad4[9];

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

	// NAME: unkEC - unkEC
	int32_t unkEC;

	// NAME: unkF0 - unkF0
	int32_t unkF0;

	// NAME: unkF4 - unkF4
	int32_t unkF4;

	// NAME: unkF8 - unkF8
	int32_t unkF8;

	// NAME: unkFC - unkFC
	int32_t unkFC;
};

#endif
