/* This file was automatically generated from XML paramdefs. */
#ifndef _PARAMDEF_CS_MOTION_BLUR_QUALITY_DETAIL_H
#define _PARAMDEF_CS_MOTION_BLUR_QUALITY_DETAIL_H
#pragma once
#include <inttypes.h>

// Data Version: 2
// Is Big Endian: False
// Is Unicode: True
// Format Version: 203
struct CS_MOTION_BLUR_QUALITY_DETAIL {

	// NAME: Motion blur enabled - モーションブラー有効
	// DESC: Motion blur enabled - モーションブラー有効
	uint8_t enabled;

	// NAME: OMB (object motion blur) enabled - OMB(オブジェクトモーションブラー)有効
	// DESC: OMB (object motion blur) enabled - OMB(オブジェクトモーションブラー)有効
	uint8_t ombEnabled;

	// NAME: Decrease the resolution of the velocity buffer used internally - 内部で使用するベロシティバッファの解像度を下げる
	// DESC: Decrease the resolution of the velocity buffer used internally. Not effective if you are not using precision velocity buffers - 内部で使用するベロシティバッファの解像度を下げる。高精度ベロシティバッファを使っていない場合は効果ない
	uint8_t forceScaleVelocityBuffer;

	// NAME: Normally processed by the Reconstruction filter, but downgraded to a lighter process - 通常、Reconstructionフィルタで処理されるが、軽い処理にダウングレードする
	// DESC: Normally processed by the Reconstruction filter, but downgraded to a lighter process - 通常、Reconstructionフィルタで処理されるが、軽い処理にダウングレードする
	uint8_t cheapFilterMode;

	// NAME: Give an offset to the sample count - サンプルカウントにオフセットを与える
	// DESC: Give an offset to the sample count * Set to a multiple of 2 - サンプルカウントにオフセットを与える※2の倍数に設定して下さい
	int32_t sampleCountBias;

	// NAME: Offset the number of recursive blurs - 再帰ブラー回数にオフセットを与える
	// DESC: Give an offset to the number of recursive blurs - 再帰ブラー回数にオフセットを与える
	int32_t recurrenceCountBias;

	// NAME: Scale value for blur maximum length parameter - ブラー最大長さパラメータに対するスケール値
	// DESC: Scale value for blur maximum length parameter - ブラー最大長さパラメータに対するスケール値
	float blurMaxLengthScale;
};

#endif
