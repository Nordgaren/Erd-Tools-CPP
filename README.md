# Erd-Tools-CPP
A tool for runtime modding Elden Ring.  

![github__version](https://img.shields.io/github/v/release/Nordgaren/Erd-Tools-CPP)
[![GitHub all releases](https://img.shields.io/github/downloads/Nordgaren/Erd-Tools-CPP/total)](https://github.com/Nordgaren/Erd-Tools-CPP/releases/latest)
  
# WARNING  
Backup your saves before using this tool, and restore the backups before going online. 

# Permissions
Feel free to use this in your mod. Just link people here so they can get help if the DLL is failing them.  

# Features 
All features are adjustable in the ini!  

Open map in combat  
Crafting in combat  
Event Flag log to console window  
Auto pickup items when in range   
Lock interactions in combat  
Harvest range multiplier  
Map scroll speed multiplier  
Boss Bar Poise Meter (Replaces damage numbers)  
Entity Bar Poise Meter (Replaces damage numbers)  

## How To Use 
install [Elden Ring Mod Loader](https://www.nexusmods.com/eldenring/mods/117) and put this mod and ini file in the mods folder for mod loader. 
Adjust the ini to your liking an launch the game. You must re-launch the game to change the settings.

## Libraries
**[MinHook](https://github.com/TsudaKageyu/minhook)** library for hooking functions.  
**[INIReader](https://github.com/benhoyt/inih)** INI format reading library for C++.  

## Thank You  
**[LukeYui](https://github.com/LukeYui/)** - Author of [Elden Ring Item Randomiser](https://github.com/LukeYui/elden_ring_item_randomiser) and who's code helped me get this dll setup.  
**Pav** - Author of one of the CE Tables I use. Talented reverse engineer who is incredibly helpful!   
**[jamesq7](https://github.com/kh0nsu)** - For helping figure out the patch for enabling the map during combat and helping with the enable crafting during combat function.  
**[Wasted](https://github.com/FrankvdStam)** - Rust nerd who gives me pointers for C++.  
**[Tremwil](https://github.com/tremwil)** - Smart person who help me debug dumb mistakes.  
**[TKGP](https://github.com/JKAnderson/)** - Author of [DS Gadget](https://github.com/JKAnderson/DS-Gadget) [Property Hook](https://github.com/JKAnderson/PropertyHook) and [SoulsFormats](https://github.com/JKAnderson/SoulsFormats), which got me into this kind of modding.  
If I missed your contribution, let me know!  

# Change Log 
### Erd Tools dll 1.1.4
* added height multiplier for harvest, loot, corpse loot and dropped runes.

### Erd Tools dll 1.1.3
* added range multiplier for loot, corpse loot and dropped runes.

### Erd Tools dll 1.1.2
* ER 1.08.0 compatibility.  

* added save_extension changing, since everyone else is adding this to their dll mod :fatcat:  Must have ErdTools loaded first and highest priorty (no delay from game start)

### Erd Tools dll 1.1.1
* Address crashing from enemies that don't get cleaned up properly.  

### Erd Tools dll 1.1
* Updated for 1.07

* Fixed some issues where the poise bars would cause random crashes.  

### Erd Tools dll 1
* Release!  

* Worked out bugs involving CPU usage.  

* Expanded loot lockout to interaction lockout, including touching graces and sitting at them in combat (not just when an enemy is near them, now.)  

### Beta 0.1.4
* Added poise to entity health bar damage numbers (Experimental like boss bar)  

* Added the ability to select a few categories for auto loot.  

* Added loot lockout in combat with the same categories as auto loot. These items will not even display to you when in combat, so you can't pick them up.  

### Beta 0.1.3
* Added option to display poise instead of damage numbers on boss bar. (Experimental)  

### Beta 0.1.2.1
* Added range multiplier for harvesting materials.  

* Added multiplier for map scroll speed  

* Fixed a bug  

### Beta 0.1.2

* Added auto harvest

### Beta 0.1

* Initial release

* Can log flags in a console window when they get changed  

* Can enable the map during combat  

* Can enable crafting during combat  
