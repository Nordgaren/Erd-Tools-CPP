#pragma once
#include <cstdint>

struct ActionButtonParam;
struct EquipParamWeapon;

enum UserPreferences {
    none = 0,
    log_flags_in_console = 1 << 0,
    enable_map_in_combat = 1 << 1,
    enable_crafting_in_combat = 1 << 2,
    enable_auto_pickup = 1 << 3,
    enable_lock_pickup = 1 << 4,
    enable_boss_poise_meter = 1 << 5,
    enable_entity_poise_meter = 1 << 6,
    remove_stat_requirements = 1 << 7,
    vanilla_pickup_animations = 1 << 8,
};

enum LootPreferences {
    no_loot_changes = 0,
    pickup_materials = 1 << 0,
    pickup_items = 1 << 1,
    pickup_corpse_loot = 1 << 2,
    pickup_lost_runes = 1 << 3,
    enable_auto_pickup_in_combat = 1 << 4,
    lock_materials = 1 << 5,
    lock_items = 1 << 6,
    lock_corpse_loot = 1 << 7,
    lock_lost_runes = 1 << 8,
    lock_grace_unlocks = 1 << 9,
    lock_grace_resting = 1 << 10,
};

enum ParamOptions {
    no_param_changes = 0,
    remove_weapon_stat_requirements = 1 << 0,
    permanent_lantern = 1 << 1,
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

// struct EquipParamGoods {
//     uint8_t filler_bytes[58];
//     uint16_t max_inventory;
//     uint16_t unk;
//     ItemType item_type;
// };

// struct EquipParamWeapon {
//     uint8_t filler_bytes_01[92];
//     uint32_t material;
//     uint8_t filler_bytes_02[122];
//     uint16_t reinforce_param_addoffset;
//     uint8_t filler_bytes_03[202];
//     WeaponType WeaponType;
// };

struct EquipParamProtector {
    uint8_t filler_bytes[214];
    ProtectorType ProtectorType;
};

struct EquipMtrlSetParam {
    uint32_t UpgradeMaterialId;
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
    uint32_t remaining_leftinstock_id;
    // Will remember what you've bought previously, and subtract it from the item quantity
    uint32_t is_release_eventflag_id; // If this event id specified is not complete, the item will not appear
    uint16_t item_quantity;
    uint8_t dummy_01;
    uint8_t item_type; // 0 = MapItemWeapon | 1 = Armour | 2 = MapItemAccessory | 3 = MapItemGoods | 4 = MapItemGem
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

struct ChrModuleBag {
    uint8_t undefined[0x40];
    StaggerModule* staggerModule;
};

struct ChrIns {
    uint8_t undefined[0x8];
    unsigned long long handle;
    uint8_t undefined2[0x180];
    ChrModuleBag* chrModulelBag;
    uint8_t undefined3[0x508];
    unsigned long long targetHandle;
};

struct ChrModuleBase {
    uint8_t undefined[0x8];
    ChrIns* owningChrIns;
};

struct ChrDamageModule {
    ChrModuleBase chrModuleBase;
};

struct BossHpBar {
    int displayId = -1;
    uint32_t pad0x4 = 0;
    unsigned long long bossHandle = -1;
    int currentDisplayDamage = 0;
    int unk0x14 = 0;
    bool isHit = 0;
    uint8_t pad0x19[0x3] = {};
    float displayTime = 0;
};

static_assert(sizeof(BossHpBar) == 0x20);

struct EntityHpBar {
    unsigned long long entityHandle = -1;
    uint32_t unk[6];
    char unkChar1;
    char unkChar2;
    uint16_t unkShort3;
    int currentDisplayDamage = -1;
    int previousHp = 0;
    float timeDisplayed;
    float totalTimeDisplayed;
    int uni2[3];
};

static_assert(sizeof(EntityHpBar) == 0x40);

struct CSFeManImp {
    uint8_t undefined[0x59F0];
    EntityHpBar entityHpBars[8];
    BossHpBar bossHpBars[3];
};

struct EntityHpBarSlots {
    unsigned long long handle = -1;
    ChrIns* chrIns = nullptr;
};

struct WorldChrMan {
    char unk[0x10EF8];
    ChrIns** playerArray[0x4];
};

struct SoundCombatStruct {
    uint8_t undefined[0x4];
    uint8_t isInCombat;
};

struct CSSound {
    uint8_t undefined[0x328];
    SoundCombatStruct* soundCombatStruct;
};

// struct ParamTable {
//     uint32_t ParamID;
//     uint32_t Pad0x4;
//     uint32_t ParamOffset;
//     uint32_t Pad0xC;
//     uint32_t StringOffset;
//     uint32_t Pad0x14;
// };
// static_assert(sizeof(ParamTable) == 0x18);
//
// struct ParamHeader {
//     uint32_t StringOffset;
//     uint8_t undefined0x4[0x6];
//     uint16_t RowCount;
//     uint8_t undefined0xC[0x4];
//     uint64_t ParamTypeOffset;
//     uint8_t undefined0x18[0x18];
//     uint32_t DataOffset;
//     uint8_t undefined0x34[0xC];
//     ParamTable Table;
// };
// static_assert(sizeof(ParamHeader) == 0x58);
//
// struct ParamInfo {
//     uint8_t undefined0x0[0x18];
//     wchar_t * ParamName;
//     uint8_t undefined0x20[0x60];
//     ParamHeader* Param;
// };
// static_assert(sizeof(ParamInfo) == 0x88);
//
// struct ParamResCap {
//     uint8_t undefined0x0[0x18];
//     wchar_t * ParamName;
//     uint8_t undefined0x20[0x8];
//     uint32_t ParamNameLength;
//     uint8_t undefined0x2C[0x54];
//     ParamInfo* ParamInfo;
// };
// static_assert(sizeof(ParamResCap) == 0x88);

//#define PARAM_STRUCTS

typedef void FindEquipParamWeaponEntry(EquipParamWeaponParamContainer*, uint32_t);

typedef void FindEquipParamProtectorEntry(EquipParamProtectorParamContainer*, uint32_t);

typedef void FindEquipParamGoodsEntry(ParamContainer*, uint32_t);

typedef void FindEquipMtrlSetParamEntry(ParamContainer*, uint32_t);

typedef void GetMenuCommonParamEntry(MenuCommonParamParamContainer*);

typedef void FindActionButtonParamEntry(ActionButtonParamParamContainer*, uint32_t);

typedef void (*EnableBossBar)(int*, int, int);

typedef void (*DisableBossBar)(int);

typedef ChrIns* GetChrInsFromEntityId(int*, uint64_t, uint32_t*);

typedef void (*SetEventFlag)(uint64_t, uint32_t*, bool);

typedef bool (*IsEventFlag)(uint64_t, uint32_t*);

typedef void (*HandleDamage)(ChrDamageModule*, int, char, char, uint32_t, bool);

typedef void (*ApplyEntityBarDamage)(EntityHpBar*, uint64_t, int32_t, uint32_t, bool);
                                     
typedef ChrIns* (*GetChrInsFromHandle)(WorldChrMan* worldChrMan, uint64_t* chrInsHandlePtr);

typedef bool (*ExecActionButtonParamProxy)(uintptr_t actionButtonManImp, int entryId);

typedef bool (*FeManCtor)(CSFeManImp*, uintptr_t, uintptr_t);

typedef bool (*EnemyInsDtor)(ChrIns*, uintptr_t);

typedef void (*ChrInsDtor)(ChrIns*);

typedef void (*UpdateUIBarStructs)(uintptr_t, uintptr_t);

static std::vector ABParam_list_materials = {
    7800, 7810, 7811, 7812, 7813, 7814, 7815, 7816, 7817, 7818, 7819, 7820, 7821, 7822,
    7823, 7824, 7825, 7826, 7827, 7828, 7850, 7860,
    7861, 7862, 7863, 7864, 7865, 7866, 7867, 7868, 7869, 7870, 7871, 7872, 7873, 7874,
    7875, 7876, 7877, 7878,
    207800, 207810, 207811, 207812, 207813, 207814, 207815, 207816, 207817, 207818, 207819,
    207820, 207821, 207822, 207823, 207824, 207825, 207826, 207827, 207828, 207829, 207830,
    207831, 207832, 207833, 207834, 207835, 207836, 207837, 207838, 207839, 207840, 207841,
    207842, 207843, 207844, 
};
static std::vector ABParam_list_items = {
    4000, 4110, 4200, 4201, 4202, 4250, 4251, 4252, 4253, 4260, 4270, 4280, 4300, 4350,
    6361, 9532
};
static std::vector ABParam_list_corpse_loot = {4100};
static std::vector ABParam_list_lost_runes = {1000};
static std::vector unlock_grace_ABParam_list = {6100};
static std::vector grace_resting_ABParam_list = {6101};