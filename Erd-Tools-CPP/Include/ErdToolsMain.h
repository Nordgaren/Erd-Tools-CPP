#pragma once

#include "TcpServer.h"
#include "Common.h"
#include "ErdHook.h"

#define DEBUG_CONSOLE 0

void CreateHook();

class ErdToolsMain {
public:
	void EnableDebugConsole();
	void HookEldenRing();
	uint32_t IsModActive;
	ErdHook Hook;
	TcpServer Server;
	UserPreferences Preferences;

	ErdToolsMain() {
		IsModActive = 1;
		Hook = {};
		Preferences = none;
;	}

	~ErdToolsMain() = default;

private:
	bool _debugConsoleEnabled = false;
	void Setup();
	bool ReadINI();
	void InitPreferences();
};
