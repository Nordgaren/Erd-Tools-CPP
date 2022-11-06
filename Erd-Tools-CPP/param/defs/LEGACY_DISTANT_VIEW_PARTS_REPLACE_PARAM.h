/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM_H
#define _PARAMDEF_LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM_H
#pragma once
#include <inttypes.h>

// Data Version: 4
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM {

	// NAME: Map ID - マップID
	// DESC: Specify the target map ID. Legacy only. (m12_34_56_78 → 12345678). Initially it was only legacy, but it also supports open celestial sphere maps - 対象のマップIDを指定します。レガシーのみ。(m12_34_56_78→12345678) 。当初レガシーのみでしたがオープンの天球マップも対応しました
	int32_t TargetMapId;

	// NAME: Natural disaster event ID - 天変地異イベントID
	// DESC: If you enter the target natural disaster event ID from "300, 310, 311 and 312", it will be [natural disaster replacement data]. If it is 0 or blank, it will be [Regional ID switching data] (SEQ16039). - 「300、310、311、312」の中から、対象天変地異イベントIDを入力した場合は【天変地異差し替えデータ】となります。0or空白の場合は【地方IDの切り替えデータ】となります(SEQ16039)
	uint32_t TargetEventId;

	// NAME: Replacement source asset ID - 差し替え元アセットID
	// DESC: Replacement source AssetId: AEG123_456_9999 → 123456 - 差し替え元AssetId：AEG123_456_9999→123456
	int32_t SrcAssetId;

	// NAME: Replacement source asset part ID - 差し替え元アセットパーツID
	// DESC: Replacement source PartsNo: AEG123_456_9999 → 9999 - 差し替え元PartsNo：AEG123_456_9999→9999
	int32_t SrcAssetPartsNo;

	// NAME: Replacement destination asset ID - 差し替え先アセットID
	// DESC: Replacement destination AssetId: AEG123_456_9999 → 123456 - 差し替え先AssetId：AEG123_456_9999→123456
	int32_t DstAssetId;

	// NAME: Replacement destination asset part ID - 差し替え先アセットパーツID
	// DESC: Replacement destination PartsNo: AEG123_456_9999 → 9999 - 差し替え先PartsNo：AEG123_456_9999→9999
	int32_t DstAssetPartsNo;

	// NAME: Replacement source asset ID range specification Min - 差し替え元アセットID範囲指定Min
	// DESC: Replacement source asset ID range specification Min - 差し替え元アセットID範囲指定Min
	int32_t SrcAssetIdRangeMin;

	// NAME: Replacement source asset ID range specification Max - 差し替え元アセットID範囲指定Max
	// DESC: Replacement source asset ID range specification Max - 差し替え元アセットID範囲指定Max
	int32_t SrcAssetIdRangeMax;

	// NAME: Replacement destination asset ID range specification Min - 差し替え先アセットID範囲指定Min
	// DESC: Replacement destination asset ID range specification Min - 差し替え先アセットID範囲指定Min
	int32_t DstAssetIdRangeMin;

	// NAME: Replacement destination asset ID range specification Max - 差し替え先アセットID範囲指定Max
	// DESC: Replacement destination asset ID range specification Max - 差し替え先アセットID範囲指定Max
	int32_t DstAssetIdRangeMax;

	// NAME: Local ID limit 0 - 地方ID制限0
	// DESC: MapGD Local ID restriction 0: Valid only when "Natural disaster event ID" is 0. The part is valid only with the MapGD local ID you set (SEQ16039). - MapGD地方IDの制限0：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
	int8_t LimitedMapRegionId0;

	// NAME: Local ID limit 1 - 地方ID制限1
	// DESC: MapGD Local ID Restriction 1: Valid only when "Natural Disaster Event ID" is 0. The part is valid only with the MapGD local ID you set (SEQ16039). - MapGD地方IDの制限1：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
	int8_t LimitedMapRegionId1;

	// NAME: Local ID limit 2 - 地方ID制限2
	// DESC: MapGD Local ID restriction 2: Valid only when "Natural disaster event ID" is 0. The part is valid only with the MapGD local ID you set (SEQ16039). - MapGD地方IDの制限2：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
	int8_t LimitedMapRegionId2;

	// NAME: Local ID limit 3 - 地方ID制限3
	// DESC: MapGD Local ID restriction 3: Valid only when "Natural disaster event ID" is 0. The part is valid only with the MapGD local ID you set (SEQ16039). - MapGD地方IDの制限3：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
	int8_t LimitedMapRegionId3;

	// NAME: reserve - 予約
	// DESC: reserve - 予約
	uint8_t reserve[4];

	// NAME: Local restricted asset ID - 地方制限アセットID
	// DESC: MapGD Valid assets specified by local ID: AssetId: AEG123_456_9999 → 123456 - MapGD地方IDで有効なアセット指定：AssetId：AEG123_456_9999→123456
	int32_t LimitedMapRegionAssetId;

	// NAME: Local restriction asset part ID - 地方制限アセットパーツID
	// DESC: MapGD Valid assets specified by local ID: PartsNo: AEG123_456_9999 → 9999 - MapGD地方IDで有効なアセット指定：PartsNo：AEG123_456_9999→9999
	int32_t LimitedMapRegioAssetPartsNo;

	// NAME: Local restriction asset ID range specification Min - 地方制限アセットID範囲指定Min
	// DESC: MapGD Valid asset specification with local ID: Asset ID range specification Min - MapGD地方IDで有効なアセット指定：アセットID範囲指定Min
	int32_t LimitedMapRegioAssetIdRangeMin;

	// NAME: Local limit asset ID range specification Max - 地方制限アセットID範囲指定Max
	// DESC: MapGD Valid asset specification for local ID: Asset ID range specification Max - MapGD地方IDで有効なアセット指定：アセットID範囲指定Max
	int32_t LimitedMapRegioAssetIdRangeMax;
};

#endif
