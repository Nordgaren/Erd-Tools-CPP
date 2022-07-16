#include "Include/ErdToolsMain.h"


ErdToolsMain* main_mod = nullptr;

void create_hook() {

	using namespace std::chrono_literals;

	// Wait for Elden Ring
	std::this_thread::sleep_for(5s);

	main_mod = new ErdToolsMain();

	main_mod->hook_elden_ring();

	delete main_mod;
	return;
};

void ErdToolsMain::hook_elden_ring() {
	using namespace std::chrono_literals;

	if (DEBUG_CONSOLE) {
		AllocConsole();
		FILE* fpstdin = stdin;
		freopen("CONOUT$", "w", stdout);
	}

	hook = ErdHook();
	if (!hook.create_memory_edits()) {
		return;
	}

	while (is_mod_active) {
		std::this_thread::sleep_for(5s);
	}

	return;
}
