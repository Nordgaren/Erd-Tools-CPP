/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_PARAM_GEM_ST_H
#define _PARAMDEF_EQUIP_PARAM_GEM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_PARAM_GEM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Icon ID - アイコンID
	// DESC: Menu icon ID - メニュー用アイコンID
	uint16_t iconId;

	// NAME: Magic stone rank - 魔石ランク
	// DESC: Magic stone rank - 魔石ランク
	int8_t rank;

	// NAME: Sort item type ID - ソートアイテム種別ID
	// DESC: Sort item type ID. In the sort "Item type order", the same ID is displayed together as the same group. - ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
	uint8_t sortGroupId;

	// NAME: Resident special effect ID00 - 常駐特殊効果ID00
	// DESC: Special effect ID00 - 特殊効果ID00
	int32_t spEffectId0;

	// NAME: Resident special effect ID01 - 常駐特殊効果ID01
	// DESC: Special effect ID01 - 特殊効果ID01
	int32_t spEffectId1;

	// NAME: Resident special effect ID02 - 常駐特殊効果ID02
	// DESC: Special effect ID02 - 特殊効果ID02
	int32_t spEffectId2;

	// NAME: Item acquisition tutorial Judgment flag ID - アイテム入手チュートリアル判定フラグID
	// DESC: Event flag ID for the tutorial when you first get the item. Flag ON when item is obtained. - 初めてアイテム入手した時のチュートリアル用のイベントフラグID。アイテム入手時にフラグON。
	uint32_t itemGetTutorialFlagId;

	// NAME: Change destination arts parameter ID - 変化先アーツパラメータID
	// DESC: ID of the destination arts parameter - 変化先アーツパラメータのID
	int32_t swordArtsParamId;

	// NAME: Installation price - 装着価格
	// DESC: Installation price - 装着価格
	int32_t mountValue;

	// NAME: Sale price - 売却価格
	// DESC: Sale price - 売却価格
	int32_t sellValue;

	// NAME: Selling price - 販売価格
	// DESC: Selling price - 販売価格
	int32_t saleValue;

	// NAME: Sort ID - ソートID
	// DESC: Sort ID (-1: Do not collect) - ソートID(-1:集めない)
	int32_t sortId;

	// NAME: Comptrophy SEQ number - コンプトロフィーSEQ番号
	// DESC: SEQ number of complete trophy - コンプリート系トロフィのSEQ番号
	int16_t compTrophySedId;

	// NAME: Trophy SEQ number - トロフィーSEQ番号
	// DESC: Trophy SEQ number - トロフィーのSEQ番号
	int16_t trophySeqId;

	// NAME: 0 - 0
	// DESC: Configurable weapon attribute ID 0 - 設定可能武器属性ID0
	uint8_t configurableWepAttr00: 1;

	// NAME: 1 - 1
	// DESC: Configurable Weapon Attribute ID 1 - 設定可能武器属性ID1
	uint8_t configurableWepAttr01: 1;

	// NAME: 2 - 2
	// DESC: Configurable Weapon Attribute ID 2 - 設定可能武器属性ID2
	uint8_t configurableWepAttr02: 1;

	// NAME: 3 - 3
	// DESC: Configurable Weapon Attribute ID 3 - 設定可能武器属性ID3
	uint8_t configurableWepAttr03: 1;

	// NAME: Four - 4
	// DESC: Configurable Weapon Attribute ID 4 - 設定可能武器属性ID4
	uint8_t configurableWepAttr04: 1;

	// NAME: Five - 5
	// DESC: Configurable Weapon Attribute ID 5 - 設定可能武器属性ID5
	uint8_t configurableWepAttr05: 1;

	// NAME: 6 - 6
	// DESC: Configurable Weapon Attribute ID 6 - 設定可能武器属性ID6
	uint8_t configurableWepAttr06: 1;

	// NAME: 7 - 7
	// DESC: Configurable Weapon Attribute ID 7 - 設定可能武器属性ID7
	uint8_t configurableWepAttr07: 1;

	// NAME: 8 - 8
	// DESC: Configurable Weapon Attribute ID 8 - 設定可能武器属性ID8
	uint8_t configurableWepAttr08: 1;

	// NAME: 9 - 9
	// DESC: Configurable Weapon Attribute ID 9 - 設定可能武器属性ID9
	uint8_t configurableWepAttr09: 1;

	// NAME: Ten - 10
	// DESC: Configurable Weapon Attribute ID 10 - 設定可能武器属性ID10
	uint8_t configurableWepAttr10: 1;

	// NAME: 11 11 - 11
	// DESC: Configurable Weapon Attribute ID 11 - 設定可能武器属性ID11
	uint8_t configurableWepAttr11: 1;

	// NAME: 12 - 12
	// DESC: Configurable Weapon Attribute ID 12 - 設定可能武器属性ID12
	uint8_t configurableWepAttr12: 1;

	// NAME: 13 - 13
	// DESC: Configurable Weapon Attribute ID 13 - 設定可能武器属性ID13
	uint8_t configurableWepAttr13: 1;

	// NAME: 14 - 14
	// DESC: Configurable Weapon Attribute ID 14 - 設定可能武器属性ID14
	uint8_t configurableWepAttr14: 1;

	// NAME: 15 - 15
	// DESC: Configurable Weapon Attribute ID 15 - 設定可能武器属性ID15
	uint8_t configurableWepAttr15: 1;

	// NAME: Rarity - レア度
	// DESC: Rarity used in item acquisition logs - アイテム取得ログで使うレア度
	uint8_t rarity;

	// NAME: 16 16 - 16
	// DESC: Configurable Weapon Attribute ID 16 - 設定可能武器属性ID16
	uint8_t configurableWepAttr16: 1;

	// NAME: 17 17 - 17
	// DESC: Configurable Weapon Attribute ID 17 - 設定可能武器属性ID17
	uint8_t configurableWepAttr17: 1;

	// NAME: 18 18 - 18
	// DESC: Configurable Weapon Attribute ID 18 - 設定可能武器属性ID18
	uint8_t configurableWepAttr18: 1;

	// NAME: 19 19 - 19
	// DESC: Configurable Weapon Attribute ID 19 - 設定可能武器属性ID19
	uint8_t configurableWepAttr19: 1;

	// NAME: 20 - 20
	// DESC: Configurable Weapon Attribute ID 20 - 設定可能武器属性ID20
	uint8_t configurableWepAttr20: 1;

	// NAME: twenty one - 21
	// DESC: Configurable Weapon Attribute ID 21 - 設定可能武器属性ID21
	uint8_t configurableWepAttr21: 1;

	// NAME: twenty two - 22
	// DESC: Configurable Weapon Attribute ID 22 - 設定可能武器属性ID22
	uint8_t configurableWepAttr22: 1;

	// NAME: twenty three - 23
	// DESC: Configurable Weapon Attribute ID 23 - 設定可能武器属性ID23
	uint8_t configurableWepAttr23: 1;

	// NAME: Can you throw it away - 捨てれるか
	// DESC: Can you throw away the item? TRUE = thrown away - アイテムを捨てれるか？TRUE=捨てれる
	uint8_t isDiscard: 1;

	// NAME: Can you put it on the spot - その場に置けるか
	// DESC: Can I put the item on the spot? TRUE = can be placed - アイテムをその場に置けるか？TRUE=置ける
	uint8_t isDrop: 1;

	// NAME: Can i deposit - 預けれるか
	// DESC: Can you leave it in the warehouse? - 倉庫に預けれるか
	uint8_t isDeposit: 1;

	// NAME: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	// DESC: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	uint8_t disableMultiDropShare: 1;

	// NAME: Acquisition dialog display condition - 取得ダイアログ表示条件
	// DESC: Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only) - アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
	uint8_t showDialogCondType: 2;

	// NAME: Acquisition log display condition - 取得ログ表示条件
	// DESC: Whether to display in the item acquisition log when acquiring the item (not entered: ○) - アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
	uint8_t showLogCondType: 1;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad: 1;

	// NAME: Default weapon attribute ID - デフォルト武器属性ID
	// DESC: Default weapon attribute ID. Can be installed even with unopened weapon attributes - デフォルト武器属性ID。開放されてない武器属性でも装着可能になる
	uint8_t defaultWepAttr;

	// NAME: pad2 - pad2
	// DESC: pad2 - pad2
	uint8_t pad2[2];

	// NAME: dagger - 短剣
	// DESC: Can it be attached to "Weapon type: Dagger"? No input becomes x - 「武器種別：短剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_Dagger: 1;

	// NAME: Straight sword - 直剣
	// DESC: Can it be attached to "Weapon type: Straight sword"? No input becomes x - 「武器種別：直剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_SwordNormal: 1;

	// NAME: Large sword - 大剣
	// DESC: Can it be attached to "Weapon Type: Large Sword"? No input becomes x - 「武器種別：大剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_SwordLarge: 1;

	// NAME: Oversized sword - 特大剣
	// DESC: Can it be attached to "Weapon Type: Oversized Sword"? No input becomes x - 「武器種別：特大剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_SwordGigantic: 1;

	// NAME: Music sword - 曲剣 
	// DESC: Can it be attached to "Weapon Type: Curly Sword"? No input becomes x - 「武器種別：曲剣 」に装着可能か。未入力は×になる
	uint8_t canMountWep_SaberNormal: 1;

	// NAME: Omagari sword - 大曲剣
	// DESC: Can it be attached to "Weapon Type: Omagari Sword"? No input becomes x - 「武器種別：大曲剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_SaberLarge: 1;

	// NAME: sword - 刀
	// DESC: Can it be attached to "Weapon type: Sword"? No input becomes x - 「武器種別：刀」に装着可能か。未入力は×になる
	uint8_t canMountWep_katana: 1;

	// NAME: Double-edged sword - 両刃剣
	// DESC: Can it be attached to "Weapon type: Double-edged sword"? No input becomes x - 「武器種別：両刃剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_SwordDoubleEdge: 1;

	// NAME: Sword - 刺剣
	// DESC: Can it be attached to "Weapon type: Sword"? No input becomes x - 「武器種別：刺剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_SwordPierce: 1;

	// NAME: Large sword - 大刺剣
	// DESC: Can it be attached to "Weapon Type: Large Sword"? No input becomes x - 「武器種別：大刺剣」に装着可能か。未入力は×になる
	uint8_t canMountWep_RapierHeavy: 1;

	// NAME: axe - 斧
	// DESC: Can it be attached to "Weapon Type: Ax"? No input becomes x - 「武器種別：斧」に装着可能か。未入力は×になる
	uint8_t canMountWep_AxeNormal: 1;

	// NAME: Large ax - 大斧
	// DESC: Can it be attached to "Weapon Type: Large Ax"? No input becomes x - 「武器種別：大斧」に装着可能か。未入力は×になる
	uint8_t canMountWep_AxeLarge: 1;

	// NAME: Hammer - 槌
	// DESC: Can it be attached to "Weapon type: Hammer"? No input becomes x - 「武器種別：槌」に装着可能か。未入力は×になる
	uint8_t canMountWep_HammerNormal: 1;

	// NAME: Gavel - 大槌
	// DESC: Can it be attached to "Weapon Type: Gavel"? No input becomes x - 「武器種別：大槌」に装着可能か。未入力は×になる
	uint8_t canMountWep_HammerLarge: 1;

	// NAME: Frail - フレイル
	// DESC: Can it be attached to "Weapon Type: Frail"? No input becomes x - 「武器種別：フレイル」に装着可能か。未入力は×になる
	uint8_t canMountWep_Flail: 1;

	// NAME: spear - 槍
	// DESC: Can it be attached to "Weapon Type: Spear"? No input becomes x - 「武器種別：槍」に装着可能か。未入力は×になる
	uint8_t canMountWep_SpearNormal: 1;

	// NAME: Long spear - 長槍
	// DESC: Can it be attached to "Weapon Type: Long Spear"? No input becomes x - 「武器種別：長槍」に装着可能か。未入力は×になる
	uint8_t canMountWep_SpearLarge: 1;

	// NAME: Large spear - 大槍
	// DESC: Can it be attached to "Weapon Type: Large Spear"? No input becomes x - 「武器種別：大槍」に装着可能か。未入力は×になる
	uint8_t canMountWep_SpearHeavy: 1;

	// NAME: Halberd - 斧槍
	// DESC: Can it be attached to "Weapon Type: Halberd"? No input becomes x - 「武器種別：斧槍」に装着可能か。未入力は×になる
	uint8_t canMountWep_SpearAxe: 1;

	// NAME: Sickle - 鎌
	// DESC: Can it be attached to "Weapon type: Sickle"? No input becomes x - 「武器種別：鎌」に装着可能か。未入力は×になる
	uint8_t canMountWep_Sickle: 1;

	// NAME: fist - 拳
	// DESC: Can it be attached to "Weapon type: Fist"? No input becomes x - 「武器種別：拳」に装着可能か。未入力は×になる
	uint8_t canMountWep_Knuckle: 1;

	// NAME: nail - 爪
	// DESC: Can it be attached to "Weapon type: Claw"? No input becomes x - 「武器種別：爪」に装着可能か。未入力は×になる
	uint8_t canMountWep_Claw: 1;

	// NAME: Whip - ムチ
	// DESC: Can it be attached to "Weapon type: Whip"? No input becomes x - 「武器種別：ムチ」に装着可能か。未入力は×になる
	uint8_t canMountWep_Whip: 1;

	// NAME: Oversized ax mallet - 特大斧槌
	// DESC: Can it be attached to "Weapon type: Oversized ax mallet"? No input becomes x - 「武器種別：特大斧槌」に装着可能か。未入力は×になる
	uint8_t canMountWep_AxhammerLarge: 1;

	// NAME: Small bow - 小弓
	// DESC: Can it be attached to "Weapon type: Small bow"? No input becomes x - 「武器種別：小弓」に装着可能か。未入力は×になる
	uint8_t canMountWep_BowSmall: 1;

	// NAME: bow - 弓
	// DESC: Can it be attached to "Weapon Type: Bow"? No input becomes x - 「武器種別：弓」に装着可能か。未入力は×になる
	uint8_t canMountWep_BowNormal: 1;

	// NAME: Large bow - 大弓
	// DESC: Can it be attached to "Weapon Type: Large Bow"? No input becomes x - 「武器種別：大弓」に装着可能か。未入力は×になる
	uint8_t canMountWep_BowLarge: 1;

	// NAME: Crossbow - クロスボウ
	// DESC: Can it be attached to "Weapon Type: Crossbow"? No input becomes x - 「武器種別：クロスボウ」に装着可能か。未入力は×になる
	uint8_t canMountWep_ClossBow: 1;

	// NAME: Varistor - バリスタ
	// DESC: Can it be attached to "Weapon Type: Varistor"? No input becomes x - 「武器種別：バリスタ」に装着可能か。未入力は×になる
	uint8_t canMountWep_Ballista: 1;

	// NAME: Wand - 杖
	// DESC: Can it be attached to "Weapon type: Wand"? No input becomes x - 「武器種別：杖」に装着可能か。未入力は×になる
	uint8_t canMountWep_Staff: 1;

	// NAME: tattoo - 入れ墨
	// DESC: Can it be attached to "Weapon type: Tattoo"? No input becomes x - 「武器種別：入れ墨」に装着可能か。未入力は×になる
	uint8_t canMountWep_Sorcery: 1;

	// NAME: Holy mark - 聖印
	// DESC: Can it be attached to "Weapon Type: Holy Mark"? No input becomes x - 「武器種別：聖印」に装着可能か。未入力は×になる
	uint8_t canMountWep_Talisman: 1;

	// NAME: Small shield - 小盾
	// DESC: Can it be attached to "Weapon Type: Small Shield"? No input becomes x - 「武器種別：小盾」に装着可能か。未入力は×になる
	uint8_t canMountWep_ShieldSmall: 1;

	// NAME: Middle shield - 中盾
	// DESC: Can it be attached to "Weapon Type: Middle Shield"? No input becomes x - 「武器種別：中盾」に装着可能か。未入力は×になる
	uint8_t canMountWep_ShieldNormal: 1;

	// NAME: Pavise - 大盾
	// DESC: Can it be attached to "Weapon Type: Large Shield"? No input becomes x - 「武器種別：大盾」に装着可能か。未入力は×になる
	uint8_t canMountWep_ShieldLarge: 1;

	// NAME: torch - 松明
	// DESC: Can it be attached to "Weapon type: Torch"? No input becomes x - 「武器種別：松明」に装着可能か。未入力は×になる
	uint8_t canMountWep_Torch: 1;

	// NAME: Reserved area (weapon type that can be installed) - 予約領域（装着可能な武器種別か）
	// DESC: Reserved area for each type of weapon that can be installed (64 bits in total) - 装着可能な武器種別かの予約領域（全部で64bit分確保）
	uint8_t reserved_canMountWep: 4;

	// NAME: Reserved area (weapon type that can be installed) - 予約領域（装着可能な武器種別か）
	// DESC: Reserved area for each type of weapon that can be installed (64 bits in total) - 装着可能な武器種別かの予約領域（全部で64bit分確保）
	uint8_t reserved2_canMountWep[3];

	// NAME: Effect text ID 00 - 効果テキストID00
	// DESC: Effect text ID 00 (Gem_Effect). Magic stone effect text to display in status - 効果テキストID00(Gem_Effect)。ステータスに表示する魔石の効果テキスト
	int32_t spEffectMsgId0;

	// NAME: Effect text ID 01 - 効果テキストID01
	// DESC: Effect text ID 01 (Gem_Effect). Magic stone effect text to display in status - 効果テキストID01(Gem_Effect)。ステータスに表示する魔石の効果テキスト
	int32_t spEffectMsgId1;

	// NAME: Special effect ID00 on attack hit - 攻撃ヒット時特殊効果ID00
	// DESC: Special effect parameter ID for attack hit - 攻撃ヒット時用の特殊効果パラメータID
	int32_t spEffectId_forAtk0;

	// NAME: Special effect ID01 on attack hit - 攻撃ヒット時特殊効果ID01
	// DESC: Special effect parameter ID for attack hit - 攻撃ヒット時用の特殊効果パラメータID
	int32_t spEffectId_forAtk1;

	// NAME: Special effect ID02 on attack hit - 攻撃ヒット時特殊効果ID02
	// DESC: Special effect parameter ID for attack hit - 攻撃ヒット時用の特殊効果パラメータID
	int32_t spEffectId_forAtk2;

	// NAME: Corresponding weapon type overwrite text ID - 対応武器種別上書きテキストID
	// DESC: Corresponding Weapon Type Overwrite Text ID (-1: Do not overwrite) [Menu Text] - 対応武器種別上書きテキストID(-1:上書きしない)[MenuText]
	int32_t mountWepTextId;

	// NAME: pad6 - pad6
	uint8_t pad6[8];
};

#endif
