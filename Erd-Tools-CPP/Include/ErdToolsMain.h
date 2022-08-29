#pragma once

#include "Common.h"
#include "ErdHook.h"


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
		Preferences = none;
;	}

	~ErdToolsMain() = default;

private:
	bool _debugConsoleEnabled = false;
	void Setup();
	bool ReadINI();
	void InitPreferences();
};
