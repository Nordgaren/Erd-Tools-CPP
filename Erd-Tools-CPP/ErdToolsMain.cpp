#include "Include/ErdToolsMain.h"

#include <filesystem>


ErdToolsMain* main_mod = nullptr;

void CreateHook() {

	using namespace std::chrono_literals;

	// Wait for Elden Ring
	std::this_thread::sleep_for(5s);

	main_mod = new ErdToolsMain();

	main_mod->HookEldenRing();
	delete main_mod;
};

void ErdToolsMain::EnableDebugConsole() {
	if (_debugConsoleEnabled) {
		return;
	}

	AllocConsole();
	FILE* fpstdin = stdin;
	freopen_s(&fpstdin,"CONOUT$", "w", stdout);
	_debugConsoleEnabled = true;
}

void ErdToolsMain::HookEldenRing() {
	using namespace std::chrono_literals;

	if (DEBUG_CONSOLE) {
		EnableDebugConsole();
	}

	Hook = ErdHook();
	if (!Hook.CreateMemoryEdits()) {
		return;
	}

	Setup();

	while (IsModActive) {
		std::this_thread::sleep_for(5s);
	}

}

void ErdToolsMain::Setup() {
	if (ReadINI()) {
		InitPreferences();
	} else {
	//@TODO:Check if communication with debug tools is open and open if it is not and ini doesn't exist.
	}
}

bool ErdToolsMain::ReadINI() {
	char module_dir[MAX_PATH + 1];
	HMODULE mod;
	GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
		GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
		(LPCWSTR) & "", &mod);
	GetModuleFileNameA(mod, module_dir, sizeof(module_dir));
	char* module_file_path_point = strrchr(module_dir, '\\');
	if (!module_file_path_point) {
		MessageBoxA(0, "Failed to parse filepath string", "Erd Tools - Error", MB_ICONERROR);
		throw std::runtime_error("Failed to parse filepath string");
	};
	*module_file_path_point = '\0';
	// INIReader
	char ini_path[MAX_PATH + 1];
	strcpy_s(ini_path, module_dir);
	strcat_s(ini_path, "\\erd_tools.ini");
	INIReader option_reader = INIReader(ini_path);
	int error = option_reader.ParseError();
	if (error) {
		//
		return false;
	}

	std::string header_segment = "DEBUG";
	Preferences = option_reader.GetBoolean(header_segment, "log_flags_in_console", false) ? static_cast<UserPreferences>(Preferences | log_flags_in_console) : Preferences;
	Preferences = option_reader.GetBoolean(header_segment, "enable_map_in_combat", false) ? static_cast<UserPreferences>(Preferences | enable_map_in_combat) : Preferences;
	Preferences = option_reader.GetBoolean(header_segment, "enable_crafting_in_combat", false) ? static_cast<UserPreferences>(Preferences | enable_crafting_in_combat) : Preferences;
	
	return true;
}

void ErdToolsMain::InitPreferences() {
	if (Preferences & log_flags_in_console) {
		EnableDebugConsole();
		Hook.EventMan->EnableFlagListener();
	}

	if (Preferences & enable_map_in_combat) {
		Hook.DebugMan->EnableMapInCombat();
	}

	if (Preferences & enable_crafting_in_combat) {
		Hook.DebugMan->EnableCraftingInCombat();
	}
}
