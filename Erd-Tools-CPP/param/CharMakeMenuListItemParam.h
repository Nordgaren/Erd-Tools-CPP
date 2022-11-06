/* This file was automatically generated from regulation data. */
#ifndef _PARAM_CharMakeMenuListItemParam_H
#define _PARAM_CharMakeMenuListItemParam_H
#pragma once
#include "defs/CHARMAKEMENU_LISTITEM_PARAM_ST.h"

// Type: CHARMAKEMENU_LISTITEM_PARAM_ST
struct CharMakeMenuListItemParam : CHARMAKEMENU_LISTITEM_PARAM_ST {
    static constexpr const char* param_type = "CHARMAKEMENU_LISTITEM_PARAM_ST";
    static constexpr const char* param_name = "CharMakeMenuListItemParam";
    static constexpr const wchar_t* param_namew = L"CharMakeMenuListItemParam";
};

static_assert(sizeof(CharMakeMenuListItemParam) == 16, "CharMakeMenuListItemParam paramdef size does not match detected size");
#endif
