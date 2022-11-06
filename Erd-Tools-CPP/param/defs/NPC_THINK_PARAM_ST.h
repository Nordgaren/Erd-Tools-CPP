/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_NPC_THINK_PARAM_ST_H
#define _PARAMDEF_NPC_THINK_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct NPC_THINK_PARAM_ST {

	// NAME: Do you remove it from the NT version output? - NT版出力から外すか
	// DESC: Parameters marked with ○ are excluded in the NT version package. - ○をつけたパラメータをNT版パッケージでは除外します
	uint8_t disableParam_NT: 1;

	// NAME: Reserve for package output 1 - パッケージ出力用リザーブ1
	// DESC: Reserve for package output 1 - パッケージ出力用リザーブ1
	uint8_t disableParamReserve1: 7;

	// NAME: Reserve for package output 2 - パッケージ出力用リザーブ2
	// DESC: Reserve for package output 2 - パッケージ出力用リザーブ2
	uint8_t disableParamReserve2[3];

	// NAME: Logic script ID - ロジックスクリプトID
	// DESC: Set the ID of the logic created by the script. - スクリプトで作成したロジックのIDを設定します。
	int32_t logicId;

	// NAME: Battle goal ID - 戦闘ゴールID
	// DESC: Battle goal ID - 戦闘ゴールID
	int32_t battleGoalID;

	// NAME: Searching enemy vision_distance [m] - 索敵視覚_距離[m]
	// DESC: Search range by visual search. - 索敵視覚による索敵範囲.
	uint16_t searchEye_dist;

	// NAME: Searching enemy vision_angle (width) [deg] - 索敵視覚_角度（幅）[deg]
	// DESC: Search range by visual search. - 索敵視覚による索敵範囲.
	uint8_t searchEye_angY;

	// NAME: Do you not detour a huge enemy? - 巨大敵を迂回しないか
	// DESC: Do you not detour a huge enemy? - 巨大敵を迂回しないか
	uint8_t isNoAvoidHugeEnemy: 1;

	// NAME: Do you want to pull out the sword? - 納刀抜刀するか
	// DESC: Do you want to pull out the sword? - 納刀抜刀するか
	uint8_t enableWeaponOnOff: 1;

	// NAME: Do you aim for Rock Damipoli (for enemies)? - ロックダミポリ(エネミー用)を狙うか
	// DESC: Do you aim for Rock Damipoli (for enemies)? - ロックダミポリ(エネミー用)を狙うか
	uint8_t targetAILockDmyPoly: 1;

	// NAME: Padding - パディング
	uint8_t pad8: 5;

	// NAME: Special effects ID for ranged attacks - 遠隔攻撃用特殊効果ID
	// DESC: Special effects ID for ranged attacks - 遠隔攻撃用特殊効果ID
	int32_t spEffectId_RangedAttack;

	// NAME: Search enemy Lv1 Target Forget time [sec] - 索敵Lv1ターゲット忘れる時間[sec]
	// DESC: Search enemy Lv1 Target Time to forget. - 索敵Lv1ターゲット忘れる時間。
	float searchTargetLv1ForgetTime;

	// NAME: Search enemy Lv2 Target Forget time [sec] - 索敵Lv2ターゲット忘れる時間[sec]
	// DESC: Search enemy Lv2 time to forget the target. - 索敵Lv2ターゲット忘れる時間。
	float searchTargetLv2ForgetTime;

	// NAME: Back Home time when touching an enemy wall [sec] - 敵壁接触時のBackHome時間[sec]
	// DESC: The life of the BackToHome goal when it touches an enemy wall that blocks the block - ブロックをさえぎる敵壁に接触したとき、BackToHomeゴールの寿命
	float BackHomeLife_OnHitEneWal;

	// NAME: Time to forget the visual target [sec] - 視覚ターゲット忘れる時間[sec]
	// DESC: Time to forget the visual target. - 視覚ターゲット忘れる時間。
	float SightTargetForgetTime;

	// NAME: EzState number to do when you get stuck - 動けなくなったときに行うEzState番号
	// DESC: An action that automatically takes place when a destructible object stops it. - 破壊可能なオブジェクトによって動きが止まっている場合、自動的に実行する行動。
	int32_t idAttackCannotMove;

	// NAME: Hearing_distance [m] - 聴覚_距離[m]
	// DESC: Hearing search range ... - 聴覚による索敵範囲.。
	float ear_dist;

	// NAME: Companion call response action anime ID - 仲間呼び 応答アクションアニメID
	// DESC: Animation ID (EzStateAnimID) when responding - 応答する時のアニメID(EzStateAnimID)
	int32_t callHelp_ActionAnimId;

	// NAME: Fellow call _ Fellow call action ID - 仲間呼び_仲間呼びアクションID
	// DESC: Action ID (EzStateAnimID) when calling a friend - 仲間呼ぶときのアクションID(EzStateAnimID)
	int32_t callHelp_CallActionId;

	// NAME: Visual_distance [m] - 視覚_距離[m]
	// DESC: Visual search range. - 視覚による索敵範囲.
	uint16_t eye_dist;

	// NAME: Whether to use a guard during action - 行動時ガード使用するか
	// DESC: Whether to guard against actions (assumed when returning home, looking toward the target) - 行動にガードするか（帰宅時、ターゲットの方を見ている時想定）
	uint8_t isGuard_Act;

	// NAME: Padding - パディング
	uint8_t pad6[1];

	// NAME: Hearing influence cut distance [m] - 聴覚　影響カット距離[m]
	// DESC: The distance to reduce the size of the sound source. You will not hear any sound below this distance. - 音源のサイズを小さくする距離。この距離未満の音が聞こえなくなります。
	uint16_t ear_soundcut_dist;

	// NAME: Smell _ distance [m] - 嗅覚_距離[m]
	// DESC: Search range by smell. - 嗅覚による索敵範囲.
	uint16_t nose_dist;

	// NAME: Distance to go home no matter what [m] - 何があっても帰宅する距離[m]
	// DESC: COMMON_SetBattleActLogic argument - COMMON_SetBattleActLogicの引き数
	uint16_t maxBackhomeDist;

	// NAME: Distance to return home while fighting [m] - 戦闘しつつ帰宅する距離[m]
	// DESC: COMMON_SetBattleActLogic argument - COMMON_SetBattleActLogicの引き数
	uint16_t backhomeDist;

	// NAME: Distance to give up and fight to return to the nest [m] - 巣に帰るのをあきらめて戦闘する距離[m]
	// DESC: COMMON_SetBattleActLogic argument - COMMON_SetBattleActLogicの引き数
	uint16_t backhomeBattleDist;

	// NAME: Non-combat action time when conscious of the enemy [sec] - 敵を意識しているときの非戦闘行動時間[sec]
	// DESC: COMMON_SetBattleActLogic argument - COMMON_SetBattleActLogicの引き数
	uint16_t nonBattleActLife;

	// NAME: When returning home: Time to look at the target [sec] - 帰宅時：ターゲットを見ている時間[sec]
	// DESC: When returning home: Time to look at the target [sec] - 帰宅時：ターゲットを見ている時間[sec]
	uint16_t BackHome_LookTargetTime;

	// NAME: When returning home: Distance to see the target [m] - 帰宅時：ターゲットを見ている距離[m]
	// DESC: When returning home: Distance to see the target [m] - 帰宅時：ターゲットを見ている距離[m]
	uint16_t BackHome_LookTargetDist;

	// NAME: Time to forget the sound target [sec] - 音ターゲット忘れる時間[sec]
	// DESC: Time to forget the sound target. - 音ターゲット忘れる時間。
	float SoundTargetForgetTime;

	// NAME: Battle start distance [m] - 戦闘開始距離[m]
	uint16_t BattleStartDist;

	// NAME: Calling friends Your fellow group ID - 仲間呼び 自分の仲間グループID
	// DESC: My fellow group ID - 自分の仲間グループID
	uint16_t callHelp_MyPeerId;

	// NAME: Companion call Companion group ID - 仲間呼び 呼ぶ仲間グループID
	// DESC: Companion group ID to call a companion - 仲間を呼ぶ対象となる仲間グループID
	uint16_t callHelp_CallPeerId;

	// NAME: Damage impact rate [%] - ダメージ影響率[％]
	// DESC: Damage impact rate acquisition (target system evaluation information) - ダメージ影響率取得(ターゲットシステム評価情報)
	uint16_t targetSys_DmgEffectRate;

	// NAME: Team attack influence [0-100] - チーム攻撃影響力[0-100]
	// DESC: A value for determining the number of simultaneous attacks in a team. Increasing the value reduces the number of people who can participate in the attack at the same time. - チーム内の同時攻撃人数を決めるための値。値を大きくすると、同時に攻撃参加できる人数が少なくなる。
	uint8_t TeamAttackEffectivity;

	// NAME: Vision_angle (height) [deg] - 視覚_角度（高さ）[deg]
	// DESC: Visual search range. - 視覚による索敵範囲.
	uint8_t eye_angX;

	// NAME: Visual_angle (width) [deg] - 視覚_角度（幅）[deg]
	// DESC: Visual search range. - 視覚による索敵範囲.
	uint8_t eye_angY;

	// NAME: Does not affect the darkness - 暗闇影響しない
	// DESC: Whether the alert vision_distance and battle start distance are not affected by the darkness - 警戒視覚_距離、戦闘開始距離が暗闇による影響を受けないようにするか
	uint8_t disableDark;

	// NAME: Role in the caravan - キャラバンでの役割
	// DESC: Role in the caravan - キャラバンでの役割
	uint8_t caravanRole;

	// NAME: Companion call_minimum distance to the target [m] - 仲間呼び_ターゲットとの最低距離[m]
	// DESC: If it is closer than this value, you cannot call a friend. - この値より近い場合は仲間呼びできない.
	uint8_t callHelp_CallValidMinDistTarget;

	// NAME: Calling friends_Effective distance to call friends [m] - 仲間呼び_仲間を呼ぶ有効距離[m]
	// DESC: Do not call if the companion is farther than this value. - この値より仲間が遠い場合は呼ばない。
	uint8_t callHelp_CallValidRange;

	// NAME: Time to forget after answering a fellow call [sec] - 仲間呼び 応答してから忘れる時間[sec]
	// DESC: Time to respond - 応答する時間
	uint8_t callHelp_ForgetTimeByArrival;

	// NAME: Minimum waiting time for response [ssm => ss. mSec] - 応答時の待機最小時間[ssm=>ss．mSec]
	// DESC: Minimum time for the first wait goal of the response goal [101 => 10.1sec] - 応答ゴールの最初の待機ゴールでの最小時間[101=>10．1sec]
	uint8_t callHelp_MinWaitTime;

	// NAME: Maximum waiting time for response [ssm => ss. mSec] - 応答時の待機最大時間[ssm=>ss．mSec]
	// DESC: Maximum time for the first waiting goal of the response goal [101 => 10.1sec] - 応答ゴールの最初の待機ゴールでの最大時間[101=>10．1sec]
	uint8_t callHelp_MaxWaitTime;

	// NAME: Goal action: alert / normal sound - ゴールアクション：警戒状態/通常音
	// DESC: Goal action: Target becomes alert due to normal sound detection - ゴールアクション：ターゲットが通常音の感知により警戒状態になった
	uint8_t goalAction_ToCaution;

	// NAME: Hearing_audible AI sound level - 聴覚_可聴AI音レベル
	// DESC: How good your ears are - どれくらい耳が良いのか
	uint8_t ear_listenLevel;

	// NAME: Behavior type after responding to a fellow call - 仲間呼び 応答後の行動タイプ
	// DESC: Action type to target position after response - 応答後、目標位置までの行動タイプ
	uint8_t callHelp_ReplyBehaviorType;

	// NAME: Do not move the path - パス移動しない
	// DESC: Whether to move directly without following the path even if a path move command comes - パス移動命令が来てもパスを辿らずに直接移動するか
	uint8_t disablePathMove;

	// NAME: Do you want to skip the arrival judgment by the line of sight? - 視線による到着判定をスキップするか？
	// DESC: Do you want to skip the arrival judgment by the line of sight? When set to On, arrival judgment is performed even if the line of sight does not pass. - 視線による到着判定をスキップするか？Onにすると、視線が通っていなくても、到着判定を行う。
	uint8_t skipArrivalVisibleCheck;

	// NAME: Will you be a companion? - 取巻き役になるか？
	// DESC: Thinking attribute: When turned on, it plays a role of surrounding. - 思考属性：ＯＮにすると取巻き役を演じます。
	uint8_t thinkAttr_doAdmirer;

	// NAME: Can you pass the flag "cliff"? - フラグ「崖」通れるか？
	// DESC: Can you pass through the node "cliff"? (def: 1) - ノード「崖」を通過できるか？(def:1)
	uint8_t enableNaviFlg_Edge: 1;

	// NAME: Can the flag "wide" pass? - フラグ「広い」通れるか？
	// DESC: Can you pass through the node "wide"? (def: 1) - ノード「広い」を通過できるか？(def:1)
	uint8_t enableNaviFlg_LargeSpace: 1;

	// NAME: Can you pass the flag "ladder"? - フラグ「梯子」通れるか？
	// DESC: Can you pass through the node "ladder"? (def: 0) - ノード「梯子」を通過できるか？(def:0)
	uint8_t enableNaviFlg_Ladder: 1;

	// NAME: Can you go through the flag "hole"? - フラグ「穴」通れるか？
	// DESC: Can you go through the node "hole"? (def: 0) - ノード「穴」を通過できるか？(def:0)
	uint8_t enableNaviFlg_Hole: 1;

	// NAME: Can you go through the flag "door"? - フラグ「扉」通れるか？
	// DESC: Can you pass through the node "door"? (def: 0) - ノード「扉」を通過できるか？(def:0)
	uint8_t enableNaviFlg_Door: 1;

	// NAME: Can you pass the flag "in the wall"? - フラグ「壁中」通れるか？
	// DESC: Can you pass through the node "in the wall"? (def: 0) - ノード「壁中」を通過できるか？(def:0)
	uint8_t enableNaviFlg_InSideWall: 1;

	// NAME: Can you pass the flag "lava"? - フラグ「溶岩」通れるか？
	// DESC: Can you pass through the node "lava"? (def: 0) - ノード「溶岩」を通過できるか？(def:0)
	uint8_t enableNaviFlg_Lava: 1;

	// NAME: Can you pass the flag "cliff"? (Normal / alert state) - フラグ「崖」通れるか？（通常／警戒状態）
	// DESC: Can you pass the node "cliff" under normal / alert conditions? (def: 1) - 通常／警戒状態でノード「崖」を通過できるか？(def:1)
	uint8_t enableNaviFlg_Edge_Ordinary: 1;

	// NAME: Really booked - ほんとに予約
	// DESC: If you need a new flag, put it here (Not Padding) - フラグが新しく必要になったらここにいれます（NotPadding)
	uint8_t enableNaviFlg_reserve1[3];

	// NAME: Search enemy Lv0 → Lv1 threshold - 索敵Lv0→Lv1の閾値
	// DESC: Search enemy Lv0 → Lv1 threshold - 索敵Lv0→Lv1の閾値
	int32_t searchThreshold_Lv0toLv1;

	// NAME: Search enemy Lv1 → Lv2 threshold - 索敵Lv1→Lv2の閾値
	// DESC: Search enemy Lv1 → Lv2 threshold - 索敵Lv1→Lv2の閾値
	int32_t searchThreshold_Lv1toLv2;

	// NAME: Platoon reaction delay time [sec] - 小隊反応遅延時間[sec]
	// DESC: Platoon reaction delay time [sec] - 小隊反応遅延時間[sec]
	float platoonReplyTime;

	// NAME: Platoon reaction additional random time [sec] - 小隊反応追加ランダム時間[sec]
	// DESC: Platoon reaction additional random time [sec] - 小隊反応追加ランダム時間[sec]
	float platoonReplyAddRandomTime;

	// NAME: Searching enemy vision_angle (height) [deg] - 索敵視覚_角度(高さ)[deg]
	// DESC: Searching enemy vision_angle (height) [deg] - 索敵視覚_角度(高さ)[deg]
	uint8_t searchEye_angX;

	// NAME: Do you want to overwrite the combat view? - 戦闘視界を上書きするか？
	// DESC: Do you want to overwrite the battle view? - 戦闘視界を上書きするか
	uint8_t isUpdateBattleSight;

	// NAME: Battle Vision_Overwrite Distance [m] - 戦闘視覚_上書き距離[m]
	// DESC: Battle Vision_Overwrite Distance [m] - 戦闘視覚_上書き距離[m]
	uint16_t battleEye_updateDist;

	// NAME: Battle Vision_Overwrite Angle (Height) [deg] - 戦闘視覚_上書き角度(高さ)[deg]
	// DESC: Battle Vision_Overwrite Angle (Height) [deg] - 戦闘視覚_上書き角度(高さ)[deg]
	uint8_t battleEye_updateAngX;

	// NAME: Battle Vision_Overwrite Angle (Width) [deg] - 戦闘視覚_上書き角度(幅)[deg]
	// DESC: Battle Vision_Overwrite Angle (Width) [deg] - 戦闘視覚_上書き角度(幅)[deg]
	uint8_t battleEye_updateAngY;

	// NAME: Padding - パディング
	uint8_t pad4[16];

	// NAME: Visual_occurrence distance [m] - 視覚_発生距離[m]
	// DESC: The viewing angle start position is behind this distance from the center of the character. - キャラの中心からこの距離後ろが視角開始位置になる
	uint16_t eye_BackOffsetDist;

	// NAME: Visual_cut distance [m] - 視覚_カット距離[m]
	// DESC: This distance is not recognized from the viewing angle generation position - 視角発生位置からこの距離は認識しない
	uint16_t eye_BeginDist;

	// NAME: Behavior type at the time of path search failure / homecoming limit - パス検索失敗/帰巣限界時の行動種別
	// DESC: Default action type to be performed when the path search fails, when the end point of the alternative path is reached / when the homecoming limit distance is reached - パス検索失敗時、代替パスの終点に到達した際/帰巣限界距離まで到達した際に行うデフォルトの行動種別
	uint8_t actTypeOnFailedPath;

	// NAME: Goal Action: Alert / Important Sound - ゴールアクション：警戒状態/重要音
	// DESC: Goal action: Target becomes alert due to detection of important sound - ゴールアクション：ターゲットが重要音の感知により警戒状態になった
	uint8_t goalAction_ToCautionImportant;

	// NAME: Changeover animation ID for ranged attacks - 遠隔攻撃用持ち替えアニメID
	// DESC: Reference ID for AI attack parameters - AI攻撃パラメータの参照ID
	int32_t shiftAnimeId_RangedAttack;

	// NAME: Behavior when path search fails (during non-combat) - パス検索失敗時の挙動（非戦闘中）
	// DESC: Target [None] Sometimes, the action to be taken after rewriting the current location to a nest - ターゲット【なし】時に、現在地点を巣に書き換えた後に取る行動 
	uint8_t actTypeOnNonBtlFailedPath;

	// NAME: Buddy AI - バディAI
	// DESC: Thinking for a buddy - バディ用の思考か
	uint8_t isBuddyAI;

	// NAME: Goal action: Search enemy Lv1 - ゴールアクション：索敵Lv1
	// DESC: Goal action: Target becomes Lv1 - ゴールアクション：ターゲットが索敵Lv1になった
	uint8_t goalAction_ToSearchLv1;

	// NAME: Goal action: Search enemy Lv2 - ゴールアクション：索敵Lv2
	// DESC: Goal action: Target became enemy Lv2 - ゴールアクション：ターゲットが索敵Lv2になった
	uint8_t goalAction_ToSearchLv2;

	// NAME: Do you use the edge "jump" (non-combat state)? - エッジ「ジャンプ」使うか（非戦闘状態）
	// DESC: Whether to jump over the user edge for jumping (non-combat state) - ジャンプ用ユーザーエッジを飛び越えて移動するか(非戦闘状態)
	uint8_t enableJumpMove;

	// NAME: Do not move around - 回避移動しない
	// DESC: Do you want to turn off the behavior (local steering) that tries to move while avoiding other characters? - 他のキャラクターを回避しながら移動しようとする挙動(ローカルステアリング)をオフにするか？
	uint8_t disableLocalSteering;

	// NAME: Goal action: Memory target state - ゴールアクション：記憶ターゲット状態
	// DESC: Goal action: Lost target - ゴールアクション：ターゲットを見失った
	uint8_t goalAction_ToDisappear;

	// NAME: Goal action: Start normal state - ゴールアクション：通常状態開始
	// DESC: Action when transitioning to the normal state - 通常状態に遷移したときのアクション
	uint8_t changeStateAction_ToNormal;

	// NAME: Time to forget memory target [sec] - 記憶ターゲット忘れる時間[sec]
	// DESC: Time to forget the memory target. - 記憶ターゲット忘れる時間。
	float MemoryTargetForgetTime;

	// NAME: Ranged attack anime ID - 遠隔攻撃アニメID
	// DESC: A parameter that specifies the attack ID issued by the enemy when making a ranged attack - 遠隔攻撃する際にエネミーが出す攻撃IDを指定するパラメータ
	int32_t rangedAttackId;

	// NAME: Do you use the edge "jump" (non-combat state)? - エッジ「飛び降り」使うか（非戦闘状態）
	// DESC: Allows AI to pass the jumping edge in non-combat state - AIが非戦闘状態で、飛び降りエッジを通行できるようにする
	uint8_t useFall_onNormalCaution;

	// NAME: Do you use the edge "jump" (combat state)? - エッジ「飛び降り」使うか（戦闘状態）
	// DESC: Allow AI to pass through the jumping edge in combat - AIが戦闘状態で、飛び降りエッジを通行できるようにする 
	uint8_t useFall_onSearchBattle;

	// NAME: Do you use the edge "jump" (combat state)? - エッジ「ジャンプ」使うか（戦闘状態）
	// DESC: Whether to jump over the user edge for jumping (combat state) - ジャンプ用ユーザーエッジを飛び越えて移動するか(戦闘状態)
	uint8_t enableJumpMove_onBattle;

	// NAME: Behavior when addicted to the homecoming limit - 帰巣限界でハマった時の挙動
	// DESC: Behavior when addicted to the homecoming limit - 帰巣限界でハマった時の挙動
	uint8_t backToHomeStuckAct;

	// NAME: Padding - パディング
	// DESC: pad - pad
	uint8_t pad3[4];

	// NAME: Behavior ID1 - 振る舞いID1
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId01;

	// NAME: Behavior ID2 - 振る舞いID2
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId02;

	// NAME: Behavior ID3 - 振る舞いID3
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId03;

	// NAME: Behavior ID4 - 振る舞いID4
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId04;

	// NAME: Behavior ID5 - 振る舞いID5
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId05;

	// NAME: Behavior ID6 - 振る舞いID6
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId06;

	// NAME: Behavior ID7 - 振る舞いID7
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId07;

	// NAME: Behavior ID8 - 振る舞いID8
	// DESC: Corresponds to the behavior ID of the sound target that can be heard - 聴くことのできる音ターゲットの振る舞いIDに対応
	int32_t soundBehaviorId08;

	// NAME: Special effect ID at the time of sword delivery - 納刀時特殊効果ID
	// DESC: Special effect ID at the time of sword delivery - 納刀時特殊効果ID
	int32_t weaponOffSpecialEffectId;

	// NAME: Special effect ID when pulling out a sword - 抜刀時特殊効果ID
	// DESC: Special effect ID when pulling out a sword - 抜刀時特殊効果ID
	int32_t weaponOnSpecialEffectId;

	// NAME: Katana Anime ID - 納刀アニメID
	// DESC: Katana Anime ID - 納刀アニメID
	int32_t weaponOffAnimId;

	// NAME: Sword animation ID - 抜刀アニメID
	// DESC: Sword animation ID - 抜刀アニメID
	int32_t weaponOnAnimId;

	// NAME: Amazing anime ID - 驚くアニメID
	// DESC: Amazing anime ID - 驚くアニメID
	int32_t surpriseAnimId;
};

#endif
