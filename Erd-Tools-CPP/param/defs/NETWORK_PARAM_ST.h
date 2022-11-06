/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_NETWORK_PARAM_ST_H
#define _PARAMDEF_NETWORK_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 10
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct NETWORK_PARAM_ST {

	// NAME: Sign height offset [m] - サイン高さオフセット[m]
	float signVerticalOffset;

	// NAME: Sign position correction maximum distance [m] - サイン位置補正最大距離[m]
	float maxSignPosCorrectionRange;

	// NAME: Summon desired timeout time [seconds] - 召喚希望タイムアウト時間[秒]
	float summonTimeoutTime;

	// NAME: reserve - 予約
	uint8_t pad_0[4];

	// NAME: Message display interval [seconds] during registration of signature accumulation - サイン溜まり登録中メッセージ表示間隔[秒]
	float signPuddleActiveMessageIntervalSec;

	// NAME: Key guide vertical range [m] - キーガイド垂直範囲[m]
	float keyGuideHeight_0;

	// NAME: Waiting time for reacquisition of summoning sign (during depopulation) [seconds] - 召喚サイン再取得待機時間(過疎時)[秒]
	float reloadSignIntervalTime1;

	// NAME: Summon sign reacquisition waiting time [seconds] - 召喚サイン再取得待機時間[秒]
	float reloadSignIntervalTime2;

	// NAME: Maximum number of summon signs you can have (overall) - 召喚サイン所持可能数上限(全体)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadSignTotalCount_0;

	// NAME: Maximum number of summon signs you can have (cell) - 召喚サイン所持可能数上限(セル)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadSignCellCount_0;

	// NAME: Summon sign update waiting time [seconds] - 召喚サイン更新待機時間[秒]
	float updateSignIntervalTime;

	// NAME: Exclusive horizontal range for drawing between summon signs [m] - 召喚サイン間描画排他水平範囲[m]
	float basicExclusiveRange_0;

	// NAME: Exclusive vertical range for drawing between summon signs [m] - 召喚サイン間描画排他垂直範囲[m]
	float basicExclusiveHeight_0;

	// NAME: Summon sign character model drawing waiting time [seconds] - 召喚サインキャラモデル描画待機時間[秒]
	float previewChrWaitingTime;

	// NAME: Summon sign PC drawing distance [m] - 召喚サインPC間描画距離[m]
	float signVisibleRange_0;

	// NAME: Summon sign acquisition cell range (horizontal) - 召喚サイン取得セル範囲(水平)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupHorizontalRange_0;

	// NAME: Summon sign acquisition cell range (upward) - 召喚サイン取得セル範囲(上方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupTopRange_0;

	// NAME: Summon sign acquisition cell range (downward) - 召喚サイン取得セル範囲(下方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupBottomRange_0;

	// NAME: White spirit sign display time limit lower limit magnification - 白霊サイン表示制限時間下限倍率
	float minWhitePhantomLimitTimeScale;

	// NAME: Small spirit sign display time limit lower limit magnification - 小霊サイン表示制限時間下限倍率
	float minSmallPhantomLimitTimeScale;

	// NAME: White spirit sign keyword extension magnification - 白霊サインキーワード延長倍率
	float whiteKeywordLimitTimeScale;

	// NAME: Ghost sign keyword extension magnification - 小霊サインキーワード延長倍率
	float smallKeywordLimitTimeScale;

	// NAME: Dark Spirit Sign Keyword Extension Magnification - 闇霊サインキーワード延長倍率
	float blackKeywordLimitTimeScale;

	// NAME: Dragon Spirit Sign Keyword Extension Magnification - 竜霊サインキーワード延長倍率
	float dragonKeywordLimitTimeScale;

	// NAME: Sign acquisition limit - サイン取得上限
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t singGetMax;

	// NAME: Sign download span - サインダウンロードスパン
	float signDownloadSpan;

	// NAME: Sign upload span - サインアップロードスパン
	float signUpdateSpan;

	// NAME: reserve - 予約
	uint8_t signPad[4];

	// NAME: Number of intruders acquired - 乱入先取得数
	uint32_t maxBreakInTargetListCount;

	// NAME: Intrusion request interval [seconds] - 乱入リクエスト間隔[秒]
	float breakInRequestIntervalTimeSec;

	// NAME: Intrusion request timeout time [seconds] - 乱入リクエストタイムアウト時間[秒]
	float breakInRequestTimeOutSec;

	// NAME: reserve - 予約
	uint8_t pad_1[4];

	// NAME: Key guide horizontal range [m] - キーガイド水平範囲[m]
	float keyGuideRange;

	// NAME: Key guide vertical range [m] - キーガイド垂直範囲[m]
	float keyGuideHeight_1;

	// NAME: Number of blood characters acquired (overall) - 血文字取得数(全体)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadSignTotalCount_1;

	// NAME: Number of blood characters acquired (cell, new order) - 血文字取得数(セル、新順)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadNewSignCellCount;

	// NAME: Number of blood characters acquired (cell, random) - 血文字取得数(セル、ランダム )
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadRandomSignCellCount;

	// NAME: Upper limit of the number of blood characters that can be possessed (overall) - 血文字所持可能数上限(全体)
	// DESC: Actually u16 is enough - 本当はu16くらいで十分
	uint32_t maxSignTotalCount_0;

	// NAME: Upper limit of the number of blood characters that can be possessed (cell) - 血文字所持可能数上限(セル)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t maxSignCellCount_0;

	// NAME: Blood character drawing exclusive horizontal range [m] - 血文字間描画排他水平範囲[m]
	float basicExclusiveRange_1;

	// NAME: Blood character drawing exclusive vertical range [m] - 血文字間描画排他垂直範囲[m]
	float basicExclusiveHeight_1;

	// NAME: Blood character PC drawing distance [m] - 血文字PC間描画距離[m]
	float signVisibleRange_1;

	// NAME: Maximum number of written blood characters history - 書いた血文字履歴件数上限
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t maxWriteSignCount;

	// NAME: Maximum number of blood characters read - 読んだ血文字履歴件数上限
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t maxReadSignCount;

	// NAME: Blood character reacquisition waiting time [seconds] - 血文字再取得待機時間[秒]
	float reloadSignIntervalTime_0;

	// NAME: Blood character acquisition cell range (horizontal) - 血文字取得セル範囲(水平)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupHorizontalRange_1;

	// NAME: Blood character acquisition cell range (upward) - 血文字取得セル範囲(上方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupTopRange_1;

	// NAME: Blood character acquisition cell range (downward) - 血文字取得セル範囲(下方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupBottomRange_1;

	// NAME: Blood character data retention period upper limit [seconds] - 血文字データ保持期間上限[秒]
	// DESC: Actually u16 is enough - 本当はu16くらいで十分
	uint32_t lifeTime_0;

	// NAME: Blood character download interval - 血文字ダウンロード間隔
	float downloadSpan_0;

	// NAME: Blood character evaluation number Download interval - 血文字評価数ダウンロード間隔
	float downloadEvaluationSpan;

	// NAME: reserve - 予約
	uint8_t pad_2[4];

	// NAME: Allowable distance between bloodstain position and illusion start position [m] - 血痕位置と幻影開始位置間の許容距離[m]
	// DESC: If the distance between the bloodstain position and the illusion start position is farther than this value, the server will not be registered. - 血痕位置と幻影開始位置の間の距離がこの値より離れている場合はサーバの登録を行わない
	float deadingGhostStartPosThreshold;

	// NAME: Key guide vertical range [m] - キーガイド垂直範囲[m]
	float keyGuideHeight_2;

	// NAME: Player Bloodstain Key Guide Horizontal Range [m] - プレイヤー血痕キーガイド水平範囲[m]
	float keyGuideRangePlayer;

	// NAME: Player Bloodstain Key Guide Vertical Range [m] - プレイヤー血痕キーガイド垂直範囲[m]
	float keyGuideHeightPlayer;

	// NAME: Number of blood stains acquired (overall) - 血痕取得数(全体)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadSignTotalCount_2;

	// NAME: Number of blood stains obtained (cell) - 血痕取得数(セル)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadSignCellCount_1;

	// NAME: Upper limit of the number of blood stains that can be possessed (overall) - 血痕所持可能数上限(全体)
	// DESC: Actually u16 is enough - 本当はu16くらいで十分
	uint32_t maxSignTotalCount_1;

	// NAME: Maximum number of blood stains (cell) - 血痕所持可能数上限(セル)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t maxSignCellCount_1;

	// NAME: Waiting time for reacquisition of blood stains [seconds] - 血痕再取得待機時間[秒]
	float reloadSignIntervalTime_1;

	// NAME: Bloodstain PC drawing distance [m] - 血痕PC間描画距離[m]
	float signVisibleRange_2;

	// NAME: Exclusive horizontal range for drawing between blood stains [m] - 血痕間描画排他水平範囲[m]
	float basicExclusiveRange_2;

	// NAME: Exclusive vertical range for drawing between blood stains [m] - 血痕間描画排他垂直範囲[m]
	float basicExclusiveHeight_2;

	// NAME: Blood stain acquisition cell range (horizontal) - 血痕取得セル範囲(水平)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupHorizontalRange_2;

	// NAME: Blood stain acquisition cell range (upward) - 血痕取得セル範囲(上方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupTopRange_2;

	// NAME: Blood stain acquisition cell range (downward) - 血痕取得セル範囲(下方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupBottomRange_2;

	// NAME: Bloodstain data retention period upper limit [seconds] - 血痕データ保持期間上限[秒]
	// DESC: Actually u16 is enough - 本当はu16くらいで十分
	uint32_t lifeTime_1;

	// NAME: Death illusion record total time [seconds] - 死亡幻影記録合計時間[秒]
	float recordDeadingGhostTotalTime;

	// NAME: Minimum recording time of death illusion [seconds] - 死亡幻影の最低記録時間[秒]
	// DESC: Death illusions less than this recording time will not register the server - この記録時間未満の死亡幻影はサーバの登録を行わない
	float recordDeadingGhostMinTime;

	// NAME: Bloodstain download interval - 血痕ダウンロード間隔
	float downloadSpan_1;

	// NAME: Petrified blood stain drawing limit distance [m] - 石化血痕描画制限距離[m]
	// DESC: For open fields. When a stone statue is generated, it can be generated if the distance between the PC and the generation position is greater than or equal to this value. - オープンフィールド用。石像生成時にPC～生成位置間の距離がこの値以上ならば生成できる
	float statueCreatableDistance;

	// NAME: Number of illusions acquired (overall) - 幻影取得数(全体)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadGhostTotalCount;

	// NAME: Number of illusions acquired (cell) - 幻影取得数(セル)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t reloadGhostCellCount;

	// NAME: Maximum number of illusions you can have (overall) - 幻影所持可能数上限(全体)
	// DESC: Actually u16 is enough - 本当はu16くらいで十分
	uint32_t maxGhostTotalCount;

	// NAME: Hostile PC replay recording start distance [m] - 敵対PCリプレイ記録開始距離[m]
	float distanceOfBeginRecordVersus;

	// NAME: Hostile PC replay recording end distance [m] - 敵対PCリプレイ記録終了距離[m]
	float distanceOfEndRecordVersus;

	// NAME: Wandering illusion upload interval [seconds] - 徘徊幻影アップロード間隔[秒]
	float updateWanderGhostIntervalTime;

	// NAME: Battle illusion upload interval [seconds] - 対戦幻影アップロード間隔[秒]
	float updateVersusGhostIntervalTime;

	// NAME: Phantom recording time [seconds] - 幻影記録時間[秒]
	float recordWanderingGhostTime;

	// NAME: Minimum recording time of wandering illusion [seconds] - 徘徊幻影の最低記録時間[秒]
	// DESC: Wandering illusions less than this recording time do not register the server - この記録時間未満の徘徊幻影はサーバの登録を行わない
	float recordWanderingGhostMinTime;

	// NAME: Kagaribi illusion upload interval [seconds] - 篝火幻影アップロード間隔[秒]
	float updateBonfireGhostIntervalTime;

	// NAME: Phantom reproduction distance (in the field of view) [seconds] - 幻影再生距離（視野内）[秒]
	float replayGhostRangeOnView;

	// NAME: Phantom playback distance (out of field of view) [seconds] - 幻影再生距離（視野外）[秒]
	float replayGhostRangeOutView;

	// NAME: Kagaribi illusion Playing time [seconds] - 篝火幻影再生時間[秒]
	float replayBonfireGhostTime;

	// NAME: Kagaribi illusion placement minimum distance [seconds] - 篝火幻影配置最小距離[秒]
	// DESC: Do not place bonfire illusions less than this distance from the bonfire - 篝火からこの距離未満の場所には篝火幻影を配置しない
	float minBonfireGhostValidRange;

	// NAME: Kagaribi illusion placement maximum distance [seconds] - 篝火幻影配置最大距離[秒]
	// DESC: Do not place bonfire illusions beyond this distance from the bonfire - 篝火からこの距離以上の場所には篝火幻影を配置しない
	float maxBonfireGhostValidRange;

	// NAME: Phantom playback interval lower limit [seconds] - 幻影再生間隔下限[秒]
	float minReplayIntervalTime;

	// NAME: Phantom playback interval upper limit [seconds] - 幻影再生間隔上限[秒]
	float maxReplayIntervalTime;

	// NAME: Phantom periodic acquisition interval [seconds] - 幻影定期取得間隔[秒]
	float reloadGhostIntervalTime;

	// NAME: Phantom acquisition cell range (horizontal) - 幻影取得セル範囲(水平)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupHorizontalRange_3;

	// NAME: Phantom acquisition cell range (upward) - 幻影取得セル範囲(上方向)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t cellGroupTopRange_3;

	// NAME: Phantom bonfire mode phantom parameter ID (codename) - 幻影篝火モードファントムパラメータID(コードネーム)
	// DESC: Phantom bonfire mode phantom parameter ID used when codename matches - コードネーム一致のときに使われる幻影篝火モードファントムパラメータID
	int32_t replayBonfirePhantomParamIdForCodename;

	// NAME: Phantom bonfire mode playback applicable distance - 幻影篝火モード再生適用距離
	float replayBonfireModeRange;

	// NAME: Phantom bonfire mode phantom parameter ID - 幻影篝火モードファントムパラメータID
	// DESC: Phantom bonfire mode phantom parameter ID - 幻影篝火モードファントムパラメータID
	int32_t replayBonfirePhantomParamId;

	// NAME: reserve - 予約
	uint8_t ghostpad[4];

	// NAME: Ring search interval [seconds] - 指輪検索間隔[秒]
	float reloadVisitListCoolTime;

	// NAME: Maximum number of rescue blue spirits appearing - 救援青霊出現数上限
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t maxCoopBlueSummonCount;

	// NAME: Upper limit of the number of bell guard ghosts that appear - 鐘守灰霊出現数上限
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t maxBellGuardSummonCount;

	// NAME: Number of ring search destinations acquired - 指輪検索先取得数
	uint32_t maxVisitListCount;

	// NAME: Relief Blue Spirit reload time minimum [sec] - 救援青霊リロード時間　最小[sec]
	float reloadSearch_CoopBlue_Min;

	// NAME: Relief Blue Spirit reload time maximum [sec] - 救援青霊リロード時間　最大[sec]
	float reloadSearch_CoopBlue_Max;

	// NAME: Kanemori reload time minimum [sec] - 鐘守リロード時間　最小[sec]
	float reloadSearch_BellGuard_Min;

	// NAME: Kanemori reload time maximum [sec] - 鐘守リロード時間　最大[sec]
	float reloadSearch_BellGuard_Max;

	// NAME: Mouse King Reload Time Minimum [sec] - ネズミの王リロード時間　最小[sec]
	float reloadSearch_RatKing_Min;

	// NAME: Mouse King Reload Time Maximum [sec] - ネズミの王リロード時間　最大[sec]
	float reloadSearch_RatKing_Max;

	// NAME: reserve - 予約
	uint8_t visitpad00[8];

	// NAME: SRTT upper limit [milliseconds] - SRTT上限[ミリ秒]
	float srttMaxLimit;

	// NAME: SRTT upper limit (when stable) [milliseconds] - SRTT上限(安定時)[ミリ秒]
	float srttMeanLimit;

	// NAME: RTT mean deviation upper limit [milliseconds] - RTT平均偏差上限[ミリ秒]
	float srttMeanDeviationLimit;

	// NAME: Dark spirit time limit Acceleration time [seconds] - 闇霊制限時間加速時間[秒]
	float darkPhantomLimitBoostTime;

	// NAME: Dark spirit time limit acceleration time magnification - 闇霊制限時間加速時倍率
	float darkPhantomLimitBoostScale;

	// NAME: Multiplayer invalidation life - マルチプレイ無効化寿命
	float multiplayDisableLifeTime;

	// NAME: Abyss Spirit Multiplayer Count - 深淵霊マルチプレイ回数
	// DESC: The number of times the abyss spirit enters the host in the abyss area - 深淵エリアで、深淵霊がホストに入ってこれる回数
	uint8_t abyssMultiplayLimit;

	// NAME: Minimum time for a ghost to warp [seconds] - 霊体がワープするまでの最低時間[秒]
	uint8_t phantomWarpMinimumTime;

	// NAME: Delay time until returning after using black crystal [seconds] - 黒水晶使用後に帰還するまでのディレイ時間[秒]
	uint8_t phantomReturnDelayTime;

	// NAME: Time-out time waiting for disconnection - 切断待ちのタイムアウト時間
	uint8_t terminateTimeoutTime;

	// NAME: Penalty addition value without LAN - LAN抜きによるペナルティ加算値
	uint16_t penaltyPointLanDisconnect;

	// NAME: Penalty addition value for sign-out - サインアウトによるペナルティ加算値
	uint16_t penaltyPointSignout;

	// NAME: Penalty addition value due to power failure - 電源断によるペナルティ加算値
	uint16_t penaltyPointReboot;

	// NAME: Penalty value that activates the penalty - ペナルティが発動するペナルティ値
	uint16_t penaltyPointBeginPenalize;

	// NAME: Sales time limit for "Line Reason" [seconds] - 「線の理」の販売制限時間[秒]
	float penaltyForgiveItemLimitTime;

	// NAME: Area search rate: Relief Blue Spirit [0-100] - 全域検索率：救援青霊[0-100]
	// DESC: Percentage of searching for intrusion targets from all areas (%) - 全域から侵入対象を検索する割合（％）
	uint8_t allAreaSearchRate_CoopBlue;

	// NAME: Area search rate: Retribution Blue Spirit [0-100] - 全域検索率：報復青霊[0-100]
	// DESC: Percentage of searching for intrusion targets from all areas (%) - 全域から侵入対象を検索する割合（％）
	uint8_t allAreaSearchRate_VsBlue;

	// NAME: Area search rate: Kanemori Ashrei [0-100] - 全域検索率：鐘守灰霊[0-100]
	// DESC: Percentage of searching for intrusion targets from all areas (%) - 全域から侵入対象を検索する割合（％）
	uint8_t allAreaSearchRate_BellGuard;

	// NAME: HP recovery rate at the time of blood character evaluation [0-100] - 血文字評価時のHP回復割合[0-100]
	uint8_t bloodMessageEvalHealRate;

	// NAME: Kogane Rei Success Return Host Reward ID - 小金霊成功帰還ホスト報酬ID
	uint32_t smallGoldSuccessHostRewardId;

	// NAME: Play area invalidation distance near the door [m] - ドア付近プレイ領域無効化距離[m]
	// DESC: The area around the black door that separates the multiplayer area is set to the systematically invalid play area (-1). At that time, make the invalid area thicker with this parameter on the thinner side of the OBJ's bounding box with a black door. - マルチプレイ領域を区切る黒扉の周辺を、システム的に無効なプレイ領域（-1）にします。その際、無効領域を黒扉のOBJのバウンディングボックスの薄い方を、このパラメータで太らせます。
	float doorInvalidPlayAreaExtents;

	// NAME: Maximum number of simultaneous displays of signs - サイン最大同時表示数
	uint8_t signDisplayMax;

	// NAME: Maximum number of blood stains displayed at the same time - 血痕最大同時表示数
	uint8_t bloodStainDisplayMax;

	// NAME: Maximum number of blood characters displayed at the same time - 血文字最大同時表示数
	uint8_t bloodMessageDisplayMax;

	// NAME: reserve - 予約
	uint8_t pad00[9];

	// NAME: reserve - 予約
	uint8_t pad10[32];

	// NAME: Summon message is displayed at interval [seconds] - 召喚メッセージが表示間隔[秒]
	float summonMessageInterval;

	// NAME: Host periodic update request interval [seconds] - ホスト定期更新リクエスト間隔[秒]
	float hostRegisterUpdateTime;

	// NAME: Host guest join wait timeout time [seconds] - ホストのゲスト参加待ちタイムアウト時間[秒]
	float hostTimeOutTime;

	// NAME: Authentication wait timeout time from guest host [seconds] - ゲストのホストからの認証待ちタイムアウト時間[秒]
	float guestUpdateTime;

	// NAME: Guest PlayNo Sync wait timeout time [seconds] - ゲストPlayNo同期待ちタイムアウト時間[秒]
	float guestPlayerNoTimeOutTime;

	// NAME: Host PlayNo Sync wait timeout time [seconds] - ホストPlayNo同期待ちタイムアウト時間[秒]
	float hostPlayerNoTimeOutTime;

	// NAME: RequestSearchQuickMatch limit value - RequestSearchQuickMatchのlimit値
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t requestSearchQuickMatchLimit;

	// NAME: Maximum number of people when searching for avatar battles (unused) - アバター戦検索時の最大人数(未使用)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t AvatarMatchSearchMax;

	// NAME: Minimum number of people when searching for battle royale (unused) - バトルロイヤル戦検索時の最少人数(未使用)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t BattleRoyalMatchSearchMin;

	// NAME: Maximum number of people when searching for battle royale (unused) - バトルロイヤル戦検索時の最大人数(未使用)
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t BattleRoyalMatchSearchMax;

	// NAME: reserve - 予約
	uint8_t pad11[8];

	// NAME: Maximum number of people to get a list of visitors - 訪問対象者リスト取得最大値
	// DESC: Actually u8 is enough - 本当はu8くらいで十分
	uint32_t VisitorListMax;

	// NAME: Time-out waiting for visit - 訪問待ちタイムアウト
	float VisitorTimeOutTime;

	// NAME: Visitor list download interval [seconds] - 訪問者リストダウンロード間隔[秒]
	float DownloadSpan;

	// NAME: Visit search message display interval [seconds] - 訪問先検索メッセージ表示間隔[秒]
	// DESC: Display interval [seconds] of messages sent by visiting guests while searching for a destination - 訪問ゲストが訪問先を探してる間に出すメッセージの表示間隔[秒]
	float VisitorGuestRequestMessageIntervalSec;

	// NAME: Wandering illusion life - 徘徊幻影寿命
	// DESC: Wandering illusion life - 徘徊幻影寿命
	float wanderGhostIntervalLifeTime;

	// NAME: reserve - 予約
	// DESC: reserve - 予約
	uint8_t pad13[12];

	// NAME: Yellow robe's old man waiting time out - 黄衣の翁待ちタイムアウト
	float YellowMonkTimeOutTime;

	// NAME: Yellow robe list download interval - 黄衣の翁リストダウンロード間隔
	float YellowMonkDownloadSpan;

	// NAME: Yellow robe's whole flow time-out - 黄衣の翁全体フロータイムアウト
	float YellowMonkOverallFlowTimeOutTime;

	// NAME: reserve - 予約
	uint8_t pad14_0[4];

	// NAME: reserve - 予約
	uint8_t pad14_1[8];
};

#endif
