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
	uint32_t IsModActive;
	ErdHook Hook;
	UserPreferences Preferences;

	ErdToolsMain() {
		IsModActive = 1;
		Hook = {};
		Preferences = none;
;	}

private:
	bool _debugConsoleEnabled = false;
	void Setup();
	bool ReadINI();
	void InitPreferences();
};
