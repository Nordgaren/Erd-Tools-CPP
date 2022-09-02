#pragma once
#include <cstdint>

enum UserPreferences {
	none = 0,
	log_flags_in_console = 1 << 0,
	enable_map_in_combat = 1 << 1,
	enable_crafting_in_combat = 1 << 2,
    enable_auto_harvest = 1 << 3,
    enable_boss_poise_meter = 1 << 4
};

struct ReinforceParamWeapon {
    uint8_t filler_bytes[87];
    uint8_t equip_reinforce_level;
};

enum ItemType : uint8_t {
    itemtype_tools = 0,
    itemtype_key = 1,
    itemtype_crafting = 2,
    itemtype_tools_critical = 3,
    itemtype_sorceries = 5,
    itemtype_ashes = 7,
    itemtype_info = 12,
    itemtype_inaccessible = 13,
    itemtype_bolsteringmaterials = 14,
    itemtype_incantations = 16,
};

enum ProtectorType : uint8_t {
    Head = 0,
    Chest = 1,
    Legs = 2,
    Hands = 3,
};

enum WeaponType : uint16_t {
    weapon_type_lightbow = 50,
    weapon_type_bow = 51,
    weapon_type_greatbow = 53,
    weapon_type_crossbow = 55,
    weapon_type_ballista = 56,
    weapon_type_glintstone_staff = 57,
    weapon_type_sacred_seal = 61,
    weapon_type_small_shield = 65,
    weapon_type_med_shield = 67,
    weapon_type_great_shield = 69,
    weapon_type_arrow = 81,
    weapon_type_greatarrow = 83,
    weapon_type_bolt = 85,
    weapon_type_greatbolt = 86,
};

struct EquipParamGoods {
    uint8_t filler_bytes[58];
    uint16_t max_inventory;
    uint16_t unk;
    ItemType item_type;
};

struct EquipParamWeapon {
    uint8_t filler_bytes_01[92];
    uint32_t material;
    uint8_t filler_bytes_02[122];
    uint16_t reinforce_param_addoffset;
    uint8_t filler_bytes_03[202];
    WeaponType WeaponType;
};

struct EquipParamProtector {
    uint8_t filler_bytes[214];
    ProtectorType ProtectorType;
};

struct EquipMtrlSetParam {
    uint32_t UpgradeMaterialId;
};

struct ActionButtonParam {
    uint8_t filler_bytes[0xC];
    float radius;
};

struct MenuCommonParam {
    uint8_t filler_bytes[0x38];
    float worldMapCursorSpeed;
};

enum MapItemType : uint32_t {
    MapItemGoods = 1,
    MapItemWeapon = 2,
    MapItemArmor = 3,
    MapItemAccessory = 4,
    MapItemGem = 5,
};

enum ItemCategory : uint32_t {
    Weapon = 0x00000000,
    Protector = 0x10000000,
    Accessory = 0x20000000,
    Goods = 0x40000000,
    Gem = 0x80000000,
};

struct ItemLotParam_map {
    uint32_t itemIdArray[8];
    MapItemType itemTypeArray[8];
    uint16_t unk_array_01[8];
    uint16_t unk_array_02[8];
    uint32_t item_completeevent_type[8];
};

struct ShopLineupParam {
    uint32_t item_id;
    uint32_t item_cost;
    uint32_t equipmtrlsetparam_entryid; // Anything other than -1 means the item is an upgrade and needs materials
    uint32_t remaining_leftinstock_id;  // Will remember what you've bought previously, and subtract it from the item quantity
    uint32_t is_release_eventflag_id;   // If this event id specified is not complete, the item will not appear
    uint16_t item_quantity;
    uint8_t dummy_01;
    uint8_t item_type;	   // 0 = MapItemWeapon | 1 = Armour | 2 = MapItemAccessory | 3 = MapItemGoods | 4 = MapItemGem
    uint8_t currency_type; // 0 = Runes | 1 = Dragon hearts
    uint8_t dummy_02;
    uint16_t set_num;
    uint32_t value_add;
    float value_magnification;
    uint32_t icon_id;
    uint32_t name_msg_id;
    uint16_t menu_title_msg_id;
};

struct ParamContainer {
    uint32_t entry_id = __UINT32_MAX__;
    void* param_entry = nullptr;
};

struct MenuCommonParamParamContainer {
    MenuCommonParam* param_entry = nullptr;
};

struct ActionButtonParamParamContainer {
    void* pad = nullptr;
    uint32_t entry_id = __UINT32_MAX__;
    ActionButtonParam* param_entry = nullptr;
};


struct EquipParamWeaponParamContainer {
    uint32_t EquipParamWeaponEntryId = __UINT32_MAX__;
    EquipParamWeapon* EquipParamWeaponEntry = nullptr;
    uint32_t EquipParamWeaponEntryRawId = __UINT32_MAX__;
    uint32_t EquipParamReinforceEntryId = __UINT32_MAX__;
    ReinforceParamWeapon* EquipParamReinforceEntry = nullptr;
    uint32_t unk = 0;
    uint64_t buffer = 0;
};

struct EquipParamProtectorParamContainer {
    uint32_t EquipParamProtectorEntryId = __UINT32_MAX__;
    EquipParamProtector* EquipParamProtectorEntry = nullptr;
    uint32_t EquipParamProtectorEntryRawParamId = __UINT32_MAX__;
    uint32_t EquipParamReinforceEntryId = __UINT32_MAX__;
    void* EquipParamReinforceEntry = nullptr;
    uint32_t unk = 0;
    uint64_t buffer = 0;
};

struct StaggerModule {
    uint8_t undefined[0x10];
    float stagger;
    float staggerMax;
    uint8_t undefined2[0x4];
    float resetTimer;
};

struct ChrModuleBase {
    uint8_t undefined[0x40];
    StaggerModule* staggerModule;
};

struct ChrIns {
    uint8_t undefined[0x190];
    ChrModuleBase* chrModuleBase;
};

struct BossHpBar {
    int displayId = -1;
    uint32_t pad0x4 = 0;
    long long chrInsHandle = -1;
    int currentDisplayDamage = 0;
    int unk0x14 = 0;
    bool isHit = 0;
    uint8_t pad0x19[0x3] = { };
    float displayTime = 0;
};

struct CSFeManImp {
    uint8_t undefines[0x5720];
    BossHpBar bossHpBars[3];
};


typedef void FindEquipParamWeaponEntry(EquipParamWeaponParamContainer*, uint32_t);

typedef void FindEquipParamProtectorEntry(EquipParamProtectorParamContainer*, uint32_t);

typedef void FindEquipParamGoodsEntry(ParamContainer*, uint32_t);

typedef void FindEquipMtrlSetParamEntry(ParamContainer*, uint32_t);

typedef void GetMenuCommonParamEntry(MenuCommonParamParamContainer*);

typedef void FindActionButtonParamEntry(ActionButtonParamParamContainer*, uint32_t);

typedef void (* EnableBossBar)(int*, int, int);

typedef ChrIns* GetChrInsFromEntityId(int*, uint64_t, uint32_t*);

typedef void (*SetEventFlag)(uint64_t event_man, uint32_t* event_id, bool state);

typedef bool (*IsEventFlag)(uint64_t event_man, uint32_t* event_id);