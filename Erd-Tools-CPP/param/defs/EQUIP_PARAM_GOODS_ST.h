/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_EQUIP_PARAM_GOODS_ST_H
#define _PARAMDEF_EQUIP_PARAM_GOODS_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 3
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct EQUIP_PARAM_GOODS_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Call ID 0 (default) - 呼び出しID0(デフォルト)
	// DESC: ID0 called from the item (default) - アイテムから呼び出されるID0(デフォルト)
	int32_t refId_default;

	// NAME: SFX variation ID - SFXバリエーションID
	// DESC: Specify SFX variation (used to identify SFX in combination with TimeActEditor ID) - ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
	int32_t sfxVariationId;

	// NAME: Weight [kg] - 重量[kg]
	// DESC: Weight [kg] - 重量[kg]
	float weight;

	// NAME: Basic price - 基本価格
	// DESC: Basic price - 基本価格
	int32_t basicPrice;

	// NAME: Sale price - 売却価格
	// DESC: Selling price - 販売価格
	int32_t sellValue;

	// NAME: Action ID - 行動ID
	// DESC: Set the effect that occurs when using a tool - 道具を使ったときに発生する効果を設定します
	int32_t behaviorId;

	// NAME: Replacement item ID - 差し替えアイテムID
	// DESC: Item ID when replacing - 差し替えるときのアイテムID
	int32_t replaceItemId;

	// NAME: Sort ID - ソートID
	// DESC: Sort ID (-1: Do not collect) - ソートID(-1:集めない)
	int32_t sortId;

	// NAME: Display replacement destination item ID - 表示差し替え先アイテムID
	// DESC: Conditionally replace the display with another tool ID. The tool ID on the game data side does not change - 条件付きで表示を別の道具IDに差し替える。ゲームデータ側の道具IDは変わらない
	int32_t appearanceReplaceItemId;

	// NAME: YES / NO message ID - YES/NOメッセージID
	// DESC: YesNo Message ID used when displaying the dialog - YesNoダイアログ表示時に使用するメッセージID
	int32_t yesNoDialogMessageId;

	// NAME: Usable condition_state change type - 使用可能条件_状態変化タイプ
	// DESC: Allow to use only when the special effect of the set state change type is applied - 設定した状態変化タイプの特殊効果が掛かったときだけ、使用許可する
	uint16_t useEnableSpEffectType;

	// NAME: Vase group ID - 壺グループID
	// DESC: "Consumable items" for which 0 or more is set for the pot group ID can be possessed by the number of "pots" with the same pot group ID. - 壺グループIDに0以上が設定されている「消費アイテム」は同じ壺グループIDの「壺」の個数だけ所持可能
	int8_t potGroupId;

	// NAME: PAD - PAD
	// DESC: Old (magic ID linked to a scroll) - 旧(巻物と紐づいた魔法ID)
	uint8_t pad[1];

	// NAME: Icon ID - アイコンID
	// DESC: Menu icon ID - メニュー用アイコンID
	uint16_t iconId;

	// NAME: Model ID - モデルID
	// DESC: Model ID - モデルID
	uint16_t modelId;

	// NAME: Shop level - ショップレベル
	// DESC: Level that can be sold at the store - お店で販売できるレベル
	int16_t shopLv;

	// NAME: Comptrophy SEQ number - コンプトロフィーSEQ番号
	// DESC: SEQ number of complete trophy - コンプリート系トロフィのSEQ番号
	int16_t compTrophySedId;

	// NAME: Trophy SEQ number - トロフィーSEQ番号
	// DESC: Trophy SEQ number - トロフィーのSEQ番号
	int16_t trophySeqId;

	// NAME: Maximum number of possessions - 最大所持数
	// DESC: Maximum number of possessions - 最大所持数
	int16_t maxNum;

	// NAME: Consumer nature - 消費人間性
	// DESC: Consumer nature - 消費人間性
	uint8_t consumeHeroPoint;

	// NAME: Skill over start value - 技量オーバー開始値
	// DESC: Skill over start value - 技量オーバー開始値
	uint8_t overDexterity;

	// NAME: Tool type - 道具のタイプ
	// DESC: Types of tools - 道具の種類
	uint8_t goodsType;

	// NAME: ID category - IDカテゴリ
	// DESC: ↓ ID category [Attack, Projectile, Special] - ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
	uint8_t refCategory;

	// NAME: Special effects category - 特殊効果カテゴリ
	// DESC: Since there are effects (enchantment weapons, etc.) whose parameters fluctuate depending on skills, magic, items, etc., set each action so that the determined effect can correspond to the effect such as "power up only weapon attack". Set "None" for items that do not need to be set, such as varistor. - スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する

	uint8_t spEffectCategory;

	// NAME: pad - pad
	uint8_t pad3[1];

	// NAME: Animation when using tools - 道具使用時アニメ
	// DESC: Set the animation to play when using the tool - 道具を使ったときに再生するアニメを設定します
	uint8_t goodsUseAnim;

	// NAME: Do you want to open the menu - メニュー開くか
	// DESC: Menu type that opens when using an item - アイテム使用時に開くメニュータイプ
	uint8_t opmeMenuType;

	// NAME: Prohibition conditions_Special effects category - 使用禁止条件_特殊効果カテゴリ
	// DESC: Specified to control whether it can be used by the special effect applied - かかっている特殊効果によって使用可能かを制御する為に指定
	uint8_t useLimitCategory;

	// NAME: Replacement category - 差し替えカテゴリ
	// DESC: Condition category to add to call ID - 呼び出しIDに加算しる条件カテゴリ
	uint8_t replaceCategory;

	// NAME: Reserve - リザーブ
	uint8_t reserve4[2];

	// NAME: Can be used alive - 生存使用可
	// DESC: Is it possible to use a surviving player? - 生存プレイヤー使用可能か
	uint8_t enable_live: 1;

	// NAME: Gray available - グレイ使用可
	// DESC: Can Gray Ghost be used? - グレイゴースト使用可能か
	uint8_t enable_gray: 1;

	// NAME: White can be used - 白使用可
	// DESC: Can white ghost be used? - ホワイトゴースト使用可能か
	uint8_t enable_white: 1;

	// NAME: Black can be used - 黒使用可
	// DESC: Is it possible to do a black ghost? - ブラックゴーストしよう可能か
	uint8_t enable_black: 1;

	// NAME: Multiplayer possible - マルチプレイ可
	// DESC: Can it be used during multiplayer? - マルチプレイ中に使用可能か？
	uint8_t enable_multi: 1;

	// NAME: Not available offline - オフラインで使用不可
	// DESC: Is it unavailable while offline? - オフライン中に使用不可か？
	uint8_t disable_offline: 1;

	// NAME: Can be equipped - 装備可能
	// DESC: Whether it can be equipped - 装備できるかどうか
	uint8_t isEquip: 1;

	// NAME: Is it a consumable item? - 消耗品か
	// DESC: Will it be consumed when used (whether the number of possessions will decrease) - 使用時に消耗するか(所持数が減るか)
	uint8_t isConsume: 1;

	// NAME: Is it automatically equipped? - 自動装備するか？
	// DESC: Will it be equipped automatically when picked up? - 拾った時に自動で装備するか？
	uint8_t isAutoEquip: 1;

	// NAME: Is it a stationary item? - 設置型アイテムか？
	// DESC: Is it a stationary item? - 設置型アイテムか？
	uint8_t isEstablishment: 1;

	// NAME: Can i have only one - 1個しか持てないか
	// DESC: Is it an item that you can only have one? - 1個しか持てないアイテムか
	uint8_t isOnlyOne: 1;

	// NAME: Can you throw it away - 捨てれるか
	// DESC: Can you throw away the item? TRUE = thrown away - アイテムを捨てれるか？TRUE=捨てれる
	uint8_t isDiscard: 1;

	// NAME: Can you deposit - 預けれるか
	// DESC: Can you leave it in the warehouse? - 倉庫に預けれるか
	uint8_t isDeposit: 1;

	// NAME: Can I use it with my right bare hand? - 右素手に使えないか
	// DESC: Can't be used when the right-handed weapon is bare-handed? - 右手武器が素手の場合に使用不可か
	uint8_t isDisableHand: 1;

	// NAME: Whether to delete at the time of lap - 周回時削除するか
	// DESC: Whether to delete at the time of lap - 周回時削除するか
	uint8_t isRemoveItem_forGameClear: 1;

	// NAME: Is it a replenishment item? - 補充アイテムか
	// DESC: Used to determine replenishable items - 補充可能アイテムを判別するのに使用します
	uint8_t isSuppleItem: 1;

	// NAME: Is it a replenished item? - 補充済みアイテムか
	// DESC: Used to determine replenished items - 補充済みアイテムを判別するのに使用します
	uint8_t isFullSuppleItem: 1;

	// NAME: Do you want to enchant? - エンチャントするか？
	// DESC: Do you want to enchant your weapon? - 武器にエンチャントするか？
	uint8_t isEnhance: 1;

	// NAME: Is it a repair item? - 修理アイテムか
	// DESC: Is it an item to repair? - 修理するアイテムか？
	uint8_t isFixItem: 1;

	// NAME: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	// DESC: Is multi-drop sharing prohibited? - マルチドロップ共有禁止か
	uint8_t disableMultiDropShare: 1;

	// NAME: Is it prohibited to use in the arena? - 闘技場で使用禁止か
	// DESC: Is it prohibited to use in the arena? - 闘技場で使用禁止か
	uint8_t disableUseAtColiseum: 1;

	// NAME: Is it prohibited to use outside the arena? - 闘技場以外で使用禁止か
	// DESC: Is it prohibited to use outside the arena? - 闘技場以外で使用禁止か
	uint8_t disableUseAtOutOfColiseum: 1;

	// NAME: Is it possible to cancel early? - 早いキャンセル可能か
	// DESC: Is it possible to cancel early? - 早いキャンセル可能か
	uint8_t isEnableFastUseItem: 1;

	// NAME: Does it reflect special effects? - 特殊効果を反映するか
	// DESC: Whether to reflect special effects (such as ability value correction) - （能力値補正など）特殊効果を反映するか
	uint8_t isApplySpecialEffect: 1;

	// NAME: ID that synchronizes the number increase / decrease - 個数増減を同期させるID
	// DESC: When the number of items is changed, the items with the same ID will be changed at the same time. 0: Not synchronized - アイテムの個数が変更された際に、同じIDを設定したアイテムも一緒に変更を行います。 0：同期しない
	uint8_t syncNumVaryId;

	// NAME: Call ID1 - 呼び出しID1
	// DESC: ID1 called from the item - アイテムから呼び出されるID1
	int32_t refId_1;

	// NAME: Reference Virtual Weapon ID - 参照仮想武器ID
	// DESC: Weapon ID to refer to when using the tool - 道具使用時に参照する武器ID
	int32_t refVirtualWepId;

	// NAME: Item lottery ID_for map at the time of vagrant - ベイグラント時アイテム抽選ID_マップ用
	// DESC: -1: No vagrant 0: No lottery 1 ~: With lottery - -1：ベイグラントなし 0：抽選なし 1～：抽選あり
	int32_t vagrantItemLotId;

	// NAME: Vagrant Bonus Enemy Drop Item Lottery ID_Map - ベイグラントボーナス敵ドロップアイテム抽選ID_マップ用
	// DESC: -1: No drop 0: No lottery 1 ~: With lottery - -1：ドロップなし 0：抽選なし 1～：抽選あり
	int32_t vagrantBonusEneDropItemLotId;

	// NAME: Vagrant item Enemy drop item Lottery ID_for map - ベイグラントアイテム敵ドロップアイテム抽選ID_マップ用
	// DESC: -1: No drop 0: No lottery 1 ~: With lottery - -1：ドロップなし 0：抽選なし 1～：抽選あり
	int32_t vagrantItemEneDropItemLotId;

	// NAME: Handheld SFXID - 手持ちSFXID
	// DESC: SFXID until the effect is activated when you try to use the item - アイテムを使用しようとし、効果が発動するまでのSFXID
	int32_t castSfxId;

	// NAME: Activate SFXID - 発動SFXID
	// DESC: SFX ID when the item is activated - アイテムが発動したときのSFXID
	int32_t fireSfxId;

	// NAME: Effect SFXID - 効果SFXID
	// DESC: After the item is activated, the SFX ID in effect - アイテムが発動後、効果中のSFXID
	int32_t effectSfxId;

	// NAME: Can be used while the Great Rune is active - 大ルーン発動中使用可
	// DESC: Can it be used with a large rune activated? - 大ルーン発動状態で使用可能か
	uint8_t enable_ActiveBigRune: 1;

	// NAME: Is it a bonfire warp item? - 篝火ワープアイテムか
	// DESC: If the state change type "Warp Prohibition" is applied when TRUE, remove the function to disable the item. - TRUEの時に状態変化タイプの「ワープ禁止」がかかっていればそのアイテムを使用不可にする機能を外す
	uint8_t isBonfireWarpItem: 1;

	// NAME: Can it be used in a ladder? - はしご中使用可能か
	// DESC: Check here for items available in the ladder - はしご中に使用可能なアイテムはここにチェックを入れます
	uint8_t enable_Ladder: 1;

	// NAME: Preparing for multiplayer - マルチプレイ準備中可
	// DESC: Whether items can be used between session probability and initial synchronization - セッション確率～初期同期の間でアイテムを使用できるかどうか
	uint8_t isUseMultiPlayPreparation: 1;

	// NAME: Can it be used together? - まとめて使えるか
	// DESC: Can it be used together? - まとめて使えるか
	uint8_t canMultiUse: 1;

	// NAME: Is it a shield enchantment? - 盾エンチャントか
	// DESC: Is it a shield enchantment? - 盾エンチャントか
	uint8_t isShieldEnchant: 1;

	// NAME: Is it subject to warp prohibition? - ワープ禁止対象か
	// DESC: When this is TRUE, disable the item if the state change type "Warp Prohibition" is applied. - これがTRUEの時に、状態変化タイプの「ワープ禁止」がかかっていればそのアイテムを使用不可にする 
	uint8_t isWarpProhibited: 1;

	// NAME: Only available when there is a disconnect penalty - 切断ペナルティが発生しているときのみ使用可能
	// DESC: A flag that allows you to determine if an item is only available when a client disconnect penalty is incurred. - クライアント切断ペナルティが発生しているときのみ使用可能なアイテムかどうかを判断できるようにするためのフラグ
	uint8_t isUseMultiPenaltyOnly: 1;

	// NAME: Replenishment type - 補充タイプ
	// DESC: Replenishment item / Replenishment type when replenishing a replenished item. - 補充アイテム/補充済みアイテムを補充する際の補充タイプ。
	uint8_t suppleType;

	// NAME: Automatic replenishment type - 自動補充タイプ
	// DESC: Controls whether or not to automatically replenish and default settings - 自動補充する/しないの可否およびデフォルト設定をコントロールします
	uint8_t autoReplenishType;

	// NAME: Can you put it on the spot - その場に置けるか
	// DESC: Can I put the item on the spot? TRUE = can be placed - アイテムをその場に置けるか？TRUE=置ける
	uint8_t isDrop: 1;

	// NAME: Acquisition log display condition - 取得ログ表示条件
	// DESC: Whether to display in the item acquisition log when acquiring the item (not entered: ○) - アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
	uint8_t showLogCondType: 1;

	// NAME: Is it a horse call item? - 馬呼びアイテムか
	// DESC: Is it an item that summons a horse? Cannot be used if the horse died or the PC is in a horse-prohibited area - 馬を召喚するアイテムか？馬が死亡、PCが馬禁止エリアに居る場合は使用不可
	uint8_t isSummonHorse: 1;

	// NAME: Acquisition dialog display condition - 取得ダイアログ表示条件
	// DESC: Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only) - アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
	uint8_t showDialogCondType: 2;

	// NAME: Is it a Nemuri collection item? - ネムリ収集アイテムか
	// DESC: Is it a Nemuri collection item? - ネムリ収集アイテムか
	uint8_t isSleepCollectionItem: 1;

	// NAME: Can it be used while riding? - 騎乗中使用可能か
	// DESC: Can it be used while riding? - 騎乗中使用可能か
	uint8_t enableRiding: 1;

	// NAME: Is it prohibited to use while not riding? - 非騎乗中使用禁止か
	// DESC: Is it prohibited to use while not riding? - 非騎乗中使用禁止か
	uint8_t disableRiding: 1;

	// NAME: Number of warehouses - 倉庫所持数
	// DESC: Number of warehouses - 倉庫所持数
	int16_t maxRepositoryNum;

	// NAME: Sort item type ID - ソートアイテム種別ID
	// DESC: Sort item type ID. In the sort "Item type order", the same ID is displayed together as the same group. - ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
	uint8_t sortGroupId;

	// NAME: Can it be used in an attack-prohibited area? - 攻撃禁止区域で使用できるか
	// DESC: Can it be used in an attack-prohibited area? - 攻撃禁止区域で使用できるか
	uint8_t isUseNoAttackRegion: 1;

	// NAME: pad - pad
	// DESC: (Old log icon) - （旧ログ用アイコン）
	uint8_t pad1: 7;

	// NAME: Selling price - 販売価格
	// DESC: Selling price - 販売価格
	int32_t saleValue;

	// NAME: Rarity - レア度
	// DESC: Rarity used in item acquisition logs - アイテム取得ログで使うレア度
	uint8_t rarity;

	// NAME: Is it a buddy item? - バディアイテムか
	// DESC: Whether there are item usage restrictions for buddy items - バディアイテム用のアイテム使用制限がかかるかどうか
	uint8_t useLimitSummonBuddy;

	// NAME: Use prohibition condition_state change type - 使用禁止条件_状態変化タイプ
	// DESC: Specified to control whether it can be used depending on the state change type of the special effect applied - かかっている特殊効果の状態変化タイプによって使用可能かを制御する為に指定
	uint16_t useLimitSpEffectType;

	// NAME: AI usage judgment ID - AI使用判断ID
	// DESC: AI usage judgment ID - AI使用判断ID
	int32_t aiUseJudgeId;

	// NAME: MP consumption - 消費MP
	// DESC: MP consumption - 消費MP
	int16_t consumeMP;

	// NAME: HP consumed - 消費HP
	// DESC: HP consumed - 消費HP
	int16_t consumeHP;

	// NAME: Strengthening tool ID - 強化先道具ID
	// DESC: Strengthening tool ID - 強化先道具ID
	int32_t reinforceGoodsId;

	// NAME: Material ID at the time of strengthening - 強化時素材ID
	// DESC: Material ID at the time of strengthening - 強化時素材ID
	int32_t reinforceMaterialId;

	// NAME: Enhanced price - 強化価格
	// DESC: Enhanced price - 強化価格
	int32_t reinforcePrice;

	// NAME: Pledge 0 usage level - 誓約0使用レベル
	// DESC: Pledge 0 usage level - 誓約0使用レベル
	int8_t useLevel_vowType0;

	// NAME: Pledge 1 usage level - 誓約1使用レベル
	// DESC: Pledge 1 usage level - 誓約1使用レベル
	int8_t useLevel_vowType1;

	// NAME: Pledge 2 usage level - 誓約2使用レベル
	// DESC: Pledge 2 usage level - 誓約2使用レベル
	int8_t useLevel_vowType2;

	// NAME: Pledge 3 usage level - 誓約3使用レベル
	// DESC: Pledge 3 usage level - 誓約3使用レベル
	int8_t useLevel_vowType3;

	// NAME: Pledge 4 usage level - 誓約4使用レベル
	// DESC: Pledge 4 usage level - 誓約4使用レベル
	int8_t useLevel_vowType4;

	// NAME: Pledge 5 usage level - 誓約5使用レベル
	// DESC: Pledge 5 usage level - 誓約5使用レベル
	int8_t useLevel_vowType5;

	// NAME: Pledge 6 usage level - 誓約6使用レベル
	// DESC: Pledge 6 usage level - 誓約6使用レベル
	int8_t useLevel_vowType6;

	// NAME: Pledge 7 usage level - 誓約7使用レベル
	// DESC: Pledge 7 usage level - 誓約7使用レベル
	int8_t useLevel_vowType7;

	// NAME: Pledge 8 usage level - 誓約8使用レベル
	// DESC: Pledge 8 usage level - 誓約8使用レベル
	int8_t useLevel_vowType8;

	// NAME: Pledge 9 usage level - 誓約9使用レベル
	// DESC: Pledge 9 usage level - 誓約9使用レベル
	int8_t useLevel_vowType9;

	// NAME: Pledge 10 usage level - 誓約10使用レベル
	// DESC: Pledge 10 usage level - 誓約10使用レベル
	int8_t useLevel_vowType10;

	// NAME: Pledge 11 usage level - 誓約11使用レベル
	// DESC: Pledge 11 usage level - 誓約11使用レベル
	int8_t useLevel_vowType11;

	// NAME: Pledge 12 usage level - 誓約12使用レベル
	// DESC: Pledge 12 usage level - 誓約12使用レベル
	int8_t useLevel_vowType12;

	// NAME: Pledge 13 usage level - 誓約13使用レベル
	// DESC: Pledge 13 usage level - 誓約13使用レベル
	int8_t useLevel_vowType13;

	// NAME: Pledge 14 usage level - 誓約14使用レベル
	// DESC: Pledge 14 usage level - 誓約14使用レベル
	int8_t useLevel_vowType14;

	// NAME: Pledge 15 usage level - 誓約15使用レベル
	// DESC: Pledge 15 usage level - 誓約15使用レベル
	int8_t useLevel_vowType15;

	// NAME: Appropriate level of use - 使用適正レベル
	// DESC: Appropriate level of use - 使用適正レベル
	uint16_t useLevel;

	// NAME: Reserved area - 予約領域
	// DESC: Reserved area - 予約領域
	uint8_t reserve5[2];

	// NAME: Item acquisition tutorial Judgment flag ID - アイテム入手チュートリアル判定フラグID
	// DESC: Event flag ID for the tutorial when you first get the item. Flag ON when item is obtained. - 初めてアイテム入手した時のチュートリアル用のイベントフラグID。アイテム入手時にフラグON。
	uint32_t itemGetTutorialFlagId;

	// NAME: Reserved area - 予約領域
	// DESC: Reserved area - 予約領域
	uint8_t reserve3[8];
};

#endif
