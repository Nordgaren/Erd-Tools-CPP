#include "ErdToolsMain.h"

#include "src/hde/hde32.h"

ErdToolsMain* main_mod = nullptr;

void CreateModFunctions() {

	using namespace std::chrono_literals;

	// Wait for Elden Ring
	std::this_thread::sleep_for(5s);

	main_mod = new ErdToolsMain();

	main_mod->HookEldenRing();

	delete main_mod;
	return;
};

void ErdToolsMain::HookEldenRing() {
	using namespace std::chrono_literals;

	if (DEBUG_CONSOLE) {
		AllocConsole();
		FILE* fpstdin = stdin;
		freopen_s(&fpstdin,"CONOUT$", "w", stdout);
	}

	hook = ErdHook();
	if (!hook.CreateMemoryEdits()) {
		//
		return;
	}

	while (is_mod_active) {

		std::this_thread::sleep_for(5s);
		/*
		std::unique_lock<std::mutex> unique_lock(save_request_mutex);
		save_request_wait.wait(unique_lock, [&] { return save_manager_wake; });
		if (signal_list_save) {
			// Save... (no longer needed)
		};
		*/
	}

	return;
}
