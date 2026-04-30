This fork provides xv2patcher with the ability to change the unlock condition of any character slot, including DLC (mods to be tested) to that of a different character slot.

This works by defining a map with character and slot ids mapped to a different pair of character and slot ids, and modifying the UnlockCharaMods function to check for these mappings and replace the ids in the check_unlock funtion.

This DOES NOT enable you to define custom unlock conditions, only copying those of a vanilla character slot. At the moment you need to modify the charaReplaceMap to your liking an build the project yourself. Soon I'll update the project to include the prebuilt .dll and an .ini file for defining the replacement map.

--------------------------------------------------------------------------

Required compiler: gcc (mingw64)

Requires: eternity_common

Required libraries: minhook

The main Makefile builds the xinput version of the .dll. Use "make -f Makefile.dinput8" to build the dinput8 version.
