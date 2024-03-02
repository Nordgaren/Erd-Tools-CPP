#include "Include/ErdToolsMain.h"

#include <codecvt>

ErdToolsMain* main_mod = nullptr;

void CreateHook() {
	using namespace std::chrono_literals;
	// Wait for Elden Ring
	std::this_thread::sleep_for(5s);

	main_mod = new ErdToolsMain();

	main_mod->HookEldenRing();

	while (main_mod->IsModActive) {
		std::this_thread::sleep_for(5s);
	}

	delete main_mod;
};

void ErdToolsMain::EnableDebugConsole() {
	if (_debugConsoleEnabled) {
		return;
	}

	if (AllocConsole()) {
		FILE* fpstdout = stdout;
		FILE* fpstderr = stderr;
		freopen_s(&fpstdout,"CONOUT$", "w", stdout);
		freopen_s(&fpstderr,"CONOUT$", "w", stderr);
		SetWindowText(GetConsoleWindow(), L"Erd Tools");

		_debugConsoleEnabled = true;
	}
}

void ErdToolsMain::HookEldenRing() {
	using namespace std::chrono_literals;

	if (DEBUG_CONSOLE) {
		EnableDebugConsole();
	}

	if (!Hook.CreateMemoryEdits()) {
		return;
	}

	Setup();
}

void ErdToolsMain::Setup() {
	if (ReadINI()) {
		InitPreferences();
	} else {
	//@TODO:Check if communication with debug tools is open and open if it is not and ini doesn't exist.
	}

	Hook.ChangeExtension();

	Hook.ParamMan->InitParamTools();
	
	Hook.FeMan->EnableLootPrefs();
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
		return false;
	}

	std::string header_segment = "DEBUG";
	Preferences = option_reader.GetBoolean(header_segment, "log_flags_in_console", false) ? static_cast<UserPreferences>(Preferences | log_flags_in_console) : Preferences;
	Preferences = option_reader.GetBoolean(header_segment, "enable_map_in_combat", false) ? static_cast<UserPreferences>(Preferences | enable_map_in_combat) : Preferences;
	Preferences = option_reader.GetBoolean(header_segment, "enable_crafting_in_combat", false) ? static_cast<UserPreferences>(Preferences | enable_crafting_in_combat) : Preferences;

	header_segment = "FRONTEND";
	Preferences = option_reader.GetBoolean(header_segment, "boss_poise_meter", false) ? static_cast<UserPreferences>(Preferences | enable_boss_poise_meter) : Preferences;
	Preferences = option_reader.GetBoolean(header_segment, "entity_poise_meter", false) ? static_cast<UserPreferences>(Preferences | enable_entity_poise_meter) : Preferences;
	Preferences = option_reader.GetBoolean(header_segment, "vanilla_pickup_animations", false) ? static_cast<UserPreferences>(Preferences | vanilla_pickup_animations) : Preferences;

	LootPreferences lootPrefs = no_loot_changes;
	lootPrefs = option_reader.GetBoolean(header_segment, "pickup_materials", false) ? static_cast<LootPreferences>(lootPrefs | pickup_materials) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "pickup_items", false) ? static_cast<LootPreferences>(lootPrefs | pickup_items) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "pickup_corpse_loot", false) ? static_cast<LootPreferences>(lootPrefs | pickup_corpse_loot) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "pickup_lost_runes", false) ? static_cast<LootPreferences>(lootPrefs | pickup_lost_runes) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "enable_auto_pickup_in_combat", false) ? static_cast<LootPreferences>(lootPrefs | enable_auto_pickup_in_combat) : lootPrefs;

	lootPrefs = option_reader.GetBoolean(header_segment, "lock_materials", false) ? static_cast<LootPreferences>(lootPrefs | lock_materials) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "lock_items", false) ? static_cast<LootPreferences>(lootPrefs | lock_items) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "lock_corpse_loot", false) ? static_cast<LootPreferences>(lootPrefs | lock_corpse_loot) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "lock_lost_runes", false) ? static_cast<LootPreferences>(lootPrefs | lock_lost_runes) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "lock_grace_unlocks", false) ? static_cast<LootPreferences>(lootPrefs | lock_grace_unlocks) : lootPrefs;
	lootPrefs = option_reader.GetBoolean(header_segment, "lock_grace_resting", false) ? static_cast<LootPreferences>(lootPrefs | lock_grace_resting) : lootPrefs;
	Hook.FeMan->LootPrefs = lootPrefs;

	header_segment = "PARAM";
	//range width
	Hook.ParamMan->_widthMultiplier_AutoHarvest		= option_reader.GetFloat(header_segment, "harvest_width_multiplier", 1.0);
	Hook.ParamMan->_widthMultiplier_ItemPickup		= option_reader.GetFloat(header_segment, "item_width_multiplier", 1.0);
	Hook.ParamMan->_widthMultiplier_CorpseLoot		= option_reader.GetFloat(header_segment, "corpse_loot_width_multiplier", 1.0);
	Hook.ParamMan->_widthMultiplier_LostRunesRange	= option_reader.GetFloat(header_segment, "lost_runes_width_multiplier", 1.0);
	//range height
	Hook.ParamMan->_heightMultiplier_AutoHarvest		= option_reader.GetFloat(header_segment, "harvest_height_multiplier", 1.0);
	Hook.ParamMan->_heightMultiplier_ItemPickup		= option_reader.GetFloat(header_segment, "item_height_multiplier", 1.0);
	Hook.ParamMan->_heightMultiplier_CorpseLoot		= option_reader.GetFloat(header_segment, "corpse_loot_height_multiplier", 1.0);
	Hook.ParamMan->_heightMultiplier_LostRunesRange	= option_reader.GetFloat(header_segment, "lost_runes_height_multiplier", 1.0);
	//other
	Hook.ParamMan->_mapSpeedMultiplier				= option_reader.GetFloat(header_segment, "map_scroll_multiplier", 1.0);
	//options
	Hook.ParamMan->_removeWepStatRequirements		= option_reader.GetBoolean(header_segment, "remove_weapon_stat_requirements", false);
	Hook.ParamMan->_persistentLantern				= option_reader.GetBoolean(header_segment, "persistent_lantern", false);
	
	header_segment = "SAVE";
	std::string ext	= option_reader.Get(header_segment, "save_extension", "sl2");
	Hook._extension	= std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(ext);

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

	if (Preferences & enable_boss_poise_meter) {
		Hook.FeMan->EnableBossPoiseMeter();
	}

	if (Preferences & enable_entity_poise_meter) {
		Hook.FeMan->EnableEntityPoiseMeter();
	}
}
