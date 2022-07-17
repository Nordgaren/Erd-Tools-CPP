#pragma once
#include <windows.h>
#include <thread>
#include "ErdHook.h"
#include "INIReader/INIReader.h"
#define DEBUG_CONSOLE 0

void create_hook();

class ErdToolsMain {
public:
	void enable_debug_console();
	void hook_elden_ring();
	uint32_t is_mod_active;
	ErdHook hook;
	Preferences preferences;

	ErdToolsMain() {
		is_mod_active = 1;
		hook = {};
		preferences = none;
;	}
private:
	bool debug_console_enabled = false;
	void setup();
	bool read_ini();
	void init_preferences();
};
