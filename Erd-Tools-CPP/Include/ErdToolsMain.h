#ifndef ERDTOOLSMAIN_H
#define ERDTOOLSMAIN_H
#include <windows.h>
#include <thread>
#include "ErdHook.h"
#define DEBUG_CONSOLE 1

void create_hook();

class ErdToolsMain {
public:
	void hook_elden_ring();

	uint32_t is_mod_active;
	ErdHook hook;

	ErdToolsMain() {
		hook = {};
		is_mod_active = 1;
	}
private:
};

#endif
