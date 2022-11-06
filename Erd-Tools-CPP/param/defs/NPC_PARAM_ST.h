/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_NPC_PARAM_ST_H
#define _PARAMDEF_NPC_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 9
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct NPC_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Behavior variation ID - 行動バリエーションID
	// DESC: Variation ID used when calculating the action ID. - 行動IDを算出するときに使用するバリエーションID.
	int32_t behaviorVariationId;

	// NAME: Poison resistance correction rule ID - 毒耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the set value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_poison;

	// NAME: NPC name ID - NPC名ID
	// DESC: NPC Name Message Parameter ID - NPC名メッセージパラメータ用ID
	int32_t nameId;

	// NAME: Turning speed [deg / sec] - 旋回速度[deg/sec]
	// DESC: Rotational speed [degrees / second] that can turn in 1 second. - 1秒間に旋回できる回転速度[度/秒].
	float turnVellocity;

	// NAME: Height per map [m] - 対マップあたりの高さ[m]
	// DESC: The height of the capsule per character. - 対キャラ当たりカプセルの高さ.
	float hitHeight;

	// NAME: Radius per map [m] - 対マップあたりの半径[m]
	// DESC: Radius of capsule per character. - 対キャラ当たりカプセルの半径.
	float hitRadius;

	// NAME: Weight [kg] - 重量[kg]
	// DESC: weight. - 重量.
	uint32_t weight;

	// NAME: Display position Y offset [m] - 表示位置Yオフセット[m]
	// DESC: Offset of the model display position in the Y (height) direction. It can be floated from the hit position. - モデル表示位置のY（高さ）方向のオフセット。あたり位置より浮かせることができる。
	float hitYOffset;

	// NAME: HP - ＨＰ
	// DESC: Death grace. - 死亡猶予.
	uint32_t hp;

	// NAME: MP - ＭＰ
	// DESC: Magic usage. - 魔法使用量.
	uint32_t mp;

	// NAME: Seoul - ソウル
	// DESC: The amount of soul that a character can get at the time of death. - 死亡時に、キャラクターが取得できるソウル量.
	uint32_t getSoul;

	// NAME: Item lottery ID_for enemies - アイテム抽選ID_エネミー用
	// DESC: Specify the lottery ID_for enemies of the item to be acquired at the time of death. Please set only one of them. - 死亡時に取得するアイテムの抽選ID_エネミー用を指定。どちらか片方のみ設定してください。
	int32_t itemLotId_enemy;

	// NAME: Item lottery ID_for map - アイテム抽選ID_マップ用
	// DESC: Specify for the lottery ID_map of the item to be acquired at the time of death. Please set only one of them. - 死亡時に取得するアイテムの抽選ID_マップ用を指定。どちらか片方のみ設定してください。
	int32_t itemLotId_map;

	// NAME: FootIK Ankle limit angle_roll - FootIK足首の制限角度_ロール
	// DESC: FootIK Ankle roll limit angle (-1: no limit) - FootIK足首のロールの制限角度（-1：制限なし）
	float maxAnkleRollAngle;

	// NAME: Per group and used navigation mesh - あたりグループと使用ナビメッシュ
	// DESC: Set the hit judgment with other characters (If you hit the ragdoll, other characters will hit the ragdoll) - 他のキャラとのあたり判定を設定（ラグドールあたりにすると他のキャラがラグドールに当たるようになる）
	uint8_t chrHitGroupAndNavimesh;

	// NAME: NPC face image ID - NPC顔画像ID
	// DESC: NPC face image ID (0: invalid value (default)). Specify the ID of the face image to be displayed in the "Sign browsing menu", "Kick menu", etc. If it is an invalid value, the dress-up model is displayed. - NPC顔画像ID(0:無効値(デフォルト))。「サイン閲覧メニュー」「キックメニュー」などで表示する顔画像のIDを指定する。無効値なら着せ替えモデルを表示する
	uint8_t faceIconId;

	// NAME: Deactivate distance setting [m] - ディアクティベート距離設定[m]
	// DESC: Distance at which the character is deactivated (valid only for open placement characters) - キャラがディアクティベートされる距離（オープン配置キャラのみ有効）
	int16_t deactivateDist;

	// NAME: Character appearance condition Para - キャラ出現条件パラ
	// DESC: Character appearance condition parameter ID - キャラ出現条件パラメータID
	uint32_t chrActivateConditionParamId;

	// NAME: FootIK Appearance up / down limit - FootIK見た目の上下制限値
	// DESC: FootIK Appearance up / down limit - FootIK見た目の上下制限値
	float footIkErrorHeightLimit;

	// NAME: Human nature lottery ID - 人間性抽選ID
	// DESC: Specify the lottery ID of human nature to be acquired at the time of death - 死亡時に取得する人間性の抽選IDを指定
	int32_t humanityLotId;

	// NAME: Resident special effect 0 - 常駐特殊効果0
	// DESC: Resident special effect 0 - 常駐特殊効果0
	int32_t spEffectID0;

	// NAME: Resident special effect 1 - 常駐特殊効果1
	// DESC: Resident special effect 1 - 常駐特殊効果1
	int32_t spEffectID1;

	// NAME: Resident special effect 2 - 常駐特殊効果2
	// DESC: Resident special effect 2 - 常駐特殊効果2
	int32_t spEffectID2;

	// NAME: Resident special effect 3 - 常駐特殊効果3
	// DESC: Resident special effect 3 - 常駐特殊効果3
	int32_t spEffectID3;

	// NAME: Resident special effect 4 - 常駐特殊効果4
	// DESC: Resident special effect 4 - 常駐特殊効果4
	int32_t spEffectID4;

	// NAME: Resident special effect 5 - 常駐特殊効果5
	// DESC: Resident special effect 5 - 常駐特殊効果5
	int32_t spEffectID5;

	// NAME: Resident special effect 6 - 常駐特殊効果6
	// DESC: Resident special effect 6 - 常駐特殊効果6
	int32_t spEffectID6;

	// NAME: Resident special effect 7 - 常駐特殊効果7
	// DESC: Resident special effect 7 - 常駐特殊効果7
	int32_t spEffectID7;

	// NAME: Special effect ID for lap bonus - 周回ボーナス用特殊効果ＩＤ
	// DESC: Special effect ID for lap bonus - 周回ボーナス用特殊効果ＩＤ
	int32_t GameClearSpEffectID;

	// NAME: Physical attack cut rate [%] - 物理攻撃カット率[％]
	// DESC: Set the damage cut rate when guarding for each attack - ガード時のダメージカット率を各攻撃ごとに設定
	float physGuardCutRate;

	// NAME: Magic attack cut rate [%] - 魔法攻撃カット率[％]
	// DESC: If it is not a guard attack, enter 0 - ガード攻撃でない場合は、0を入れる
	float magGuardCutRate;

	// NAME: Flame attack power cut rate [%] - 炎攻撃力カット率[％]
	// DESC: How much to cut the fire attack? - 炎攻撃をどれだけカットするか？
	float fireGuardCutRate;

	// NAME: Electric shock attack power cut rate [%] - 電撃攻撃力カット率[％]
	// DESC: How much to cut the electric shock attack? - 電撃攻撃をどれだけカットするか？
	float thunGuardCutRate;

	// NAME: Anime ID offset 1 - アニメIDオフセット1
	// DESC: All animations will be played with IDs shifted by this number. If not, the original anime ID is referenced. - すべてのアニメをこの数だけずらしたIDで再生します。なければ元のアニメIDを参照します。
	int32_t animIdOffset;

	// NAME: Gaze point of Rock Damipoli 0 - ロックダミポリ0の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint0;

	// NAME: Gaze point of Rock Damipoli 1 - ロックダミポリ1の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint1;

	// NAME: Gaze point of Rock Damipoli 2 - ロックダミポリ2の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint2;

	// NAME: Gaze point of Rock Damipoli 3 - ロックダミポリ3の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint3;

	// NAME: Gaze point of Rock Damipoli 4 - ロックダミポリ4の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint4;

	// NAME: Gaze point of Rock Damipoli 5 - ロックダミポリ5の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint5;

	// NAME: Network warp judgment distance [m / sec] - ネットワークワープ判定距離[m/秒]
	// DESC: Distance to warp instead of complementary movement in network synchronization. Faster people (ex dragons) need to be longer. - ネットワークの同期で、補完移動でなくワープさせる距離。スピードの速い人（exドラゴン)は長めにしてあげる必要がある。
	float networkWarpDist;

	// NAME: R1 - R1
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorR1;

	// NAME: L1 - L1
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorL1;

	// NAME: R2 - R2
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorR2;

	// NAME: L2 - L2
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorL2;

	// NAME: □ - □
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorRL;

	// NAME: ○ ○ - ○
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorRR;

	// NAME: × - ×
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorRD;

	// NAME: △ - △
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorRU;

	// NAME: ← - ←
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorLL;

	// NAME: → - →
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorLR;

	// NAME: ↓ - ↓
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorLD;

	// NAME: ↑ - ↑
	// DESC: Register the ID from the action parameter tool and specify the action. - 行動パラメータツールからIDを登録し、行動を指定する.
	int32_t dbgBehaviorLU;

	// NAME: Anime ID offset 2 - アニメIDオフセット2
	// DESC: All animations will be played with IDs shifted by this number. If not, the animation ID of the animation ID offset 1 is referred to. - すべてのアニメをこの数だけずらしたIDで再生します。なければアニメIDオフセット1のアニメIDを参照します。
	int32_t animIdOffset2;

	// NAME: Damage group 1 Damage multiplier - ダメージグループ1ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 1 - 部位1に対するダメージ処理に適応する倍率
	float partsDamageRate1;

	// NAME: Damage group 2 Damage multiplier - ダメージグループ2ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 2 - 部位2に対するダメージ処理に適応する倍率
	float partsDamageRate2;

	// NAME: Damage group 3 Damage multiplier - ダメージグループ3ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 3 - 部位3に対するダメージ処理に適応する倍率
	float partsDamageRate3;

	// NAME: Damage group 4 damage multiplier - ダメージグループ4ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 4 - 部位4に対するダメージ処理に適応する倍率
	float partsDamageRate4;

	// NAME: Damage group 5 damage multiplier - ダメージグループ5ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 5 - 部位5に対するダメージ処理に適応する倍率
	float partsDamageRate5;

	// NAME: Damage group 6 damage multiplier - ダメージグループ6ダメージ倍率
	// DESC: Magnification to adapt to damage processing for part 6 - 部位6に対するダメージ処理に適応する倍率
	float partsDamageRate6;

	// NAME: Damage group 7 Damage multiplier - ダメージグループ7ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 7 - 部位7に対するダメージ処理に適応する倍率
	float partsDamageRate7;

	// NAME: Damage group 8 damage multiplier - ダメージグループ8ダメージ倍率
	// DESC: Magnification that adapts to damage processing for part 8 - 部位8に対するダメージ処理に適応する倍率
	float partsDamageRate8;

	// NAME: Weak point damage ratio - 弱点部位ダメージ倍率
	// DESC: Magnification that adapts to damage processing for weak points - 弱点部位に対するダメージ処理に適応する倍率
	float weakPartsDamageRate;

	// NAME: SA recovery time correction value - SA回復時間補正値
	// DESC: Correction value for super armor recovery time - スーパーアーマー回復時間用の補正値
	float superArmorRecoverCorrection;

	// NAME: Knockback distance at SA break - SAブレイク時ノックバック距離
	// DESC: Knockback distance that can be used only at the time of SA break - SAブレイクの時だけに使えるノックバック距離
	float superArmorBrakeKnockbackDist;

	// NAME: stamina - スタミナ
	// DESC: Total amount of stamina. - スタミナ総量.
	uint16_t stamina;

	// NAME: Stamina recovery basic speed [point / s] - スタミナ回復基本速度[point/s]
	// DESC: Stamina recovery basic speed [point / s] - スタミナ回復基本速度[point/s]
	uint16_t staminaRecoverBaseVel;

	// NAME: Physical defense - 物理防御力
	// DESC: Damage reduction base value for physical attacks. - 物理攻撃に対するダメージ減少基本値.
	uint16_t def_phys;

	// NAME: Slash defense [%] - 斬撃防御力[％]
	// DESC: Look at the attack attribute, and if it is a slash attribute, reduce the defense power. - 攻撃属性を見て、斬撃属性のときは、防御力を減少させる.
	int16_t def_slash;

	// NAME: Blow defense [%] - 打撃防御力[％]
	// DESC: Look at the attack attribute, and if it is a hit attribute, reduce the defense power. - 攻撃属性を見て、打撃属性のときは、防御力を減少させる.
	int16_t def_blow;

	// NAME: Puncture defense [%] - 刺突防御力[％]
	// DESC: Look at the attack attribute, and if it is a piercing attribute, reduce the defense power. - 攻撃属性を見て、刺突属性のときは、防御力を減少させる.
	int16_t def_thrust;

	// NAME: Magic defense - 魔法防御力
	// DESC: Damage reduction base value for magic attacks. - 魔法攻撃に対するダメージ減少基本値.
	uint16_t def_mag;

	// NAME: Fire defense - 炎防御力
	// DESC: Damage reduction base value against fire attack. - 炎攻撃に対するダメージ減少基本値.
	uint16_t def_fire;

	// NAME: Electric shock defense - 電撃防御力
	// DESC: Damage reduction base value against electric shock attack. - 電撃攻撃に対するダメージ減少基本値.
	uint16_t def_thunder;

	// NAME: Repellent defense - はじき防御力
	// DESC: Used to determine the repelling of enemy attacks. // It is intended to be repelled by normal attacks other than guards. // Enemies with a hard skin can be repelled without doing anything ... It doesn't matter if it is a normal enemy. - 敵の攻撃のはじき判定に使用。//ガード以外の通常攻撃でもはじけるようにするためのものです.//硬い表皮の敵は、何もしなくてもはじかれることがある…みたいな感じ通常の敵なら関係ないです.
	uint16_t defFlickPower;

	// NAME: Poison resistance - 毒耐性
	// DESC: Difficulty in getting poisonous - 毒状態異常へのかかりにくさ
	uint16_t resist_poison;

	// NAME: Epidemic resistance - 疫病耐性
	// DESC: Difficulty in getting sick - 疫病状態異常へのかかりにくさ
	uint16_t resist_desease;

	// NAME: Bleeding resistance - 出血耐性
	// DESC: Difficulty in getting bleeding abnormalities - 出血状態異常へのかかりにくさ
	uint16_t resist_blood;

	// NAME: Curse resistance - 呪耐性
	// DESC: Difficulty in dealing with abnormal curse conditions - 呪状態異常へのかかりにくさ
	uint16_t resist_curse;

	// NAME: Replacement model ID for wandering ghost - 徘徊ゴースト時差し替えモデルID
	// DESC: Replacement model when wandering ghost, texture ID - 徘徊ゴースト化したときの差し替えモデル、テクスチャID
	int16_t ghostModelId;

	// NAME: Normal replacement resource ID - 通常時差し替えリソースID
	// DESC: Replace resource ID during normal operation (do not use it unnecessarily) - 通常時のリソースID差し替え（むやみに使わないこと）
	int16_t normalChangeResouceId;

	// NAME: Guard range [deg] - ガード範囲[deg]
	// DESC: Defense range angle when guarding weapons. Pending - 武器のガード時の防御発生範囲角度.保留中
	int16_t guardAngle;

	// NAME: Slash attack cut rate [%] - 斬撃攻撃カット率[％]
	// DESC: Looking at the attack type, what percentage of the damage of the slashing attribute is cut? Specify - 攻撃タイプを見て、斬撃属性のダメージを何％カットするか？を指定
	int16_t slashGuardCutRate;

	// NAME: Batter attack cut rate [%] - 打撃攻撃カット率[％]
	// DESC: Looking at the attack type, what percentage of the damage of the hit attribute is cut? Specify - 攻撃タイプを見て、打撃属性のダメージを何％カットするか？を指定
	int16_t blowGuardCutRate;

	// NAME: Puncture attack cut rate [%] - 刺突攻撃カット率[％]
	// DESC: Looking at the attack type, what percentage of the damage of the piercing attribute is cut? Specify - 攻撃タイプを見て、刺突属性のダメージを何％カットするか？を指定
	int16_t thrustGuardCutRate;

	// NAME: Gaze point of Rock Damipoli 6 - ロックダミポリ6の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint6;

	// NAME: Normal replacement texture character ID - 通常時差し替えテクスチャキャラID
	// DESC: Normal replacement texture character ID (do not use it unnecessarily) - 通常時差し替えテクスチャキャラID（むやみに使わないこと）
	int16_t normalChangeTexChrId;

	// NAME: Display format of drop items - ドロップアイテムの表示形式
	// DESC: Display method when dropping an item (corpse emission or item display) - アイテムドロップ時の表示方法(死体発光orアイテム表示)
	uint16_t dropType;

	// NAME: Knockback cut rate [%] - ノックバックカット率[％]
	// DESC: Decrease value when receiving knockback damage / Specifically, cut the initial knockback speed of the attacking side - ノックバックダメージを受けたときの減少値／具体的には、攻撃側のノックバック初速度をカットする
	uint8_t knockbackRate;

	// NAME: Knockback parameter ID - ノックバックパラメータID
	// DESC: Set the parameter ID used for knockback - ノックバック時に使用するパラメータIDを設定
	uint8_t knockbackParamId;

	// NAME: Fall damage reduction correction [%] - 落下ダメージ軽減補正[％]
	// DESC: Fall damage reduction correction [%] - 落下ダメージ軽減補正[％]
	uint8_t fallDamageDump;

	// NAME: Stamina attack cut rate [%] - スタミナ攻撃カット率[％]
	// DESC: Defense against enemy stamina attacks when guarding successfully - ガード成功時に、敵のスタミナ攻撃に対する防御力
	uint8_t staminaGuardDef;

	// NAME: Sleep tolerance - 睡眠耐性
	// DESC: Difficulty in getting sleep abnormalities - 睡眠状態異常へのかかりにくさ
	uint16_t resist_sleep;

	// NAME: Madness resistance - 発狂耐性
	// DESC: Difficulty in getting mad - 発狂状態異常へのかかりにくさ
	uint16_t resist_madness;

	// NAME: Sleep attack cut rate [%] - 睡眠攻撃カット率[％]
	// DESC: How much to cut the attack power against sleep (set as a special effect parameter) - 睡眠に対する攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t sleepGuardResist;

	// NAME: Mad attack cut rate [%] - 発狂攻撃カット率[％]
	// DESC: How much to cut the attack power against madness (set as a special effect parameter) - 発狂に対する攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t madnessGuardResist;

	// NAME: Gaze point of Rock Damipoli 7 - ロックダミポリ7の注視点
	// DESC: Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1: Invalid) - ロックオンダミポリ22Xをロックしている際に指定したダミポリを注視する（-1：無効）
	int16_t lockGazePoint7;

	// NAME: MP recovery basic speed [% / s] - MP回復基本速度[％/s]
	// DESC: MP recovery basic speed [% / s] - MP回復基本速度[％/s]
	uint8_t mpRecoverBaseVel;

	// NAME: Damage attenuation rate when repelling [%] - はじき時ダメージ減衰率[%]
	// DESC: Set a value to attenuate damage when repelling an attack - 攻撃をはじいた時にダメージを減衰する値を設定
	uint8_t flickDamageCutRate;

	// NAME: Default LOD Param ID - デフォルトLODパラムID
	// DESC: Default LOD Param ID (-1: None) - デフォルトLODパラムID(-1：なし)
	int8_t defaultLodParamId;

	// NAME: Drawing type - 描画タイプ
	// DESC: Drawing type - 描画タイプ
	int8_t drawType;

	// NAME: NPC type - NPCタイプ
	// DESC: NPC type. OK if Zako enemies / boss enemies are distinguished - NPCの種類.ザコ敵/ボス敵が区別されていればOK
	uint8_t npcType;

	// NAME: Team type - チームタイプ
	// DESC: NPC attack hit / not hit, aim / not aim setting - NPCの攻撃が当たる/当たらない、狙う/狙わない設定
	uint8_t teamType;

	// NAME: Movement type - 移動タイプ
	// DESC: Moving method. This changes the control. - 移動方法。これにより制御が変更される.
	uint8_t moveType;

	// NAME: Lock distance - ロック距離
	// DESC: Lock-on distance [m] - ロックオンできる距離[m]
	uint8_t lockDist;

	// NAME: Weakness defense material 1 [SE] - 弱点防御材質1【SE】
	// DESC: Determines the SE that sounds when the weak point is damaged. 1 - 弱点部位ダメージを受けた時に鳴らすSEを判定する。1
	uint16_t materialSe_Weak1;

	// NAME: Weakness protection material 1 [SFX] - 弱点防御材質1【SFX】
	// DESC: Determines the SFX that occurs when the weak point is damaged. 1 - 弱点部位ダメージを受けた時に発生するSFXを判定する。1
	uint16_t materialSfx_Weak1;

	// NAME: Part damage application attack - 部位ダメージ適用攻撃
	// DESC: Set the attack type to apply site damage - 部位ダメージを適用する攻撃タイプを設定する
	uint8_t partsDamageType;

	// NAME: Pledge - 誓約
	// DESC: Pledge type - 誓約タイプ
	uint8_t vowType;

	// NAME: Guard level - ガードレベル
	// DESC: When guarding, which guard motion will the enemy attack? Decide - ガードしたとき、敵の攻撃をどのガードモーションで受けるか？を決める
	int8_t guardLevel;

	// NAME: Combustion SFX type - 燃焼SFXタイプ
	// DESC: SFX type at the time of combustion - 燃焼時のSFXタイプ
	uint8_t burnSfxType;

	// NAME: Poison resistance cut rate [%] - 毒耐性カット率[％]
	// DESC: How much to cut the attack power to poison (set to the special effect parameter) - 毒にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t poisonGuardResist;

	// NAME: Epidemic attack cut rate [%] - 疫病攻撃カット率[％]
	// DESC: How much to cut the attack power (set as a special effect parameter) to make it a plague - 疫病にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t diseaseGuardResist;

	// NAME: Bleeding attack cut rate [%] - 出血攻撃カット率[％]
	// DESC: How much to cut the attack power (set as a special effect parameter) to make bleeding - 出血にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t bloodGuardResist;

	// NAME: Curse attack cut rate [%] - 呪攻撃カット率[％]
	// DESC: How much to cut the attack power (set as a special effect parameter) to make a curse - 呪にする攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t curseGuardResist;

	// NAME: Parry attack power - パリィ攻撃力
	// DESC: Parry attack power. Used by the parrying side - パリィ攻撃力。パリィする側が使用
	uint8_t parryAttack;

	// NAME: Parry defense - パリィ防御力
	// DESC: Parry defense. Used by the parried side. - パリィ防御力。パリィされる側が使用。
	uint8_t parryDefence;

	// NAME: SFX size - SFXサイズ
	// DESC: SFX size - SFXサイズ
	uint8_t sfxSize;

	// NAME: Camera extrusion area radius [m] - カメラ押し出し領域半径[m]
	// DESC: Camera extrusion area radius [m] - カメラ押し出し領域半径[m]
	uint8_t pushOutCamRegionRadius;

	// NAME: Do you want to hit stop - ヒットストップするか
	// DESC: Setting whether to perform hit stop processing - ヒットストップ処理を行うかどうかの設定
	uint8_t hitStopType;

	// NAME: Ladder top termination offset [1 / 10m] - はしご上終端オフセット[1/10m]
	// DESC: Upper side of the ladder end judgment offset - はしご終端判定用オフセット上側
	uint8_t ladderEndChkOffsetTop;

	// NAME: Ladder bottom termination offset [1 / 10m] - はしご下終端オフセット[1/10m]
	// DESC: Lower side of ladder end judgment offset - はしご終端判定用オフセット下側
	uint8_t ladderEndChkOffsetLow;

	// NAME: Ragdoll per camera hit - カメラヒットあたりラグドール
	// DESC: Does the camera hit the enemy ragdoll? (Valid only when hitting the player) - 敵のラグドールにカメラがあたるか。(プレイヤにも当たるときのみ有効)
	uint8_t useRagdollCamHit: 1;

	// NAME: Disable cross-rigid hits - クロスリジッドヒットを無効
	// DESC: If you want to prevent the cross rigid from hitting you ○ - クロスリジッドが自分に当たらないようにしたければ○
	uint8_t disableClothRigidHit: 1;

	// NAME: Whether to use front and back undulation addition - 前後の起伏加算を使用するか
	// DESC: Whether to use front and back undulation addition - 前後の起伏加算を使用するか
	uint8_t useUndulationAddAnimFB: 1;

	// NAME: Is it special attack A? - 特攻Aか
	// DESC: Special attack A? Special attack A damage multiplier will be included in the calculation - 特攻Aか。特攻Aダメージ倍率が計算に含まれるようになります
	uint8_t isWeakA: 1;

	// NAME: Is it a ghost? - 霊体か
	// DESC: The opponent's attack will be able to slip through. The attack hits only when the "anti-spirit weapon" of the weapon para is attacked with the weapon of ○. Be careful not to confuse it with a wandering ghost - 相手の攻撃がすり抜けるようになります。武器パラの「対霊武器」が○の武器で攻撃された時のみ攻撃が当たります。徘徊ゴーストと混同しないように注意
	uint8_t isGhost: 1;

	// NAME: No damage motion when damage is 0 - ダメージ0のときにダメージモーションなしか
	// DESC: Do you not play the damage motion when the damage is 0? - ダメージ0のときにダメージモーションを再生しないか。
	uint8_t isNoDamageMotion: 1;

	// NAME: Do you adjust the angle to the undulations? - 起伏に角度をあわせるか
	// DESC: Do you match the back and forth rotation of the character with the undulations of the ground? Cannot be used for flying characters - キャラの前後回転を地面の起伏に合わせるか。飛行キャラの場合は使用不可
	uint8_t isUnduration: 1;

	// NAME: Will it be a wandering ghost? - 徘徊ゴーストになるか
	// DESC: Will it be a wandering ghost when the player is a client? - プレイヤーがクライアントのときに徘徊ゴーストになるか
	uint8_t isChangeWanderGhost: 1;

	// NAME: Model display mask 0 - モデル表示マスク0
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask0: 1;

	// NAME: Model display mask 1 - モデル表示マスク1
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask1: 1;

	// NAME: Model display mask 2 - モデル表示マスク2
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask2: 1;

	// NAME: Model display mask 3 - モデル表示マスク3
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask3: 1;

	// NAME: Model display mask 4 - モデル表示マスク4
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask4: 1;

	// NAME: Model display mask 5 - モデル表示マスク5
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask5: 1;

	// NAME: Model display mask 6 - モデル表示マスク6
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask6: 1;

	// NAME: Model display mask 7 - モデル表示マスク7
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask7: 1;

	// NAME: Model display mask 8 - モデル表示マスク8
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask8: 1;

	// NAME: Model display mask 9 - モデル表示マスク9
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask9: 1;

	// NAME: Model display mask 10 - モデル表示マスク10
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask10: 1;

	// NAME: Model display mask 11 - モデル表示マスク11
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask11: 1;

	// NAME: Model display mask 12 - モデル表示マスク12
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask12: 1;

	// NAME: Model display mask 13 - モデル表示マスク13
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask13: 1;

	// NAME: Model display mask 14 - モデル表示マスク14
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask14: 1;

	// NAME: Model display mask 15 - モデル表示マスク15
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask15: 1;

	// NAME: Whether to enable swinging - 首振り有効にするか
	// DESC: Do you want to enable the swing set in Param Weaver? - パラムウィーバで設定された首振りを有効にするか。
	uint8_t isEnableNeckTurn: 1;

	// NAME: Is it prohibited to respond? - リスポン禁止か
	// DESC: Do you ban respawn? - リスポンを禁止するか
	uint8_t disableRespawn: 1;

	// NAME: Do you wait for mobile animation? - 移動アニメを待つか
	// DESC: Do you want to play the moving animation until the animation is over? (Like a mayfly dragon.) - 移動アニメをアニメが終わるまで再生するか。（カゲロウ龍の様に。）
	uint8_t isMoveAnimWait: 1;

	// NAME: Whether to reduce crowd processing - 群集用処理軽減するか
	// DESC: Do you want to reduce the processing load during crowds? For babies (preferably phalanx) - 群集時の処理負荷軽減を行なうか。赤子用（できればファランクスも）
	uint8_t isCrowd: 1;

	// NAME: Is it special attack B? - 特攻Bか
	// DESC: Special attack B? Special attack B damage multiplier will be included in the calculation - 特攻Bか。特攻Bダメージ倍率が計算に含まれるようになります
	uint8_t isWeakB: 1;

	// NAME: Is it special attack C? - 特攻Cか
	// DESC: Special attack C? Special attack C damage multiplier will be included in the calculation - 特攻Cか。特攻Cダメージ倍率が計算に含まれるようになります
	uint8_t isWeakC: 1;

	// NAME: Is it special attack D? - 特攻Dか
	// DESC: Special attack D? Special attack D damage multiplier will be included in the calculation - 特攻Dか。特攻Dダメージ倍率が計算に含まれるようになります
	uint8_t isWeakD: 1;

	// NAME: Do you always make a special turn? - 常時特殊旋回するか
	// DESC: Always execute a special turn (even if there is no navigation mesh at the turn destination, the special turn is continuously executed) - 常時特殊旋回を実行するか(旋回移動先にナビメッシュがない場合も特殊旋回を継続実行します)
	uint8_t doesAlwaysUseSpecialTurn: 1;

	// NAME: Is it a riding special attack? - 騎乗特攻か
	// DESC: Will you be the target of a riding special attack (if you are riding)? - （騎乗中であれば）騎乗特攻の対象になるか
	uint8_t isRideAtkTarget: 1;

	// NAME: Whether to use step-over display interpolation - 段差越え表示補間を使用するか
	// DESC: Whether to use step-over display interpolation - 段差越え表示補間を使用するか
	uint8_t isEnableStepDispInterpolate: 1;

	// NAME: Is it a stealth attack target? - ステルス攻撃対象か
	// DESC: Is it a stealth attack target? - ステルス攻撃対象か
	uint8_t isStealthTarget: 1;

	// NAME: No initial death - 初期死亡しない
	// DESC: If you do not make an initial death, TRUE, even if you kill and save it, the corpse will not be reproduced. - 初期死亡をしない場合にTRUE、殺してセーブしても死体再現されません。
	uint8_t disableInitializeDead: 1;

	// NAME: Does it vibrate when hit? - ヒット時振動するか
	// DESC: TRUE if it vibrates when hit. Use when you want to change from a normal hit stop, such as a dead person. - ヒット時振動をする場合TRUE。亡者など、普通のヒットストップと変えたいときにつかう。
	uint8_t isHitRumble: 1;

	// NAME: Does it turn smoothly? - スムーズ旋回するか
	// DESC: Whether to perform interpolation when turning between nodes in route movement - ルート移動でのノード間旋回時、補間を行うか否か
	uint8_t isSmoothTurn: 1;

	// NAME: Is it special attack E? - 特攻Eか
	// DESC: Special attack E? Special attack E damage multiplier will be included in the calculation - 特攻Eか。特攻Eダメージ倍率が計算に含まれるようになります
	uint8_t isWeakE: 1;

	// NAME: Is it special attack F? - 特攻Fか
	// DESC: Special attack F? Special attack F damage multiplier will be included in the calculation - 特攻Fか。特攻Fダメージ倍率が計算に含まれるようになります
	uint8_t isWeakF: 1;

	// NAME: Model display mask 16 - モデル表示マスク16
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask16: 1;

	// NAME: Model display mask 17 - モデル表示マスク17
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask17: 1;

	// NAME: Model display mask 18 - モデル表示マスク18
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask18: 1;

	// NAME: Model display mask 19 - モデル表示マスク19
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask19: 1;

	// NAME: Model display mask 20 - モデル表示マスク20
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask20: 1;

	// NAME: Model display mask 21 - モデル表示マスク21
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask21: 1;

	// NAME: Model display mask 22 - モデル表示マスク22
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask22: 1;

	// NAME: Model display mask 23 - モデル表示マスク23
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask23: 1;

	// NAME: Model display mask 24 - モデル表示マスク24
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask24: 1;

	// NAME: Model display mask 25 - モデル表示マスク25
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask25: 1;

	// NAME: Model display mask 26 - モデル表示マスク26
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask26: 1;

	// NAME: Model display mask 27 - モデル表示マスク27
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask27: 1;

	// NAME: Model display mask 28 - モデル表示マスク28
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask28: 1;

	// NAME: Model display mask 29 - モデル表示マスク29
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask29: 1;

	// NAME: Model display mask 30 - モデル表示マスク30
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask30: 1;

	// NAME: Model display mask 31 - モデル表示マスク31
	// DESC: Displays the model corresponding to the display mask. - 表示マスクに対応するモデルを表示します。
	uint8_t modelDispMask31: 1;

	// NAME: Drop item radius correction - ドロップアイテム半径補正
	// DESC: Radius to be added as a correction to the cylinder radius of normal Item search judgment (applicable to enemy drop items. Used for large characters etc.) - 通常のItem検索判定の円柱半径に、補正として足し合わせる半径(敵ドロップアイテムに適用。大きなキャラなどで使用する)
	float itemSearchRadius;

	// NAME: Height per character [m] - 対キャラあたりの高さ[m]
	// DESC: The height of the capsule per character. - 対キャラ当たりカプセルの高さ.
	float chrHitHeight;

	// NAME: Radius per character [m] - 対キャラあたりの半径[m]
	// DESC: Radius of capsule per character. - 対キャラ当たりカプセルの半径.
	float chrHitRadius;

	// NAME: Special turning type - 特殊旋回のタイプ
	// DESC: Special turning type - 特殊旋回のタイプ
	uint8_t specialTurnType;

	// NAME: Do you get a boss in soul? - ソウルはボス入手か
	// DESC: Do you get a boss in soul? - ソウルはボス入手か
	uint8_t isSoulGetByBoss: 1;

	// NAME: Is it a bullet owner treated as an object? - オブジェクト扱いの弾丸オーナか
	// DESC: If you become the owner of a bullet, a flag that applies the object's damage calculation related to the bullet. Used for damage correction by power. - 弾丸のオーナーとなった場合、弾丸に関連するダメージ計算などをオブジェのものを適用するようにするフラグ。勢力別ダメージ補正で使用。
	uint8_t isBulletOwner_byObject: 1;

	// NAME: Do you use low hit FootIK? - ロウヒットFootIKを使うか？
	// DESC: Whether to use the FootIk filter for low hits - ロウヒット用のFootIkフィルターを使用するか
	uint8_t isUseLowHitFootIk: 1;

	// NAME: Whether to apply PvP damage compensation control - PvPのダメージ補正制御を適用するか
	// DESC: Decide whether to calculate damage as a "player" when calculating damage. If it is invalid, it is treated as an "enemy". - ダメージ計算時に「プレイヤー」としてダメージ計算するのかを決める。無効の場合は「敵」扱い。
	uint8_t isCalculatePvPDamage: 1;

	// NAME: Can only be activated when active in the host world - ホスト世界でアクティブ時のみアクティベート可
	// DESC: Can only be activated when active in the host world - ホスト世界でアクティブ時のみアクティベート可
	uint8_t isHostSyncChr: 1;

	// NAME: Do you want to skip the weakness animation? - 弱点アニメをスキップするか
	// DESC: Weakness damage Whether to skip animation playback. "Part damage rate" and "defense material" are treated as weak points just by not playing the animation. - 弱点ダメージアニメ再生をスキップするかどうか。アニメを再生しないだけで「部位ダメージ率」「防御材質」は弱点として扱われます。
	uint8_t isSkipWeakDamageAnim: 1;

	// NAME: When riding, do you enable the capsule around the rider? - 騎乗された時、乗る側のカプセルあたりを有効にするか
	// DESC: When riding on a character with this parameter ○, the character's Atari remains while riding. - このパラメータが○のキャラに騎乗する際、騎乗中、キャラのアタリが残ったままになる 
	uint8_t isKeepHitOnRide: 1;

	// NAME: Is it a special character? - 特殊あたりキャラか
	// DESC: Is it a special character? - 特殊あたりに当たるキャラか
	uint8_t isSpCollide: 1;

	// NAME: Dark defense - 闇防御力
	// DESC: Damage reduction base value for dark attacks. - 闇攻撃に対するダメージ減少基本値.
	uint16_t def_dark;

	// NAME: Threat level - 脅威度
	// DESC: Threat level. If it is 0, even if the PC is found, "FE that seems to be found" is not displayed. - 脅威度。0ならPCが見つかっても「見つかりそうFE」を表示しない
	uint32_t threatLv;

	// NAME: Threshold for special turning distance [m] - 特殊旋回の使用距離の閾値[m]
	// DESC: Make a special turn when the distance to the target is greater than or equal to the set threshold - ターゲットとの距離が設定された閾値以上の場合に、特殊旋回を行う
	float specialTurnDistanceThreshold;

	// NAME: Foot effect identifier - フットエフェクト識別子
	// DESC: The SFX identifier used in the automatic foot effect. (ZZZ of XYYZZZ) - 自動フットエフェクトで使用するSFX識別子。（XYYZZZのZZZ）
	int32_t autoFootEffectSfxId;

	// NAME: Defensive material 1 [SE] - 防御材質1【SE】
	// DESC: Determine the SE that sounds when damaged. 1. It is OK to set it by appearance. - ダメージを受けたときに鳴らすＳＥを判定する。1.見た目で設定してＯＫ.
	uint16_t materialSe1;

	// NAME: Defensive material 1 [SFX] - 防御材質1【SFX】
	// DESC: Determine the SFX that occurs when you take damage. 1. It is OK to set it by appearance. - ダメージを受けたときに発生するSFXを判定する。1.見た目で設定してＯＫ.
	uint16_t materialSfx1;

	// NAME: Weakness defense material 2 [SE] - 弱点防御材質2【SE】
	// DESC: Determines the SE that sounds when the weak point is damaged. 2 - 弱点部位ダメージを受けた時に鳴らすSEを判定する。2
	uint16_t materialSe_Weak2;

	// NAME: Weakness protection material 2 [SFX] - 弱点防御材質2【SFX】
	// DESC: Determines the SFX that occurs when the weak point is damaged. 2 - 弱点部位ダメージを受けた時に発生するSFXを判定する。2
	uint16_t materialSfx_Weak2;

	// NAME: Defensive material 2 [SE] - 防御材質2【SE】
	// DESC: Determine the SE that sounds when damaged. 2. It is OK to set it by appearance. - ダメージを受けたときに鳴らすＳＥを判定する。2.見た目で設定してＯＫ.
	uint16_t materialSe2;

	// NAME: Defensive material 2 [SFX] - 防御材質2【SFX】
	// DESC: Determine the SFX that occurs when you take damage. 2. It is OK to set it by appearance. - ダメージを受けたときに発生するSFXを判定する。2.見た目で設定してＯＫ.
	uint16_t materialSfx2;

	// NAME: Resident special effect 8 - 常駐特殊効果8
	// DESC: Resident special effect 8 - 常駐特殊効果8
	int32_t spEffectID8;

	// NAME: Resident special effect 9 - 常駐特殊効果9
	// DESC: Resident special effect 9 - 常駐特殊効果9
	int32_t spEffectID9;

	// NAME: Resident special effect 10 - 常駐特殊効果10
	// DESC: Resident special effect 10 - 常駐特殊効果10
	int32_t spEffectID10;

	// NAME: Resident special effects 11 - 常駐特殊効果11
	// DESC: Resident special effects 11 - 常駐特殊効果11
	int32_t spEffectID11;

	// NAME: Resident special effect 12 - 常駐特殊効果12
	// DESC: Resident special effect 12 - 常駐特殊効果12
	int32_t spEffectID12;

	// NAME: Resident special effect 13 - 常駐特殊効果13
	// DESC: Resident special effect 13 - 常駐特殊効果13
	int32_t spEffectID13;

	// NAME: Resident special effect 14 - 常駐特殊効果14
	// DESC: Resident special effect 14 - 常駐特殊効果14
	int32_t spEffectID14;

	// NAME: Resident special effects 15 - 常駐特殊効果15
	// DESC: Resident special effects 15 - 常駐特殊効果15
	int32_t spEffectID15;

	// NAME: Foot decal identifier 1 - フットデカール識別子1
	// DESC: Decal to be attached when a foot effect occurs. Floor material is also taken into consideration - フットエフェクト発生時に貼られるデカール。床材質も考慮される
	int32_t autoFootEffectDecalBaseId1;

	// NAME: Toughness - 強靭度
	// DESC: Basic value of toughness - 強靭度の基本値
	uint32_t toughness;

	// NAME: Toughness recovery time correction value - 強靭度 回復時間補正値
	// DESC: Correction value for toughness recovery time - 強靭度の回復時間用の補正値
	float toughnessRecoverCorrection;

	// NAME: Non-attribute damage multiplier - 無属性ダメージ倍率
	// DESC: Non-attribute damage multiplier. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 無属性ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float neutralDamageCutRate;

	// NAME: Slash damage multiplier - 斬撃ダメージ倍率
	// DESC: Slash damage multiplier. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 斬撃ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float slashDamageCutRate;

	// NAME: Batter damage multiplier - 打撃ダメージ倍率
	// DESC: Batter damage multiplier. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 打撃ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float blowDamageCutRate;

	// NAME: Puncture damage ratio - 刺突ダメージ倍率
	// DESC: Puncture damage ratio. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 刺突ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float thrustDamageCutRate;

	// NAME: Magic damage multiplier - 魔法ダメージ倍率
	// DESC: Magic damage multiplier. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 魔法ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float magicDamageCutRate;

	// NAME: Flame damage multiplier - 火炎ダメージ倍率
	// DESC: Flame damage multiplier. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 火炎ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float fireDamageCutRate;

	// NAME: Electric shock damage ratio - 電撃ダメージ倍率
	// DESC: Electric shock damage ratio. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 電撃ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float thunderDamageCutRate;

	// NAME: Dark damage multiplier - 闇ダメージ倍率
	// DESC: Dark damage multiplier. The final damage value is the value obtained by multiplying the damage calculation result by this value. - 闇ダメージ倍率。ダメージ計算結果にこの値をかけた値が最終ダメージ値になります。
	float darkDamageCutRate;

	// NAME: Dark attack power cut rate [%] - 闇攻撃力カット率[％]
	// DESC: How much to cut the dark attack? - 闇攻撃をどれだけカットするか？
	float darkGuardCutRate;

	// NAME: Cross update priority offset [m] - クロス更新優先度オフセット[m]
	// DESC: Cross update priority offset [m] - クロス更新優先度オフセット[m]
	int8_t clothUpdateOffset;

	// NAME: Weight setting for NPC players - NPCプレイヤー時重量設定
	// DESC: Equipment weight type applied for NPC players - NPCプレイヤーのときに適用される装備重量タイプ
	uint8_t npcPlayerWeightType;

	// NAME: Normal time replacement model ID - 通常時差し替えモデルID
	// DESC: Normal replacement model, texture ID - 通常時の差し替えモデル、テクスチャID
	int16_t normalChangeModelId;

	// NAME: Normal replacement anime character ID - 通常時差し替えアニメキャラID
	// DESC: Replace the target animation with the specified ID Anibnd - 対象のアニメを指定IDのAnibndで差し替える
	int16_t normalChangeAnimChrId;

	// NAME: Paint render target size [pix] - ペイントレンダーターゲットサイズ[pix]
	// DESC: Paint render target size [pix] - ペイントレンダーターゲットサイズ[pix]
	uint16_t paintRenderTargetSize;

	// NAME: Epidemic resistance correction rule ID - 疫病耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the set value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_disease;

	// NAME: Applicable shader ID - 適用シェーダーID
	// DESC: ID of the phantom parameter .xlsm to apply - 適用するファントムパラメータ.xlsmのID
	int32_t phantomShaderId;

	// NAME: Multiplayer correction parameter ID - マルチプレイ補正パラメータID
	// DESC: Multiplayer correction parameter ID - マルチプレイ補正パラメータID
	int32_t multiPlayCorrectionParamId;

	// NAME: FootIK Ankle limit angle_pitch - FootIK足首の制限角度_ピッチ
	// DESC: FootIK Ankle pitch limit angle (-1: no limit). If you have not set Foot End L S in HAT, this angle is used in common with rolls. - FootIK足首のピッチの制限角度（-1：制限なし）。HATでFoot End L Sを設定していない場合はこの角度がロールと共通で使用される。
	float maxAnklePitchAngle;

	// NAME: Cold resistance - 冷気耐性
	// DESC: Difficulty in getting cold air condition abnormal - 冷気状態異常へのかかりにくさ
	uint16_t resist_freeze;

	// NAME: Cold attack cut rate [%] - 冷気攻撃カット率[％]
	// DESC: How much to cut the attack power against cold air (set as a special effect parameter) - 冷気に対する攻撃力（特殊効果パラメータに設定）をどれだけカットするか
	int8_t freezeGuardResist;

	// NAME: pad - pad
	uint8_t pad1[1];

	// NAME: Lock camera parameter ID - ロックカメラパラメータID
	// DESC: The ID of the lock camera parameter applied to the camera when locked on. Highest priority. Unused if -1 - ロックオンされた際にカメラに適用させるロックカメラパラメータのID。最も優先度が高い。-1なら未使用
	int32_t lockCameraParamId;

	// NAME: Resident special effects 16 - 常駐特殊効果16
	// DESC: Resident special effects 16 - 常駐特殊効果16
	int32_t spEffectID16;

	// NAME: Resident special effects 17 - 常駐特殊効果17
	// DESC: Resident special effects 17 - 常駐特殊効果17
	int32_t spEffectID17;

	// NAME: Resident special effects 18 - 常駐特殊効果18
	// DESC: Resident special effects 18 - 常駐特殊効果18
	int32_t spEffectID18;

	// NAME: Resident special effects 19 - 常駐特殊効果19
	// DESC: Resident special effects 19 - 常駐特殊効果19
	int32_t spEffectID19;

	// NAME: Resident special effect 20 - 常駐特殊効果20
	// DESC: Resident special effect 20 - 常駐特殊効果20
	int32_t spEffectID20;

	// NAME: Resident special effect 21 - 常駐特殊効果21
	// DESC: Resident special effect 21 - 常駐特殊効果21
	int32_t spEffectID21;

	// NAME: Resident special effect 22 - 常駐特殊効果22
	// DESC: Resident special effect 22 - 常駐特殊効果22
	int32_t spEffectID22;

	// NAME: Resident special effect 23 - 常駐特殊効果23
	// DESC: Resident special effect 23 - 常駐特殊効果23
	int32_t spEffectID23;

	// NAME: Resident special effect 24 - 常駐特殊効果24
	// DESC: Resident special effect 24 - 常駐特殊効果24
	int32_t spEffectID24;

	// NAME: Resident special effects 25 - 常駐特殊効果25
	// DESC: Resident special effects 25 - 常駐特殊効果25
	int32_t spEffectID25;

	// NAME: Resident special effect 26 - 常駐特殊効果26
	// DESC: Resident special effect 26 - 常駐特殊効果26
	int32_t spEffectID26;

	// NAME: Resident special effect 27 - 常駐特殊効果27
	// DESC: Resident special effect 27 - 常駐特殊効果27
	int32_t spEffectID27;

	// NAME: Resident special effects 28 - 常駐特殊効果28
	// DESC: Resident special effects 28 - 常駐特殊効果28
	int32_t spEffectID28;

	// NAME: Resident special effect 29 - 常駐特殊効果29
	// DESC: Resident special effect 29 - 常駐特殊効果29
	int32_t spEffectID29;

	// NAME: Resident special effect 30 - 常駐特殊効果30
	// DESC: Resident special effect 30 - 常駐特殊効果30
	int32_t spEffectID30;

	// NAME: Resident special effects 31 - 常駐特殊効果31
	// DESC: Resident special effects 31 - 常駐特殊効果31
	int32_t spEffectID31;

	// NAME: Central angle of lockable area [deg] - ロック不可領域の中心角[deg]
	// DESC: Create a conical lock-on non-lockable area beneath the enemy. The angle of the size of the cone. Can be changed temporarily from TAE - 敵の真下に円錐状のロックオン不可領域を作る。円錐の広さの角度。TAEから一時的に変更可能
	float disableLockOnAng;

	// NAME: Cross OffLOD level - クロスOffLODレベル
	// DESC: Set the LOD level to turn off cross processing - クロスの処理を切るLODレベルを設定する
	int8_t clothOffLodLevel;

	// NAME: Whether to use FootIK results to match undulations - 起伏にあわせるのにFootIK結果を用いるか
	// DESC: Do you use the FootIK result to match your character to the undulations of the ground? Cannot be used for flying characters - キャラを地面の起伏に合わせる際に、FootIK結果を用いるか。飛行キャラの場合は使用不可
	uint8_t isUseFootIKNormalByUnduration: 1;

	// NAME: Whether to ground the capsule at the time of initial death - 初期死亡時にカプセル接地するか
	// DESC: Whether to ground the capsule at the time of initial death - 初期死亡時にカプセル接地するか
	uint8_t attachHitInitializeDead: 1;

	// NAME: Do you want to remove it from the group reward judgment? - グループ報酬判定から外すか
	// DESC: Group reward: In the judgment of "all dead", characters with this parameter ○ are excluded from the judgment. - グループ報酬：「全員死亡」の判定において、このパラメータが○のキャラは判定から除外する 
	uint8_t excludeGroupRewardCheck: 1;

	// NAME: Is Rock Damipoli (for Enemy) 212 Effective? - ロックダミポリ(エネミー用)212が有効か
	// DESC: Is Rock Damipoli (for Enemy) 212 Effective? - ロックダミポリ(エネミー用)212が有効か
	uint8_t enableAILockDmyPoly_212: 1;

	// NAME: Is Rock Damipoli (for Enemy) 213 Effective? - ロックダミポリ(エネミー用)213が有効か
	// DESC: Is Rock Damipoli (for Enemy) 213 Effective? - ロックダミポリ(エネミー用)213が有効か
	uint8_t enableAILockDmyPoly_213: 1;

	// NAME: Is Rock Damipoli (for Enemy) 214 Effective? - ロックダミポリ(エネミー用)214が有効か
	// DESC: Is Rock Damipoli (for Enemy) 214 Effective? - ロックダミポリ(エネミー用)214が有効か
	uint8_t enableAILockDmyPoly_214: 1;

	// NAME: Excluded from open_XB1 - オープン_XB1から除外
	// DESC: Excluded from open_XB1 - オープン_XB1から除外
	uint8_t disableActivateOpen_xb1: 1;

	// NAME: Excluded from Legacy_XB1 - レガシー_XB1から除外
	// DESC: Excluded from Legacy_XB1 - レガシー_XB1から除外
	uint8_t disableActivateLegacy_xb1: 1;

	// NAME: HP Est Bottle / MP Est Bottle Recovery Number Parameter ID - HPエスト瓶／MPエスト瓶回復数パラメータID
	// DESC: When the character dies, the data ID of the est usage count recovery parameter .xlsm, which is the same as the value, is acquired and the est bottle is recovered. Unused if -1 - キャラクター死亡時に値と同じ エスト使用回数回復パラメータ.xlsm　のデータIDを取得してエスト瓶を回復させる。 -1なら未使用
	int16_t estusFlaskRecoveryParamId;

	// NAME: Role name text ID - ロール名テキストID
	// DESC: Specify the role name at the time of summoning. -1: Use the default role name of the target spirit body. 0: No display. 1 or more: Used as a text ID. - 召喚時のロール名を指定する。-1:対象霊体のデフォルトロール名を使用。0:表示なし。1以上:テキストＩＤとして利用。
	int32_t roleNameId;

	// NAME: HP & MP Est Bottle Recovery Lottery Probability - HP&MPエスト瓶回復 抽選確率
	// DESC: HP / MP est recovery probability when defeating an enemy. The numerator is obtained from the NPC para with 10000 as the denominator. - 敵を倒した際のHP/MPエストの回復確率。10000 を分母とし、分子をNPCパラから取得する。 
	uint16_t estusFlaskLotPoint;

	// NAME: HP Est Bottle Recovery Lottery Probability - HPエスト瓶回復 抽選確率
	// DESC: Recovery probability of MP Est when defeating an enemy. The numerator is obtained from the NPC para with 10000 as the denominator. - 敵を倒した際のMPエストの回復確率。10000 を分母とし、分子をNPCパラから取得する。 
	uint16_t hpEstusFlaskLotPoint;

	// NAME: MP Est Bottle Recovery Lottery Probability - MPエスト瓶回復 抽選確率
	// DESC: Recovery probability of MP Est when defeating an enemy. The numerator is obtained from the NPC para with 10000 as the denominator. - 敵を倒した際のMPエストの回復確率。10000 を分母とし、分子をNPCパラから取得する。 
	uint16_t mpEstusFlaskLotPoint;

	// NAME: HP & MP Est Bottle Recovery Addition lottery probability at the time of defeat - HP&MPエスト瓶回復 落選時 加算抽選確率
	// DESC: Next time probability increase value when you miss the HP / MP est recovery lottery. Addition value of numerator. - HP/MPエスト回復抽選に外れた際の次回確率上昇値。分子の加算値。
	uint16_t estusFlaskRecovery_failedLotPointAdd;

	// NAME: HP Est Bottle Recovery Addition lottery probability at the time of defeat - HPエスト瓶回復 落選時 加算抽選確率
	// DESC: The next probability increase value when you miss the HP Est Recovery Lottery. Addition value of numerator. - HPエスト回復抽選に外れた際の次回確率上昇値。分子の加算値。
	uint16_t hpEstusFlaskRecovery_failedLotPointAdd;

	// NAME: MP est bottle recovery Addition lottery probability at the time of defeat - MPエスト瓶回復 落選時 加算抽選確率
	// DESC: The next probability increase value when the MP est recovery lottery is missed. Addition value of numerator. - MPエスト回復抽選に外れた際の次回確率上昇値。分子の加算値。
	uint16_t mpEstusFlaskRecovery_failedLotPointAdd;

	// NAME: Will you be a wandering ghost using a phantom shader? - ファントムシェーダを使用して徘徊ゴーストになるか
	// DESC: Phantom shader with ID specified only on the guest side Specify the phantom shader ID and make it an illusion - ゲスト側でだけ指定されたIDのファントムシェーダIDを指定して幻影化
	int32_t WanderGhostPhantomId;

	// NAME: Hearing head size [m] - 聴覚用 頭のサイズ[m]
	// DESC: The offset size to be set instead of the capsule offset at the time of hearing judgment. Use this value as an offset only if it is set to 0 or higher. - 聴覚判定時のカプセルオフセットの代わりに、設定するオフセットサイズ。0以上が設定されている場合のみ、この値をオフセットとして使用。
	float hearingHeadSize;

	// NAME: Sound bank ID - サウンドバンクID
	// DESC: Sound bank ID can be specified -1: Use the bank of character ID (resource name) - サウンドバンクIDが指定できます -1：キャラID(リソース名)のバンクを使用
	int16_t SoundBankId;

	// NAME: Maximum anteroposterior angle to match undulations - 起伏にあわせる最大前後角度
	// DESC: The upper limit angle when adjusting the front-back angle to the undulation. If the total length is long, it is better to set it lower. - 起伏に前後の角度を合わせる場合の上限角度。全長が長い場合には低めに設定したほうがよいです。
	uint8_t forwardUndulationLimit;

	// NAME: Maximum left-right angle to match undulations - 起伏にあわせる最大左右角度
	// DESC: Upper limit angle when adjusting the left and right angles to the undulations. If the total length is long, it is better to set it lower. - 起伏に左右の角度を合わせる場合の上限角度。全長が長い場合には低めに設定したほうがよいです。
	uint8_t sideUndulationLimit;

	// NAME: Platoon Deactive Movement Speed [m / s] - 小隊ディアクティブ移動の移動速度[m/s]
	// DESC: Platoon Deactive Movement Speed [m / s] - 小隊ディアクティブ移動の移動速度[m/s]
	float deactiveMoveSpeed;

	// NAME: Distance to switch to platoon deactive movement [m] - 小隊ディアクティブ移動に切り替わる距離[m]
	// DESC: Distance to switch to platoon deactive movement [m] - 小隊ディアクティブ移動に切り替わる距離[m]
	float deactiveMoveDist;

	// NAME: Sound source effective distance [m] - サウンド音源有効距離[m]
	// DESC: The distance from the player for which the character sound source is valid. -1: Effective at all distances - キャラ音源が有効なプレイヤーからの距離です。-1：全距離で有効
	float enableSoundObjDist;

	// NAME: Correction gain value to match undulations - 起伏にあわせる補正ゲイン値
	// DESC: Set the speed when adjusting the angle to the undulations - 起伏に角度を合わせる際の速度を設定する
	float undulationCorrectGain;

	// NAME: Foot decal identifier 2 - フットデカール識別子2
	// DESC: Decal to be attached when a foot effect occurs. Floor material is also taken into consideration - フットエフェクト発生時に貼られるデカール。床材質も考慮される
	int16_t autoFootEffectDecalBaseId2;

	// NAME: Foot decal identifier 3 - フットデカール識別子3
	// DESC: Decal to be attached when a foot effect occurs. Floor material is also taken into consideration - フットエフェクト発生時に貼られるデカール。床材質も考慮される
	int16_t autoFootEffectDecalBaseId3;

	// NAME: Retarget reference character ID - リターゲット参照キャラID
	// DESC: Character ID to be referred to when specifying the motion retarget destination - モーションのリターゲット先の指定の際に参照するキャラID
	int16_t RetargetReferenceChrId;

	// NAME: SFX resource bank ID - SFXリソースバンクID
	// DESC: SFX resource bank ID can be specified -1: Use the bank of character ID (resource name) - SFXリソースバンクIDが指定できます -1：キャラID(リソース名)のバンクを使用
	int16_t SfxResBankId;

	// NAME: Update and activate priorities - 更新とアクティベイトの優先度
	// DESC: Used to determine the activation / renewal level. The larger it is, the lower the update level will be even if you are far from the player. - アクティベート・更新レベルの決定に使用する。大きいほどプレイヤーから離れていても更新レベルが下がらない。
	float updateActivatePriolity;

	// NAME: Pre-death navigation mesh flag - 死亡前ナビメッシュフラグ
	// DESC: Flag the value of the touching Nav Mesh while the character is alive. Does not follow the movement. - キャラクターが生存してる間、触れているナビメッシュに値のフラグを設定する。移動に追従しない。
	uint8_t chrNavimeshFlag_Alive;

	// NAME: Post-mortem navigation mesh flag - 死亡後ナビメッシュフラグ
	// DESC: Flag the value on the touching Nav Mesh while the character is dying. Does not follow the movement. - キャラクターが死亡してる間、触れているナビメッシュに値のフラグを設定する。移動に追従しない。
	uint8_t chrNavimeshFlag_Dead;

	// NAME: pad - pad
	uint8_t pad7[1];

	// NAME: Wheel control type - 車輪制御タイプ
	// DESC: Wheel control type - 車輪制御タイプ
	uint8_t wheelRotType;

	// NAME: Wheel radius - 車輪の半径
	// DESC: Specify the radius of the wheel [m] - 車輪の半径を指定[m]
	float wheelRotRadius;

	// NAME: Retarget movement amount magnification - リターゲット移動量倍率
	// DESC: Magnification of movement amount at the time of retargeting - リターゲット時の移動量の倍率
	float retargetMoveRate;

	// NAME: Ladder warp position offset - はしごワープ位置オフセット
	// DESC: Offsets along the Damipoly Z-axis at the specified value. Both positive and negative numbers can be specified. - 指定された値でダミポリZ軸方向にオフセットします。正数・負数どちらも指定可能です。
	float ladderWarpOffset;

	// NAME: Load asset ID - 読み込みアセットID
	// DESC: Asset ID to be read in connection with character loading (for dynamic generation of characters, etc.). - キャラロード時に関連して読み込むアセットID（キャラが動的に生成するなど用。
	int32_t loadAssetId;

	// NAME: Overlap camera target lock Damipoli ID - オーバーラップカメラ対象ロックダミポリID
	// DESC: Set the Damipoly ID (220-227) to enable the overlap camera. If it is -1, it will be invalid. - オーバーラップカメラを有効にするダミポリID(220～227)を設定します。-1の場合は無効になります。
	int32_t overlapCameraDmypolyId;

	// NAME: Resident Material Expansion Para ID0 - 常駐マテリアル拡張パラID0
	// DESC: Resident Material Expansion Para ID0 - 常駐マテリアル拡張パラID0
	int32_t residentMaterialExParamId00;

	// NAME: Resident Material Expansion Para ID1 - 常駐マテリアル拡張パラID1
	// DESC: Resident Material Expansion Para ID1 - 常駐マテリアル拡張パラID1
	int32_t residentMaterialExParamId01;

	// NAME: Resident Material Expansion Para ID2 - 常駐マテリアル拡張パラID2
	// DESC: Resident Material Expansion Para ID2 - 常駐マテリアル拡張パラID2
	int32_t residentMaterialExParamId02;

	// NAME: Resident Material Expansion Para ID3 - 常駐マテリアル拡張パラID3
	// DESC: Resident Material Expansion Para ID3 - 常駐マテリアル拡張パラID3
	int32_t residentMaterialExParamId03;

	// NAME: Resident Material Expansion Para ID4 - 常駐マテリアル拡張パラID4
	// DESC: Resident Material Expansion Para ID4 - 常駐マテリアル拡張パラID4
	int32_t residentMaterialExParamId04;

	// NAME: Item lottery ID_for enemies - ネムリ時アイテム抽選ID_エネミー用
	// DESC: Specify the lottery ID_for enemies of the item to be acquired when collecting Nemuri. Please set only one of them. - ネムリ収集時に取得するアイテムの抽選ID_エネミー用を指定。どちらか片方のみ設定してください。
	int32_t sleepCollectorItemLotId_enemy;

	// NAME: Nemuri item lottery ID_for map - ネムリ時アイテム抽選ID_マップ用
	// DESC: Specify for the lottery ID_map of the item to be acquired when collecting Nemuri. Please set only one of them. - ネムリ収集時に取得するアイテムの抽選ID_マップ用を指定。どちらか片方のみ設定してください。
	int32_t sleepCollectorItemLotId_map;

	// NAME: FootIK Appearance height correction ON gain value - FootIK見た目の高さ補正ONゲイン値
	// DESC: FootIK Appearance height correction ON gain value - FootIK見た目の高さ補正ONゲイン値
	float footIkErrorOnGain;

	// NAME: FootIK Appearance height correction OFF gain value - FootIK見た目の高さ補正OFFゲイン値
	// DESC: FootIK Appearance height correction OFF gain value - FootIK見た目の高さ補正OFFゲイン値
	float footIkErrorOffGain;

	// NAME: Additional sound bank ID - 追加サウンドバンクID
	// DESC: You can specify an additional sound bank ID -1 or 0: No addition (SEQ 16135) - 追加のサウンドバンクIDが指定できます -1 or 0：追加なし(SEQ16135)
	int16_t SoundAddBankId;

	// NAME: Defensive material variation value - 防御材質バリエーション値
	// DESC: It is a value used in combination with the defense material to classify abnormal conditions, damage SFX, and SE. SEQ16473 - 防御材質と組み合わせて状態異常、ダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
	uint8_t materialVariationValue;

	// NAME: Weakness defense material variation value - 弱点防御材質バリエーション値
	// DESC: It is a value used for variation of abnormal condition, damage SFX, SE in combination with weak point defense material. SEQ16473 - 弱点防御材質と組み合わせて状態異常、ダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
	uint8_t materialVariationValue_Weak;

	// NAME: SA endurance - SA耐久力
	// DESC: Super armor durability value - スーパーアーマー耐久値
	float superArmorDurability;

	// NAME: SA recovery speed correction value - SA回復速度補正値
	// DESC: Correct the SA recovery speed by multiplying the SA basic recovery amount - SA基礎回復量に乗算してSA回復速度を補正する
	float saRecoveryRate;

	// NAME: SA attack cut rate [%] - SA攻撃カット率[％]
	// DESC: Cut rate of SA damage when guard is successful - ガード成功時のSＡダメージのカット率
	float saGuardCutRate;

	// NAME: Bleeding resistance correction rule ID - 出血耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the setting value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_blood;

	// NAME: Curse resistance correction rule ID - 呪耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the set value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_curse;

	// NAME: Cold resistance correction rule ID - 冷気耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the setting value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_freeze;

	// NAME: Sleep tolerance correction rule ID - 睡眠耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the set value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_sleep;

	// NAME: Madness resistance correction rule ID - 発狂耐性 補正ルールID
	// DESC: When the abnormal condition is activated, the maximum value is temporarily changed by using the set value of the abnormal condition resistance correction parameter. - 状態異常の発動時、状態異常耐性補正パラメータの設定値を使って、一時的に最大値を変動させる
	int32_t resistCorrectId_madness;

	// NAME: Character death tutorial judgment flag ID - キャラ死亡チュートリアル判定フラグID
	// DESC: Event flag ID for the tutorial when the character is defeated for the first time. Flag ON when the character dies. - 初めてキャラ倒した時のチュートリアル用のイベントフラグID。キャラ死亡時にフラグON。
	uint32_t chrDeadTutorialFlagId;

	// NAME: Step crossing display interpolation time - 段差越え表示補間時間
	// DESC: Step crossing display interpolation time - 段差越え表示補間時間
	float stepDispInterpolateTime;

	// NAME: Step crossing display activation judgment value - 段差越え表示起動判定値
	// DESC: Step crossing display activation judgment value - 段差越え表示起動判定値
	float stepDispInterpolateTriggerValue;

	// NAME: Lock score correction value - ロックスコア補正値
	// DESC: Lock score correction value - ロックスコア補正値
	float lockScoreOffset;

	// NAME: Padding 12 - パディング12
	uint8_t pad12[8];
};

#endif
