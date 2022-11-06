/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_PLAY_REGION_PARAM_ST_H
#define _PARAMDEF_PLAY_REGION_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 9
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct PLAY_REGION_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Simple match area ID - 簡易マッチエリアID
	// DESC: Simple match area ID - 簡易マッチエリアID
	int32_t matchAreaId;

	// NAME: Multiplayer start limit event flag ID - マルチプレイ開始制限イベントフラグID
	// DESC: Multiplayer start limit event flag ID - マルチプレイ開始制限イベントフラグID
	uint32_t multiPlayStartLimitEventFlagId;

	// NAME: Other distances that cannot be invaded by spirits - その他霊侵入不可能距離
	// DESC: Other distances that cannot be invaded by spirits. The intrusion position is searched for the intrusion points within the "other ghost invasion impossible distance" to the "other ghost invasion range upper limit" from the host position. - その他霊侵入不可能距離。ホスト位置から「その他霊侵入不可能距離」～「その他霊侵入範囲上限」以内の侵入ポイントを対象に侵入位置検索を行う。
	float otherDisableDistance;

	// NAME: PC position save limit event flag ID - PC位置セーブ制限イベントフラグID
	// DESC: PC position save restriction event flag ID (flag ON: PC position save valid flag OFF: PC position save invalid 0: PC position save always valid) - PC位置セーブ制限イベントフラグID　（フラグON：PC位置セーブ有効　フラグOFF：PC位置セーブ無効　0：PC位置セーブ常に有効）
	uint32_t pcPositionSaveLimitEventFlagId;

	// NAME: Boss area ID - ボスエリアID
	// DESC: Areas with the same ID are treated as the same boss area. - このIDが同じものを設定された領域同士は、同一のボスエリアとして扱う。
	uint32_t bossAreaId;

	// NAME: NPC White Spirit Summon Ritual Summon NPC Entity ID Free Frame ID - NPC白霊召喚儀式の召還NPCのエンティティIDの自由枠ID
	// DESC: NPC White Spirit Summon Ritual Summon The beginning of the free frame ID used as the NPC's entity ID - NPC白霊召喚儀式の召還NPCのエンティティIDとして使われる自由枠IDの先頭
	int16_t cultNpcWhiteGhostEntityId_byFree;

	// NAME: Is it a map guardian area? - マップ守護領域か？
	// DESC: Whether to increase or decrease the frame of the map protection area - マップ守護領域の枠の増減にするか
	uint8_t bMapGuradianRegion;

	// NAME: Is it the old man sign area of yellow robe? - 黄衣の翁サイン領域か？
	// DESC: Is it the old man sign area of yellow robe? - 黄衣の翁サイン領域か？
	uint8_t bYellowCostumeRegion: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "multiplayer start restriction event flag ID" - 「マルチプレイ開始制限イベントフラグID」の制限を行うフラグ状態
	uint8_t multiPlayStartLimitEventFlagId_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "intrusion restriction event flag ID1" - 「侵入制限イベントフラグID1」の制限を行うフラグ状態
	uint8_t breakInLimitEventFlagId_1_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "white sign restriction event flag ID1" - 「白サイン制限イベントフラグID1」の制限を行うフラグ状態
	uint8_t whiteSignLimitEventFlagId_1_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "red sign limit event flag ID1" - 「赤サイン制限イベントフラグID1」の制限を行うフラグ状態
	uint8_t redSignLimitEventFlagId_1_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "intrusion restriction event flag ID2" - 「侵入制限イベントフラグID2」の制限を行うフラグ状態
	uint8_t breakInLimitEventFlagId_2_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "intrusion restriction event flag ID3" - 「侵入制限イベントフラグID3」の制限を行うフラグ状態
	uint8_t breakInLimitEventFlagId_3_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "white sign restriction event flag ID2" - 「白サイン制限イベントフラグID2」の制限を行うフラグ状態
	uint8_t whiteSignLimitEventFlagId_2_targetFlagState: 1;

	// NAME: Warp item permit bonfire ID1 - ワープアイテム許可篝火ID1
	// DESC: Bonfire entity ID1 used to determine whether to allow the use of warp items - ワープアイテムの使用を許可する判定に使う篝火のエンティティID1
	uint32_t warpItemUsePermitBonfireId_1;

	// NAME: Warp item permit bonfire ID2 - ワープアイテム許可篝火ID2
	// DESC: Bonfire entity ID 2 used to determine permission to use warp items - ワープアイテムの使用を許可する判定に使う篝火のエンティティID2
	uint32_t warpItemUsePermitBonfireId_2;

	// NAME: Warp item permit bonfire ID3 - ワープアイテム許可篝火ID3
	// DESC: Bonfire entity ID 3 used to determine permission to use warp items - ワープアイテムの使用を許可する判定に使う篝火のエンティティID3
	uint32_t warpItemUsePermitBonfireId_3;

	// NAME: Warp item permit bonfire ID4 - ワープアイテム許可篝火ID4
	// DESC: Bonfire entity ID 4 used to determine permission to use warp items - ワープアイテムの使用を許可する判定に使う篝火のエンティティID4
	uint32_t warpItemUsePermitBonfireId_4;

	// NAME: Warp item permit bonfire ID5 - ワープアイテム許可篝火ID5
	// DESC: Bonfire entity ID 5 used to determine permission to use warp items - ワープアイテムの使用を許可する判定に使う篝火のエンティティID5
	uint32_t warpItemUsePermitBonfireId_5;

	// NAME: Warp item prohibited event flag ID1 - ワープアイテム禁止イベントフラグID1
	// DESC: Event flag ID 1 to determine the prohibition of warp items. Warp item permission Higher priority than judgment by bonfire ID - ワープアイテムの使用禁止を判定するイベントフラグID1。ワープアイテム許可篝火IDによる判定より優先度が上
	uint32_t warpItemProhibitionEventFlagId_1;

	// NAME: Warp item prohibited event flag ID2 - ワープアイテム禁止イベントフラグID2
	// DESC: Event flag ID 2 to determine the prohibition of warp items. Warp item permission Higher priority than judgment by bonfire ID - ワープアイテムの使用禁止を判定するイベントフラグID2。ワープアイテム許可篝火IDによる判定より優先度が上
	uint32_t warpItemProhibitionEventFlagId_2;

	// NAME: Warp item prohibited event flag ID3 - ワープアイテム禁止イベントフラグID3
	// DESC: Event flag ID 3 to determine the prohibition of warp items. Warp item permission Higher priority than judgment by bonfire ID - ワープアイテムの使用禁止を判定するイベントフラグID3。ワープアイテム許可篝火IDによる判定より優先度が上
	uint32_t warpItemProhibitionEventFlagId_3;

	// NAME: Warp item prohibited event flag ID4 - ワープアイテム禁止イベントフラグID4
	// DESC: Event flag ID 4 to determine the prohibition of warp items. Warp item permission Higher priority than judgment by bonfire ID - ワープアイテムの使用禁止を判定するイベントフラグID4。ワープアイテム許可篝火IDによる判定より優先度が上
	uint32_t warpItemProhibitionEventFlagId_4;

	// NAME: Warp Item Ban Event Flag ID 5 - ワープアイテム禁止イベントフラグID5
	// DESC: Event flag ID 5 to determine the prohibition of warp items. Warp item permission Higher priority than judgment by bonfire ID - ワープアイテムの使用禁止を判定するイベントフラグID5。ワープアイテム許可篝火IDによる判定より優先度が上
	uint32_t warpItemProhibitionEventFlagId_5;

	// NAME: Effective bloodstain / death illusion - 血痕・死亡幻影有効
	// DESC: Effective bloodstain / death illusion - 血痕・死亡幻影有効
	uint8_t enableBloodstain: 1;

	// NAME: Blood character valid - 血文字有効
	// DESC: Blood character valid - 血文字有効
	uint8_t enableBloodMessage: 1;

	// NAME: Phantom effective - 幻影有効
	// DESC: Phantom effective - 幻影有効
	uint8_t enableGhost: 1;

	// NAME: Map display_display setting M00 - 地図表示用_表示設定M00
	// DESC: Whether to display on map M00 - 地図M00で表示するか
	uint8_t dispMask00: 1;

	// NAME: For map display_Display setting M01 - 地図表示用_表示設定M01
	// DESC: Whether to display on map M01 - 地図M01で表示するか
	uint8_t dispMask01: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "white sign restriction event flag ID3" - 「白サイン制限イベントフラグID3」の制限を行うフラグ状態
	uint8_t whiteSignLimitEventFlagId_3_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "red sign limit event flag ID2" - 「赤サイン制限イベントフラグID2」の制限を行うフラグ状態
	uint8_t redSignLimitEventFlagId_2_targetFlagState: 1;

	// NAME: Flag state to limit - 制限するフラグ状態
	// DESC: Flag state that limits "red sign limit event flag ID3" - 「赤サイン制限イベントフラグID3」の制限を行うフラグ状態
	uint8_t redSignLimitEventFlagId_3_targetFlagState: 1;

	// NAME: Is it automatic generation of intrusion points? - 侵入ポイント自動生成か
	// DESC: Is it an intrusion point automatic generation? If it is set to ○, the intrusion position is searched by the automatically generated logic for the intrusion point. - 侵入ポイント自動生成か。○にした場合は自動生成された侵入ポイント用のロジックで侵入位置を検索。
	uint8_t isAutoIntrudePoint: 1;

	// NAME: pad1 - pad1
	uint8_t pad1: 7;

	// NAME: pad2 - pad2
	uint8_t pad2[2];

	// NAME: Yellow robe's old man host restriction event flag - 黄衣の翁ホスト制限イベントフラグ
	// DESC: Yellow Coat Host Restriction Event Flag: When this flag is turned on, multiplayer as a host of Yellow Coat is prohibited. It is assumed that the block clear flag will be inserted. 0: No limit - 黄衣の翁ホスト制限イベントフラグ：このフラグがONになると黄衣の翁のホストとしてのマルチプレイが禁止される。ブロッククリアフラグを入れる想定。0：制限しない
	uint32_t multiPlayHASHostLimitEventFlagId;

	// NAME: Other ghost invasion range upper limit - その他霊侵入範囲上限
	// DESC: Other ghost invasion range upper limit. The intrusion position is searched for the intrusion points within the "other ghost invasion impossible distance" to the "other ghost invasion range upper limit" from the host position. - その他霊侵入範囲上限。ホスト位置から「その他霊侵入不可能距離」～「その他霊侵入範囲上限」以内の侵入ポイントを対象に侵入位置検索を行う。
	float otherMaxDistance;

	// NAME: Sign pool release event flag ID - サイン溜まり解放イベントフラグID
	// DESC: Sign accumulation release event flag ID - サイン溜まり解放イベントフラグID
	uint32_t signPuddleOpenEventFlagId;

	// NAME: Map display_area number (mXX_00_00_00) - 地図表示用_エリア番号（mXX_00_00_00）
	// DESC: Area number (mXX_00_00_00). Data for specifying the display position in the map menu - エリア番号（mXX_00_00_00）。地図メニューでの表示位置を指定するためのデータ
	uint8_t areaNo;

	// NAME: Map display_grid X number (m00_XX_00_00) - 地図表示用_グリッドX番号（m00_XX_00_00）
	// DESC: Grid X number (m00_XX_00_00). Data for specifying the display position in the map menu - グリッドX番号（m00_XX_00_00）。地図メニューでの表示位置を指定するためのデータ
	uint8_t gridXNo;

	// NAME: Map display_grid Z number (m00_00_XX_00) - 地図表示用_グリッドZ番号（m00_00_XX_00）
	// DESC: Grid Z number (m00_00_XX_00). Data for specifying the display position in the map menu - グリッドZ番号（m00_00_XX_00）。地図メニューでの表示位置を指定するためのデータ
	uint8_t gridZNo;

	// NAME: pad4 - pad4
	uint8_t pad4[1];

	// NAME: _X coordinates for map display - 地図表示用_X座標
	// DESC: X coordinates (relative coordinates from the specified map). Data for specifying the display position in the map menu - X座標（指定したマップからの相対座標）。地図メニューでの表示位置を指定するためのデータ
	float posX;

	// NAME: _Y coordinates for map display - 地図表示用_Y座標
	// DESC: Y coordinates (relative coordinates from the specified map). Data for specifying the display position in the map menu. Not actually used, but keep XYZ aligned - Y座標（指定したマップからの相対座標）。地図メニューでの表示位置を指定するためのデータ。実際には使われていないがXYZ一揃えにしておく
	float posY;

	// NAME: _Z coordinates for map display - 地図表示用_Z座標
	// DESC: Z coordinates (relative coordinates from the specified map). Data for specifying the display position in the map menu - Z座標（指定したマップからの相対座標）。地図メニューでの表示位置を指定するためのデータ
	float posZ;

	// NAME: Intrusion restriction event flag ID1 - 侵入制限イベントフラグID1
	// DESC: Intrusion restriction event flag ID1 - 侵入制限イベントフラグID1
	uint32_t breakInLimitEventFlagId_1;

	// NAME: White sign limit event flag ID1 - 白サイン制限イベントフラグID1
	// DESC: White sign limit event flag ID1 - 白サイン制限イベントフラグID1
	uint32_t whiteSignLimitEventFlagId_1;

	// NAME: Sign accumulation registration restriction Event flag ID - サイン溜まり登録制限イベントフラグID
	// DESC: Sign accumulation registration restriction Event flag ID (Flag ON: Sign accumulation registration is permitted Flag OFF: Sign accumulation registration is prohibited 0: Sign accumulation registration is always permitted) - サイン溜まり登録制限イベントフラグID　（フラグON：サイン溜まり登録を許可　フラグOFF：サイン溜まり登録を禁止　0：サイン溜まり登録を常に許可）
	uint32_t matchAreaSignCreateLimitEventFlagId;

	// NAME: Multipurpose ID 01 - マルチ目的ID01
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_1;

	// NAME: Multipurpose ID 02 - マルチ目的ID02
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_2;

	// NAME: Multipurpose ID 03 - マルチ目的ID03
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_3;

	// NAME: Multipurpose ID 04 - マルチ目的ID04
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_4;

	// NAME: Multipurpose ID 05 - マルチ目的ID05
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_5;

	// NAME: Multipurpose ID 06 - マルチ目的ID06
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_6;

	// NAME: Multipurpose ID 07 - マルチ目的ID07
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_7;

	// NAME: Multipurpose ID08 - マルチ目的ID08
	// DESC: Multi-purpose ID to be displayed in the list when setting the purpose - 目的設定時にリストに表示するマルチ目的ID
	uint32_t signAimId_8;

	// NAME: Red sign limit event flag ID1 - 赤サイン制限イベントフラグID1
	// DESC: Red sign limit event flag ID1 - 赤サイン制限イベントフラグID1
	uint32_t redSignLimitEventFlagId_1;

	// NAME: Intrusion restriction event flag ID2 - 侵入制限イベントフラグID2
	// DESC: Intrusion restriction event flag ID2 - 侵入制限イベントフラグID2
	uint32_t breakInLimitEventFlagId_2;

	// NAME: Intrusion restriction event flag ID3 - 侵入制限イベントフラグID3
	// DESC: Intrusion restriction event flag ID3 - 侵入制限イベントフラグID3
	uint32_t breakInLimitEventFlagId_3;

	// NAME: White sign limit event flag ID2 - 白サイン制限イベントフラグID2
	// DESC: White sign limit event flag ID2 - 白サイン制限イベントフラグID2
	uint32_t whiteSignLimitEventFlagId_2;

	// NAME: White sign limit event flag ID3 - 白サイン制限イベントフラグID3
	// DESC: White sign limit event flag ID3 - 白サイン制限イベントフラグID3
	uint32_t whiteSignLimitEventFlagId_3;

	// NAME: Red sign limit event flag ID2 - 赤サイン制限イベントフラグID2
	// DESC: Red sign limit event flag ID2 - 赤サイン制限イベントフラグID2
	uint32_t redSignLimitEventFlagId_2;

	// NAME: Red sign limit event flag ID3 - 赤サイン制限イベントフラグID3
	// DESC: Red sign limit event flag ID3 - 赤サイン制限イベントフラグID3
	uint32_t redSignLimitEventFlagId_3;

	// NAME: Area boss ID01 - 領域内ボスID01
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_1;

	// NAME: Area boss ID02 - 領域内ボスID02
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_2;

	// NAME: Area boss ID03 - 領域内ボスID03
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_3;

	// NAME: Area boss ID04 - 領域内ボスID04
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_4;

	// NAME: Area Boss ID 05 - 領域内ボスID05
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_5;

	// NAME: Area Boss ID 06 - 領域内ボスID06
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_6;

	// NAME: Area Boss ID 07 - 領域内ボスID07
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_7;

	// NAME: Area boss ID08 - 領域内ボスID08
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_8;

	// NAME: Area Boss ID 09 - 領域内ボスID09
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_9;

	// NAME: Area boss ID 10 - 領域内ボスID10
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_10;

	// NAME: In-area boss ID 11 - 領域内ボスID11
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_11;

	// NAME: In-area boss ID 12 - 領域内ボスID12
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_12;

	// NAME: Area boss ID 13 - 領域内ボスID13
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_13;

	// NAME: Area boss ID14 - 領域内ボスID14
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_14;

	// NAME: Area boss ID15 - 領域内ボスID15
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_15;

	// NAME: Area boss ID 16 - 領域内ボスID16
	// DESC: Area boss ID. It is used to select the target boss when "Is the intrusion point automatically generated?" Is ○. - 領域内ボスID。「侵入ポイント自動生成か」が○のときに目的とするボスを選ぶのに使われる。
	uint32_t bossId_16;

	// NAME: Map display_event flag ID - 地図表示用_イベントフラグID
	// DESC: Map display_event flag ID (0: always displayed). Only when this event flag is set, it will be displayed in a lively manner in the map menu. - 地図表示用_イベントフラグID(0:常に表示)。このイベントフラグが立っているときだけ、マップメニューに賑わい表示される
	uint32_t mapMenuUnlockEventId;

	// NAME: pad5 - pad5
	uint8_t pad5[32];
};

#endif
