/* This file was automatically generated from regulation data. */
#ifndef _PARAM_WaypointParam_H
#define _PARAM_WaypointParam_H
#pragma once
#include "defs/WAYPOINT_PARAM_ST.h"

// Type: WAYPOINT_PARAM_ST
struct WaypointParam : WAYPOINT_PARAM_ST {
    static constexpr const char* param_type = "WAYPOINT_PARAM_ST";
    static constexpr const char* param_name = "WaypointParam";
    static constexpr const wchar_t* param_namew = L"WaypointParam";
};

static_assert(sizeof(WaypointParam) == 16, "WaypointParam paramdef size does not match detected size");
#endif
