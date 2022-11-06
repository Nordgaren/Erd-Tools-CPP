/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_PARAM_ACCESSORY_ST_H
#define _PARAMDEF_EQUIP_PARAM_ACCESSORY_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_PARAM_ACCESSORY_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from decorations - 装飾品から呼び出すID
	int32_t refId;

	// NAME: SFX variation ID - SFXバリエーションID
	// DESC: Specify SFX variation (used to identify SFX in combination with TimeActEditor ID) - ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
	int32_t sfxVariationId;

	// NAME: Weight [kg] - 重量[kg]
	// DESC: Weight [kg] - 重量[kg]
	float weight;

	// NAME: Action ID - 行動ID
	// DESC: Action ID (= Skill) - 行動ID(=Skill)
	int32_t behaviorId;

	// NAME: Basic price - 基本価格
	// DESC: Basic price - 基本価格
	int32_t basicPrice;

	// NAME: Sale price - 売却価格
	// DESC: Selling price - 販売価格
	int32_t sellValue;

	// NAME: sortID - sortID
	int32_t sortId;

	// NAME: QWCID - QWCID
	int32_t qwcId;

	// NAME: Equipment model number - 装備モデル番号
	// DESC: Equipment model number - 装備モデルの番号
	uint16_t equipModelId;

	// NAME: Icon ID - アイコンID
	// DESC: Menu icon ID - メニューアイコンID
	uint16_t iconId;

	// NAME: Shop level - ショップレベル
	// DESC: Level that can be sold at the store - お店で販売できるレベル
	int16_t shopLv;

	// NAME: Trophy - トロフィー
	int16_t trophySGradeId;

	// NAME: Trophy SEQ number - トロフィーSEQ番号
	// DESC: Trophy SEQ number - トロフィーのSEQ番号
	int16_t trophySeqId;

	// NAME: Equipment model type - 装備モデル種別
	// DESC: Equipment model type - 装備モデルの種別
	uint8_t equipModelCategory;

	// NAME: Equipment model gender - 装備モデル性別
	// DESC: Gender of equipment model - 装備モデルの性別
	uint8_t equipModelGender;

	// NAME: Decoration category - 装飾カテゴリ
	// DESC: Armor category - 防具のカテゴリ
	uint8_t accessoryCategory;

	// NAME: ID category - IDカテゴリ
	// DESC: ↓ ID category [Attack, Projectile, Special] - ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
	uint8_t refCategory;

	// NAME: Special effects category - 特殊効果カテゴリ
	// DESC: Since there are effects (enchantment weapons, etc.) whose parameters fluctuate depending on skills, magic, items, etc., set each action so that the determined effect can correspond to the effect such as "power up only weapon attack". Set "None" for items that do not need to be set, such as varistor.
 - スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する

	uint8_t spEffectCategory;

	// NAME: Sort item type ID - ソートアイテム種別ID
	// DESC: Sort item type ID. In the sort "Item type order", the same ID is displayed together as the same group. - ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
	uint8_t sortGroupId;

	// NAME: Item lottery ID_for map at the time of vagrant - ベイグラント時アイテム抽選ID_マップ用
	// DESC: -1: No vagrant 0: No lottery 1 ~: With lottery - -1：ベイグラントなし 0：抽選なし 1～：抽選あり
	int32_t vagrantItemLotId;

	// NAME: Vagrant Bonus Enemy Drop Item Lottery ID_Map - ベイグラントボーナス敵ドロップアイテム抽選ID_マップ用
	// DESC: -1: No drop 0: No lottery 1 ~: With lottery - -1：ドロップなし 0：抽選なし 1～：抽選あり
	int32_t vagrantBonusEneDropItemLotId;

	// NAME: Vagrant item Enemy drop item Lottery ID_for map - ベイグラントアイテム敵ドロップアイテム抽選ID_マップ用
	// DESC: -1: No drop 0: No lottery 1 ~: With lottery - -1：ドロップなし 0：抽選なし 1～：抽選あり
	int32_t vagrantItemEneDropItemLotId;

	// NAME: Can i deposit - 預けれるか
	// DESC: Can you deposit it in the warehouse? - 倉庫へ預けれるか
	uint8_t isDeposit: 1;

	// NAME: Will it break if removed? - 外すと壊れるか
	// DESC: Will it break when equipped and removed? - 装備して外す時に壊れるか
	uint8_t isEquipOutBrake: 1;

	// NAME: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	// DESC: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	uint8_t disableMultiDropShare: 1;

	// NAME: Can you throw it away - 捨てれるか
	// DESC: Can you throw away the item? TRUE = thrown away - アイテムを捨てれるか？TRUE=捨てれる
	uint8_t isDiscard: 1;

	// NAME: Can you put it on the spot - その場に置けるか
	// DESC: Can I put the item on the spot? TRUE = can be placed - アイテムをその場に置けるか？TRUE=置ける
	uint8_t isDrop: 1;

	// NAME: Acquisition log display condition - 取得ログ表示条件
	// DESC: Whether to display in the item acquisition log when acquiring the item (not entered: ○) - アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
	uint8_t showLogCondType: 1;

	// NAME: Acquisition dialog display condition - 取得ダイアログ表示条件
	// DESC: Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only) - アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
	uint8_t showDialogCondType: 2;

	// NAME: Rarity - レア度
	// DESC: Rarity used in item acquisition logs - アイテム取得ログで使うレア度
	uint8_t rarity;

	// NAME: pad - pad
	// DESC: (Old log icon ID) - （旧ログ用アイコンID）
	uint8_t pad2[2];

	// NAME: Selling price - 販売価格
	// DESC: Selling price - 販売価格
	int32_t saleValue;

	// NAME: Wearing group ID - 装着グループID
	// DESC: Items of the same group cannot be equipped at the same time - 同じグループの物は同時装備不可能
	int16_t accessoryGroup;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad3[1];

	// NAME: Comptrophy SEQ number - コンプトロフィーSEQ番号
	// DESC: SEQ number of complete trophy - コンプリート系トロフィのSEQ番号
	int8_t compTrophySedId;

	// NAME: Resident special effect ID1 - 常駐特殊効果ID1
	// DESC: Resident special effect ID1 - 常駐特殊効果ID1
	int32_t residentSpEffectId1;

	// NAME: Resident special effect ID2 - 常駐特殊効果ID2
	// DESC: Resident special effect ID2 - 常駐特殊効果ID2
	int32_t residentSpEffectId2;

	// NAME: Resident special effect ID3 - 常駐特殊効果ID3
	// DESC: Resident special effect ID3 - 常駐特殊効果ID3
	int32_t residentSpEffectId3;

	// NAME: Resident special effect ID4 - 常駐特殊効果ID4
	// DESC: Resident special effect ID4 - 常駐特殊効果ID4
	int32_t residentSpEffectId4;

	// NAME: pad - pad
	// DESC: pad - pad
	uint8_t pad1[4];
};

#endif
