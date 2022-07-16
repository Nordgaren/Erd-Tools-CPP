#pragma once
#include <cstdint>
#include <cstdio>


typedef void (*set_event_flag)(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
void set_event_flag_hook(uint64_t event_flag_man, uint32_t* event_id, int32_t event_value);
uint64_t set_event_flag_address;
set_event_flag set_event_flag_original = nullptr;


