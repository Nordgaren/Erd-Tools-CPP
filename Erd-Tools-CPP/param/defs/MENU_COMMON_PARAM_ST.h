/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_MENU_COMMON_PARAM_ST_H
#define _PARAMDEF_MENU_COMMON_PARAM_ST_H
#pragma once
#include <inttypes.h>

// Data Version: 1
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct MENU_COMMON_PARAM_ST {

	// NAME: Solo play Fade out start time at death [seconds] - ソロプレイ死亡時フェードアウト開始時間[秒]
	// DESC: How many seconds have passed after "YOU DIED" is displayed at the time of death of solo play to start fading out? - ソロプレイ死亡時で「YOU DIED」表示後、何秒経過したらフェードアウトを開始するか
	float soloPlayDeath_ToFadeOutTime;

	// NAME: White, Black Ghost Fade Out Start Time [Seconds] - ホワイト、ブラックゴースト死亡時フェードアウト開始時間[秒]
	// DESC: How many seconds have passed after "YOU DIED" is displayed when a white or black ghost dies to start fading out? - ホワイト、ブラックゴースト死亡時で「YOU DIED」表示後、何秒経過したらフェードアウトを開始するか
	float partyGhostDeath_ToFadeOutTime;

	// NAME: Maximum player HP - プレイヤー最大HPの上限
	// DESC: It is used to calculate what percentage of the gauge length provided by the resource is used when displaying the HP gauge. - HPゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
	int32_t playerMaxHpLimit;

	// NAME: Maximum player MP - プレイヤー最大MPの上限
	// DESC: It is used to calculate what percentage of the gauge length provided by the resource is used when displaying the MP gauge. - MPゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
	int32_t playerMaxMpLimit;

	// NAME: Maximum player SP - プレイヤー最大SPの上限
	// DESC: It is used to calculate what percentage of the gauge length provided by the resource is used when displaying the SP gauge. - SPゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
	int32_t playerMaxSpLimit;

	// NAME: Action panel switching judgment_player speed [m / sec] - アクションパネル切り替え判定_プレイヤー速度[m/sec]
	// DESC: Action panel Switchable player speed. Switchable if below this speed - アクションパネル切り替え可能なプレイヤーの速度。この速度以下なら切り替え可能
	float actionPanelChangeThreshold_Vel;

	// NAME: Action panel switching judgment_player speed judgment time [sec] - アクションパネル切り替え判定_プレイヤー速度判定時間[sec]
	// DESC: Action panel Consideration time to increase the speed of switchable players. Use the average speed of this time (systematically up to 4 seconds) - アクションパネル切り替え可能なプレイヤーの速度を出すための考慮時間。この時間の平均速度を使う(システム的に最大４秒)
	float actionPanelChangeThreshold_PassTime;

	// NAME: Vertical position of the key guide icon - キーガイドアイコンの上下位置
	// DESC: Vertical position of key guide icon (+: top,-: bottom) - キーガイドアイコンの上下位置(+:上, -:下)
	int32_t kgIconVspace;

	// NAME: Cursor selection radius [px] - カーソルの選択半径[px]
	// DESC: If the cursor position is within this radius, it means that it is selected. - カーソル位置がこの半径以内にあれば選択していることになる
	float worldMapCursorSelectRadius;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved8[4];

	// NAME: Decal offset (left and right) - デカールオフセット（左右）
	// DESC: Decal display position offset left and right - デカールの表示位置オフセット左右方向
	int32_t decalPosOffsetX;

	// NAME: Decal offset (up and down) - デカールオフセット（上下）
	// DESC: Decal display position offset vertical direction - デカールの表示位置オフセット上下方向
	int32_t decalPosOffsetY;

	// NAME: FE: Search icon display time [seconds] - 見つかりそうFE：Searchアイコンの表示時間[秒]
	// DESC: The number of seconds it takes for the FE Search icon to start fading in and then fading out. - 見つかりそうFEのSearchアイコンがフェードインし始めてから、フェードアウトされ始めるまでの秒数
	float targetStateSearchDurationTime;

	// NAME: FE: Battle icon display time [seconds] - 見つかりそうFE：Battleアイコンの表示時間[秒]
	// DESC: The number of seconds it takes for the FE Battle icon to start fading in and then fading out. - 見つかりそうFEのBattleアイコンがフェードインし始めてから、フェードアウトされ始めるまでの秒数
	float targetStateBattleDurationTime;

	// NAME: Cursor movement speed [px / sec] - カーソルの移動スピード[px/sec]
	// DESC: Movement speed when moving smoothly - スムーズに移動するときの移動スピード
	float worldMapCursorSpeed;

	// NAME: First movement distance of the cursor [px] - カーソルの１回目の移動距離[px]
	// DESC: Distance to move only once at the first input - 最初の入力のときに、カッと一度だけ移動する距離
	float worldMapCursorFirstDistance;

	// NAME: Delay time for the first movement of the cursor [sec] - カーソルの1回目の移動の遅延時間[sec]
	// DESC: The time it takes to move only once at the first input - 最初の入力のときに、カッと一度だけ移動するときにかかる時間
	float worldMapCursorFirstDelay;

	// NAME: Wait until the cursor moves [sec] - カーソルの移動までのウェイト[sec]
	// DESC: Waiting time from input to smooth movement - 入力してから、スムーズに移動するまでの待機時間
	float worldMapCursorWaitTime;

	// NAME: Cursor snap radius [px] - カーソルのスナップ半径[px]
	// DESC: Move the cursor closer than this radius to start adsorption (for snap mode) - この半径よりも近くにカーソルを移動すると吸着を開始する（スナップモード用）
	float worldMapCursorSnapRadius;

	// NAME: Cursor snap time [sec] - カーソルのスナップ時間[sec]
	// DESC: The time it takes to start and complete adsorption - 吸着を開始して、完了するまでにかかる時間
	float worldMapCursorSnapTime;

	// NAME: Item acquisition log: Display time of 1 line [sec] - アイテム取得ログ：１行の表示時間[sec]
	// DESC: Time to add one line of log and fade out. There is a timer for each line - １行分のログを追加してフェードアウトするまでの時間。行ごとにタイマーがある
	float itemGetLogAliveTime;

	// NAME: Upper limit of player maximum SA (trunk value) - プレイヤー最大SA（体幹値）の上限
	// DESC: It is used to calculate what percentage of the gauge length provided by the resource is used when displaying the SA gauge. - SAゲージ表示の際に、リソースで用意されたゲージの長さの何％を使うかを算出するために使われます。
	int32_t playerMaxSaLimit;

	// NAME: Underground map switchable event flag ID - 地下地図切り替え可能イベントフラグID
	// DESC: Specify the event flag ID that manages whether it is possible to switch to the underground map. When this event flag ID is ON, it is possible to switch to the underground map. - 地下地図に切り替え可能かを管理するイベントフラグIDを指定する。このイベントフラグIDがONのときに、地下地図への切り替えが可能になる
	uint32_t worldMap_IsChangeableLayerEventFlagId;

	// NAME: Additional ban distance for traversal range [m] - 踏破範囲の追加解禁距離[m]
	// DESC: Distance (m) that extends in four directions around the player. I decided to break through this range - プレイヤーを中心として4方向へ拡張する距離(m)。この範囲を踏破したことにする
	float worldMap_TravelMargin;

	// NAME: Wait time before and after scrolling [sec] - スクロール前後の待機時間[sec]
	// DESC: The number of seconds to wait before and after scrolling through the long text of the operation announcement. For example, if it is 3 seconds, wait for a total of 6 seconds before and after. - 運営告知の長い文章をスクロールする前後に待機する秒数。例えば3秒なら前と後ろとで合計6秒待機する
	float systemAnnounceScrollBufferTime;

	// NAME: Scrolling speed [px / sec] - スクロールする速度[px/sec]
	// DESC: Scrolling speed (pixels / second) when scrolling long sentences in the operation announcement. It does not depend on the screen size. Think of the entire menu as 1920x1080 - 運営告知の長い文章をスクロールするときのスクロール速度（ピクセル/秒）。画面サイズに依存しない。メニュー全体を1920x1080として考える
	int32_t systemAnnounceScrollSpeed;

	// NAME: Display time when not scrolling [sec] - スクロールしないときの表示時間[sec]
	// DESC: The number of seconds to display when it is a short sentence that does not require scrolling of the operation announcement - 運営告知のスクロールを必要としない短い文章だったときに表示する秒数
	float systemAnnounceNoScrollWaitTime;

	// NAME: Number of scrolls - スクロールする回数
	// DESC: Number of times to repeat when scrolling long sentences of management announcement - 運営告知の長い文章をスクロールするときに繰り返す回数
	uint8_t systemAnnounceScrollCount;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved17[3];

	// NAME: Display distance_Memo marker [m] - 表示距離_メモマーカー[m]
	// DESC: Display distance [m] of the memo marker displayed on the compass. Anything closer than this distance will be displayed - コンパスに表示するメモマーカーの表示距離[m]。この距離よりも近いものは表示される
	float compassMemoDispDistance;

	// NAME: Display distance_bonfire [m] - 表示距離_篝火[m]
	// DESC: The display distance of the bonfire displayed on the compass [m]. Anything closer than this distance will be displayed - コンパスに表示する篝火の表示距離[m]。この距離よりも近いものは表示される
	float compassBonfireDispDistance;

	// NAME: Goal judgment distance of destination marker [m] - 目的地マーカーのゴール判定距離[m]
	// DESC: Goal judgment distance [m] of the destination marker. The destination marker disappears when you get closer than this distance - 目的地マーカーのゴール判定距離[m]。この距離よりも近付いたときに目的地マーカーは消える
	float markerGoalThreshold;

	// NAME: Saturation / brightness slider movement amount [% / sec] - 彩度・明度スライダーの移動量[%/sec]
	// DESC: Amount of movement of the saturation / brightness slider of the color control [% / sec]. Maximum amount to move in 1 second when each value is 0% to 100%. Since it is operated with an analog stick, it becomes a ratio by the input value. - カラーコントロールの彩度・明度スライダーの移動量[%/sec]。それぞれの値を0%～100%としたときに1秒で移動する最大量。アナログスティックで操作するため、入力値で割合になる
	float svSliderStep;

	// NAME: Weight before OP movie [sec] - OPムービー前のウェイト[sec]
	// DESC: Wait time before playing the OP movie. > SEQ 15261 - OPムービー再生前のウェイト時間。＞SEQ 15261
	float preOpeningMovie_WaitSec;

	// NAME: Key guide icon scale [%] - キーガイドアイコンのスケール[%]
	// DESC: The scale value of the key guide icon. 100% is the texture size as it is - キーガイドアイコンのスケール値。100%がテクスチャサイズそのまま
	float kgIconScale;

	// NAME: Scale of key guide icon for pad operation list [%] - パッド操作一覧用のキーガイドアイコンのスケール[%]
	// DESC: Scale value of the key guide icon for the pad operation list. 100% is the texture size as it is - パッド操作一覧用のキーガイドアイコンのスケール値。100%がテクスチャサイズそのまま
	float kgIconScale_forTable;

	// NAME: Vertical position of the key guide icon for the pad operation list - パッド操作一覧用のキーガイドアイコンの上下位置
	// DESC: Vertical position of the key guide icon for the pad operation list (+: top,-: bottom) - パッド操作一覧用のキーガイドアイコンの上下位置(+:上, -:下)
	int32_t kgIconVspace_forTable;

	// NAME: Key guide icon scale for key config [%] - キーコンフィグ用のキーガイドアイコンのスケール[%]
	// DESC: The scale value of the key guide icon for the key config. 100% is the texture size as it is - キーコンフィグ用のキーガイドアイコンのスケール値。100%がテクスチャサイズそのまま
	float kgIconScale_forConfig;

	// NAME: Vertical position of the key guide icon for key config - キーコンフィグ用のキーガイドアイコンの上下位置
	// DESC: Vertical position of key guide icon for key config (+: top,-: bottom) - キーコンフィグ用のキーガイドアイコンの上下位置(+:上, -:下)
	int32_t kgIconVspace_forConfig;

	// NAME: Unsearched mask_Searched range [m] - 未探索マスク_探索済み範囲[m]
	// DESC: Range [m] (radius) that makes unsearched masks searched. It is assumed that the circle centered on the player has been searched. - 未探索マスクを探索済みにする範囲[m]（半径）。プレイヤーを中心とした円形を探索済みとする
	float worldMap_SearchRadius;

	// NAME: Toast display time [sec] - トースト表示時間[sec]
	// DESC: Tutorial (toast notification) display time [sec]. It will be closed automatically after this time has passed - チュートリアル（トースト通知）の表示時間[sec]。この時間が経過したら自動的に閉じられる
	float tutorialDisplayTime;

	// NAME: Display distance_Cooperation / Relief Guest side: Host - 表示距離_協力/救援ゲスト側：ホスト
	// DESC: Display distance [m] of other players (friendly hosts) to be displayed on the compass. If you are more than this distance, it will be displayed on the compass. - コンパスに表示する他プレイヤー（味方ホスト）の表示距離[m]。この距離以上離れているとコンパスに表示される
	float compassFriendHostInnerDistance;

	// NAME: Display distance_hostile guest side: host - 表示距離_敵対ゲスト側：ホスト
	// DESC: Display distance [m] of other players (enemy hosts) displayed on the compass. If you are more than this distance, it will be displayed on the compass. - コンパスに表示する他プレイヤー（敵ホスト）の表示距離[m]。この距離以上離れているとコンパスに表示される
	float compassEnemyHostInnerDistance;

	// NAME: Display distance_host / cooperation / rescue Host side: cooperation / rescue guest - 表示距離_ホスト/協力/救援ホスト側：協力/救援ゲスト
	// DESC: Display distance [m] of other players (friendly guests) to be displayed on the compass. If you are more than this distance, it will be displayed on the compass. - コンパスに表示する他プレイヤー（味方ゲスト）の表示距離[m]。この距離以上離れているとコンパスに表示される
	float compassFriendGuestInnerDistance;

	// NAME: Cutscene key guide display time [seconds] - カットシーンのキーガイド表示時間[秒]
	// DESC: The amount of time that the key guide will continue to be displayed after the cutscene skip has been pre-entered. Since skip input is accepted only while the key guide is displayed, it can be said that it is the skip input acceptance time. - カットシーンスキップの事前入力があってからキーガイドを表示し続ける時間。キーガイドを表示中しかスキップ入力は受け付けないため、スキップ入力受付時間とも言える
	float cutsceneKeyGuideAliveTime;

	// NAME: HP gauge: Percentage always displayed [%] - HPゲージ：常に表示する割合[%]
	// DESC: [HUD: Auto setting] HP ratio. If the HP ratio is below this value, the HP gauge will always be displayed. Percentage and current value are OR conditions (displayed if either is satisfied) - [HUD:Auto設定]HP割合。HP割合がこの数値以下なら、HPゲージを常に表示する。割合と現在値はOR条件（どちらかを満たせば表示）
	float autoHideHpThresholdRatio;

	// NAME: HP gauge: Current value always displayed - HPゲージ：常に表示する現在値
	// DESC: [HUD: Auto setting] HP current value. If the current HP value is less than or equal to this value, the HP gauge will always be displayed. Percentage and current value are OR conditions (displayed if either is satisfied) - [HUD:Auto設定]HP現在値。HP現在値がこの数値以下なら、HPゲージを常に表示する。割合と現在値はOR条件（どちらかを満たせば表示）
	int32_t autoHideHpThresholdValue;

	// NAME: MP gauge: Percentage to always display [%] - MPゲージ：常に表示する割合[%]
	// DESC: [HUD: Auto setting] MP ratio. If the MP ratio is below this value, the MP gauge is always displayed. Percentage and current value are OR conditions (displayed if either is satisfied) - [HUD:Auto設定]MP割合。MP割合がこの数値以下なら、MPゲージを常に表示する。割合と現在値はOR条件（どちらかを満たせば表示）
	float autoHideMpThresholdRatio;

	// NAME: MP gauge: Current value always displayed - MPゲージ：常に表示する現在値
	// DESC: [HUD: Auto setting] MP current value. If the current MP value is less than or equal to this value, the MP gauge is always displayed. Percentage and current value are OR conditions (displayed if either is satisfied) - [HUD:Auto設定]MP現在値。MP現在値がこの数値以下なら、MPゲージを常に表示する。割合と現在値はOR条件（どちらかを満たせば表示）
	int32_t autoHideMpThresholdValue;

	// NAME: SP gauge: Percentage to always display [%] - SPゲージ：常に表示する割合[%]
	// DESC: [HUD: Auto setting] SP ratio. If the SP ratio is less than or equal to this value, the SP gauge is always displayed. Percentage and current value are OR conditions (displayed if either is satisfied) - [HUD:Auto設定]SP割合。SP割合がこの数値以下なら、SPゲージを常に表示する。割合と現在値はOR条件（どちらかを満たせば表示）
	float autoHideSpThresholdRatio;

	// NAME: SP gauge: Current value always displayed - SPゲージ：常に表示する現在値
	// DESC: [HUD: Auto setting] SP current value. If the current SP value is less than or equal to this value, the SP gauge is always displayed. Percentage and current value are OR conditions (displayed if either is satisfied) - [HUD:Auto設定]SP現在値。SP現在値がこの数値以下なら、SPゲージを常に表示する。割合と現在値はOR条件（どちらかを満たせば表示）
	int32_t autoHideSpThresholdValue;

	// NAME: Zoom animation time [seconds] - ズームアニメーション時間[秒]
	// DESC: World map: Time to zoom animation [seconds] - 世界地図：ズームアニメーションをする時間[秒]
	float worldMapZoomAnimationTime;

	// NAME: Minimum icon display magnification - 最小アイコン表示倍率
	// DESC: World map: Display magnification of the map point icon at zoom step 0 (0.0 to 1.0). 1x (1.0) at zoom step 2. From there, the icon magnification is also interpolated according to the enlargement ratio. - 世界地図：ズームステップ0のときの地図ポイントアイコンの表示倍率(0.0～1.0)。ズームステップ2のときに等倍(1.0)。そこから拡大率に合わせてアイコン倍率も補間される
	float worldMapIconScaleMin;

	// NAME: Map point unit Additional ban distance when the ban is lifted [m] - 地図ポイント単位踏破範囲解禁時の追加解禁距離[m]
	// DESC: World map: Additional ban distance [m] when the ban is lifted in map point units. When the ban on map points such as the distant view stand is lifted, the ban on the traversal range will be lifted. Distance to be additionally extended in 4 directions around the map point - 世界地図：地図ポイント単位踏破範囲解禁時の追加解禁距離[m]。遠見台など地図ポイントが解禁されたときに踏破範囲を解禁する。地図ポイントを中心に4方向に追加で拡張する距離
	float worldMap_TravelMargin_Point;

	// NAME: Displayable area (far left) - 表示可能領域（左端）
	// DESC: How far can the center coordinates of the enemy HP gauge go to the left end? Since it is the center coordinate, the size of the gauge body is included. - 敵HPゲージの中心座標がどこまで左端にいけるか。中心座標なのでゲージ本体のサイズも含む
	uint16_t enemyTagSafeLeft;

	// NAME: Displayable area (right end) - 表示可能領域（右端）
	// DESC: How far can the center coordinates of the enemy HP gauge go to the right end? Since it is the center coordinate, the size of the gauge body is included. - 敵HPゲージの中心座標がどこまで右端にいけるか。中心座標なのでゲージ本体のサイズも含む
	uint16_t enemyTagSafeRight;

	// NAME: Displayable area (top) - 表示可能領域（上端）
	// DESC: How far can the center coordinates of the enemy HP gauge go to the upper end? Since it is the center coordinate, the size of the gauge body is included. - 敵HPゲージの中心座標がどこまで上端にいけるか。中心座標なのでゲージ本体のサイズも含む
	uint16_t enemyTagSafeTop;

	// NAME: Displayable area (bottom) - 表示可能領域（下端）
	// DESC: How far can the center coordinates of the enemy HP gauge go to the lower end? Since it is the center coordinate, the size of the gauge body is included. - 敵HPゲージの中心座標がどこまで下端にいけるか。中心座標なのでゲージ本体のサイズも含む
	uint16_t enemyTagSafeBottom;

	// NAME: Display recovery amount threshold - 表示回復量の閾値
	// DESC: Threshold for displaying the PC horse HP gauge at the time of recovery. "Constant value" of "Display HP bar when it increases more than a certain value at a time" - 回復時にPC馬HPゲージを表示するかの閾値。「一度に一定値以上増加したらHPバーを表示する」の”一定値”
	uint32_t pcHorseHpRecoverDispThreshold;

	// NAME: reserve - 予約
	// DESC: (dummy8) - (dummy8)
	uint8_t reserved33[32];
};

#endif
