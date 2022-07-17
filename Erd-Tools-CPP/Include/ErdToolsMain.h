#pragma once
#include <windows.h>
#include <thread>
#include "ErdHook.h"
#include "INIReader/INIReader.h"
#define DEBUG_CONSOLE 0

void CreateHook();

class ErdToolsMain {
public:
	void EnableDebugConsole();
	void HookEldenRing();
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
	void Setup();
	bool ReadINI();
	void InitPreferences();
};
