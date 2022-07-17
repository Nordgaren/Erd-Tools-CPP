#pragma once
#include <windows.h>
#include <thread>
#include "ErdHook.h"
#define DEBUG_CONSOLE 1

void create_hook();

class ErdToolsMain {
public:
	void hook_elden_ring();
	void read_ini();
	uint32_t is_mod_active;
	ErdHook hook;

	ErdToolsMain() {
		is_mod_active = 1;
		hook = {};
	}
};
