#pragma once
#include <thread>
#include "ErdHook.h"
#define DEBUG_CONSOLE 1

void CreateModFunctions();

class ErdToolsMain {
public:
	void HookEldenRing();

	uint32_t is_mod_active;
	ErdHook hook;

	ErdToolsMain() {
		hook = {};
		is_mod_active = 1;
	}
private:
};

