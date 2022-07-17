# Erd-Tools-CPP
A tool for runtime modding Elden Ring.  

![github__version](https://img.shields.io/github/v/release/Nordgaren/Erd-Tools-CPP)
[![GitHub all releases](https://img.shields.io/github/downloads/Nordgaren/Erd-Tools-CPP/total)](https://github.com/Nordgaren/Erd-Tools-CPP/releases/latest)
  
# WARNING  
Backup your saves before using this tool, and restore the backups before going online. 

## How To Use 
install [Elden Ring Mod Loader](https://www.nexusmods.com/eldenring/mods/117) and put this mod and ini file in the mods folder for mod loader. 
Adjust the ini to your liking an launch the game. You must re-launch the game to change the settings.

## Libraries
**[MinHook](https://github.com/TsudaKageyu/minhook)** library for hooking functions.  
**[INIReader](https://github.com/benhoyt/inih)** INI format reading library for C++.  

## Thank You  
**[LukeYui](https://github.com/LukeYui/)** Author of [Elden Ring Item Randomiser](https://github.com/LukeYui/elden_ring_item_randomiser) and whos code helped me get this dll setup.  
**Pav** Author of one of the CE Tables I used to find pointers and offsets, as well as provided the pointer list.  
**jamesq7** For helping figure out the cheat for enabling the map during combat and helping with the enable crafting during combat funciton.  
**[Wasted](https://github.com/FrankvdStam)** Rust nerd who gives me pointers for C++.  
**[TKGP](https://github.com/JKAnderson/)** Author of [DS Gadget](https://github.com/JKAnderson/DS-Gadget) [Property Hook](https://github.com/JKAnderson/PropertyHook) and [SoulsFormats](https://github.com/JKAnderson/SoulsFormats), which got me into this kind of modding.  
If I missed your contribution, let me know!  

# Change Log 
### Beta 0.1

* Initial release

* Can log flags in a console window when they get changed  

* Can enable the map during combat  

* Can enable crafting during combat  
