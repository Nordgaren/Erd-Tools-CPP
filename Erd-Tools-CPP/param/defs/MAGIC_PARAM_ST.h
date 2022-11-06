/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MAGIC_PARAM_ST_H
#define _PARAMDEF_MAGIC_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 6
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MAGIC_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Yes / No Dialog Message ID - Yes/NoダイアログメッセージID
	// DESC: Message ID of Yes / No dialog issued when using magic - 魔法使用時に出すYes/NoダイアログのメッセージID
	int32_t yesNoDialogMessageId;

	// NAME: Special effect ID that is out of usage restrictions - 使用制限から外れる特殊効果ID
	// DESC: Usage restrictions can be ignored when the specified special effect ID is activated - 指定した特殊効果IDが発動している時は使用制限を無視できる
	int32_t limitCancelSpEffectId;

	// NAME: SortID - SortID
	// DESC: Sort ID (-1: Do not collect) - ソートID(-1:集めない)
	int16_t sortId;

	// NAME: Equipment conditions [luck] - 装備条件【運】
	// DESC: Can't be equipped without more PC luck - PCの運がこれ以上無いと装備できない
	uint8_t requirementLuck;

	// NAME: AI notification type - AI通知タイプ
	// DESC: AI interrupt occurs in act ("AI notification when magic is activated") - act("魔法発動時AI通知")でAIインタラプトが発生する
	uint8_t aiNotifyType;

	// NAME: MP consumption [normal] - 消費MP[通常]
	// DESC: MP consumption - 消費MP
	int16_t mp;

	// NAME: Consumed stamina [normal] - 消費スタミナ[通常]
	// DESC: Consumption stamina - 消費スタミナ
	int16_t stamina;

	// NAME: Icon ID - アイコンID
	// DESC: Specify icon> For menu - アイコンを指定　＞メニュー用
	int16_t iconId;

	// NAME: Action ID - 行動ID
	// DESC: Set the action ID - 行動IDを設定する
	int16_t behaviorId;

	// NAME: Required item ID - 必要アイテムID
	// DESC: Item ID required for purchase - 購入に必要なアイテムID
	int16_t mtrlItemId;

	// NAME: Magic ID to replace - 差し替える魔法ID
	// DESC: ID to be replaced when the state change matches (-1: invalid) - 状態変化一致時に差し替えるID(-1:無効)
	int16_t replaceMagicId;

	// NAME: Maximum number - 最大個数
	// DESC: Number per piece (-1: infinity) - １個当たりの個数(-1:無限)
	int16_t maxQuantity;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory1;

	// NAME: Skill over start value - 技量オーバー開始値
	// DESC: Skill over start value - 技量オーバー開始値
	uint8_t overDexterity;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory2;

	// NAME: Required slot - 必要スロット
	// DESC: Number of slots required for equipment> For menu - 装備に必要なスロット数 ＞メニュー用
	uint8_t slotLength;

	// NAME: Equipment conditions [Intelligence] - 装備条件【知力】
	// DESC: Can't be equipped without more PC intelligence - PCの知力がこれ以上無いと装備できない
	uint8_t requirementIntellect;

	// NAME: Equipment conditions [reason] - 装備条件【理力】
	// DESC: It cannot be equipped without the power of the PC any more. - PCの理力がこれ以上無いと装備できない
	uint8_t requirementFaith;

	// NAME: Analog minimum workmanship - アナログ最低技量
	// DESC: Motion cancel analog: Minimum skill value - モーションキャンセルアナログ化：最低技量値
	uint8_t analogDexterityMin;

	// NAME: Maximum analog workmanship - アナログ最大技量
	// DESC: Motion cancel analog: Maximum skill value - モーションキャンセルアナログ化：最高技量値
	uint8_t analogDexterityMax;

	// NAME: category - カテゴリ
	// DESC: Used for sorting> For menu - 並べ替えに使用　＞メニュー用
	uint8_t ezStateBehaviorType;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory3;

	// NAME: Special effects category - 特殊効果カテゴリ
	// DESC: Since there are effects (enchantment weapons, etc.) whose parameters fluctuate depending on skills, magic, items, etc., set each action so that the determined effect can correspond to the effect such as "power up only weapon attack". Set "None" for items that do not need to be set, such as varistor.
 - スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する

	uint8_t spEffectCategory;

	// NAME: Motion category - モーションカテゴリ
	// DESC: Specify motion> For EzState - モーションを指定　＞EzState用
	uint8_t refType;

	// NAME: Menu type at the time of use - 使用時メニュータイプ
	// DESC: Menu type to be displayed when using magic - 魔法使用時に出すメニュータイプ
	uint8_t opmeMenuType;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory4;

	// NAME: Which normal is it? - どの常態か？
	// DESC: Specify the state change that needs to replace the magic ID - 魔法IDを差し替える必要がある状態変化を指定
	uint16_t hasSpEffectType;

	// NAME: Replacement category - 差し替えカテゴリ
	// DESC: Additional conditions when replacing the magic ID - 魔法IDを差し替える時の追加条件
	uint8_t replaceCategory;

	// NAME: Restrictions on use by special effects category - 特殊効果カテゴリによる使用制限
	// DESC: Specified to control availability by special effects - 特殊効果によって使用可能かどうかを制御する為に指定
	uint8_t useLimitCategory;

	// NAME: Pledge 0 - 誓約0
	// DESC: Pledge 0 - 誓約0
	uint8_t vowType0: 1;

	// NAME: Pledge 1 - 誓約1
	// DESC: Pledge 1 - 誓約1
	uint8_t vowType1: 1;

	// NAME: Pledge 2 - 誓約2
	// DESC: Pledge 2 - 誓約2
	uint8_t vowType2: 1;

	// NAME: Pledge 3 - 誓約3
	// DESC: Pledge 3 - 誓約3
	uint8_t vowType3: 1;

	// NAME: Pledge 4 - 誓約4
	// DESC: Pledge 4 - 誓約4
	uint8_t vowType4: 1;

	// NAME: Pledge 5 - 誓約5
	// DESC: Pledge 5 - 誓約5
	uint8_t vowType5: 1;

	// NAME: Pledge 6 - 誓約6
	// DESC: Pledge 6 - 誓約6
	uint8_t vowType6: 1;

	// NAME: Pledge 7 - 誓約7
	// DESC: Pledge 7 - 誓約7
	uint8_t vowType7: 1;

	// NAME: Can it be used in multi? - マルチでも使用可能か
	// DESC: Can it be used in multi? Can be used for both single and multi - マルチでも使用できるか。シングル、マルチ両方で使える
	uint8_t enable_multi: 1;

	// NAME: Is it only for multi? - マルチ専用か
	// DESC: Is it only for multi? It cannot be used when it is a single. It can be used when it is multi. - マルチ専用か。シングルのときには使えない。マルチのときは使える。
	uint8_t enable_multi_only: 1;

	// NAME: Is it an enchantment? - エンチャントか
	// DESC: Is it magic to enchant? - エンチャントする魔法か
	uint8_t isEnchant: 1;

	// NAME: Is it a shield enchantment? - 盾エンチャントか
	// DESC: Is it magic to enchant guards and shields? - ガード・盾エンチャントする魔法か
	uint8_t isShieldEnchant: 1;

	// NAME: Can be used alive - 生存使用可
	// DESC: Can surviving characters be used? - 生存キャラが使用可能か
	uint8_t enable_live: 1;

	// NAME: Gray available - グレイ使用可
	// DESC: Can gray characters be used? - グレイキャラが使用可能か
	uint8_t enable_gray: 1;

	// NAME: White can be used - 白使用可
	// DESC: Can white ghost characters be used? - 白ゴーストキャラが使用可能か
	uint8_t enable_white: 1;

	// NAME: Black can be used - 黒使用可
	// DESC: Can black ghost characters be used? - 黒ゴーストキャラが使用可能か
	uint8_t enable_black: 1;

	// NAME: Is it unavailable offline? - オフラインで使用不可か
	// DESC: Is it unavailable offline? - オフラインで使用不可か
	uint8_t disableOffline: 1;

	// NAME: Do you deliver resonance magic? - 共鳴魔法配信するか
	// DESC: Do you deliver resonance magic? - 共鳴魔法配信するか
	uint8_t castResonanceMagic: 1;

	// NAME: Is the armor SA damage multiplier valid even at the initial value? - 防具SAダメージ倍率が初期値でも有効か？
	// DESC: Whether the toughness calculation is performed even if the armor SA is the initial value. Check the toughness specification .xlsx for details - 防具SAが初期値でも強靭度計算が行われるかどうか。詳細は強靭度仕様書.xlsxを確認してください
	uint8_t isValidTough_ProtSADmg: 1;

	// NAME: Is it warp magic? - ワープ魔法か
	// DESC: Is it magic to warp? Magic with a check mark here is prohibited by the special effect "Warp Prohibition". - ワープする魔法か。ここにチェックが入っている魔法は特殊効果「ワープ禁止」により使用が禁止されます
	uint8_t isWarpMagic: 1;

	// NAME: Can it be used while riding? - 騎乗中使用可能か
	// DESC: Can it be used while riding? - 騎乗中使用可能か
	uint8_t enableRiding: 1;

	// NAME: Is it prohibited to use while not riding? - 非騎乗中使用禁止か
	// DESC: Is it prohibited to use while not riding? - 非騎乗中使用禁止か
	uint8_t disableRiding: 1;

	// NAME: Can it be used in an attack-prohibited area? - 攻撃禁止区域で使用できるか
	// DESC: Can it be used in an attack-prohibited area? - 攻撃禁止区域で使用できるか
	uint8_t isUseNoAttackRegion: 1;

	// NAME: pading - pading
	uint8_t pad_1: 1;

	// NAME: Pledge 8 - 誓約8
	// DESC: Pledge 8 - 誓約8
	uint8_t vowType8: 1;

	// NAME: Pledge 9 - 誓約9
	// DESC: Pledge 9 - 誓約9
	uint8_t vowType9: 1;

	// NAME: Pledge 10 - 誓約10
	// DESC: Pledge 10 - 誓約10
	uint8_t vowType10: 1;

	// NAME: Pledge 11 - 誓約11
	// DESC: Pledge 11 - 誓約11
	uint8_t vowType11: 1;

	// NAME: Pledge 12 - 誓約12
	// DESC: Pledge 12 - 誓約12
	uint8_t vowType12: 1;

	// NAME: Pledge 13 - 誓約13
	// DESC: Pledge 13 - 誓約13
	uint8_t vowType13: 1;

	// NAME: Pledge 14 - 誓約14
	// DESC: Pledge 14 - 誓約14
	uint8_t vowType14: 1;

	// NAME: Pledge 15 - 誓約15
	// DESC: Pledge 15 - 誓約15
	uint8_t vowType15: 1;

	// NAME: Chanting SFXID - 詠唱SFXID
	// DESC: SFXID during magical chanting - 魔法詠唱中のSFXID
	int32_t castSfxId;

	// NAME: Activate SFXID - 発動SFXID
	// DESC: SFX ID when magic is activated - 魔法発動時のSFXID
	int32_t fireSfxId;

	// NAME: Effect SFXID - 効果SFXID
	// DESC: SFXID during magic effect - 魔法効果中のSFXID
	int32_t effectSfxId;

	// NAME: Toughness correction factor - 強靭度 補正倍率
	// DESC: It is a magnification that corrects the basic value of toughness. - 強靭度の基本値を補正する倍率です
	float toughnessCorrectRate;

	// NAME: Replacement status type - 差し替えステータスタイプ
	// DESC: Replacement status type - 差し替えステータスタイプ
	uint8_t ReplacementStatusType;

	// NAME: Replacement status value 1 - 差し替えステータス値1
	// DESC: Replacement status value 1 - 差し替えステータス値1
	int8_t ReplacementStatus1;

	// NAME: Replacement status value 2 - 差し替えステータス値2
	// DESC: Replacement status value 2 - 差し替えステータス値2
	int8_t ReplacementStatus2;

	// NAME: Replacement status value 3 - 差し替えステータス値3
	// DESC: Replacement status value 3 - 差し替えステータス値3
	int8_t ReplacementStatus3;

	// NAME: Replacement status value 4 - 差し替えステータス値4
	// DESC: Replacement status value 4 - 差し替えステータス値4
	int8_t ReplacementStatus4;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory5;

	// NAME: Consume SA [Normal / Reservoir] - 消費SA[通常/溜め]
	// DESC: SA consumption [normal / reservoir] - 消費SA量[通常/溜め]
	int16_t consumeSA;

	// NAME: Replacement ID1 - 差し替えID1
	// DESC: Replacement ID1 - 差し替えID1
	int32_t ReplacementMagic1;

	// NAME: Replacement ID2 - 差し替えID2
	// DESC: Replacement ID2 - 差し替えID2
	int32_t ReplacementMagic2;

	// NAME: Replacement ID3 - 差し替えID3
	// DESC: Replacement ID3 - 差し替えID3
	int32_t ReplacementMagic3;

	// NAME: Replacement ID 4 - 差し替えID4
	// DESC: Replacement ID 4 - 差し替えID4
	int32_t ReplacementMagic4;

	// NAME: MP consumption [reservoir] - 消費MP[溜め]
	// DESC: MP consumption [reservoir] - 消費MP[溜め]
	int16_t mp_charge;

	// NAME: Consumption stamina [reservoir] - 消費スタミナ[溜め]
	// DESC: Consumption stamina [reservoir] - 消費スタミナ[溜め]
	int16_t stamina_charge;

	// NAME: Creation limit group Id - 作成制限グループId
	// DESC: If it is 0, it is unused. Check the number of bullets created for the specified group Id, and if the upper limit is reached, you will not be able to use magic. - 0なら未使用。指定したグループIdの弾丸作成数を確認し、上限に達していたら魔法の使用をできなくする。
	uint8_t createLimitGroupId;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory6;

	// NAME: Subcategory 1 - サブカテゴリ1
	// DESC: Subcategory 1 - サブカテゴリ1
	uint8_t subCategory1;

	// NAME: Subcategory 2 - サブカテゴリ2
	// DESC: Subcategory 2 - サブカテゴリ2
	uint8_t subCategory2;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory7;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory8;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory9;

	// NAME: ID category - IDカテゴリ
	// DESC: Call ID category [Attack, Projectile, Special Effects] - 呼び出しIDのカテゴリ[攻撃、飛び道具、特殊効果]
	uint8_t refCategory10;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId1;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId2;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId3;

	// NAME: AI usage judgment ID - AI使用判断ID
	// DESC: AI usage judgment ID - AI使用判断ID
	int32_t aiUseJudgeId;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId4;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId5;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId6;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId7;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId8;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId9;

	// NAME: Call ID - 呼び出しID
	// DESC: ID called from magic - 魔法から呼び出すID
	int32_t refId10;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType1;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType2;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType3;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType4;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType5;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType6;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType7;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType8;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType9;

	// NAME: Consumption type - 消費タイプ
	// DESC: Consumption type - 消費タイプ
	uint8_t consumeType10;

	// NAME: MP consumption for menu supplement display - メニュー補足表示用消費MP
	// DESC: MP consumption for menu supplement display - メニュー補足表示用消費MP
	int16_t consumeLoopMP_forMenu;

	// NAME: PAD12 - PAD12
	// DESC: PAD12 - PAD12
	uint8_t pad[8];
};

#endif
