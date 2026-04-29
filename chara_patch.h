#pragma once

#define LOOKUP_SIZE	0x2000

extern "C"
{

extern uint8_t auto_btl_portrait_lookup[LOOKUP_SIZE];	

const std::string &GetSlotsData();	

extern "C" void OnDeleteMob_Destruction(Battle_Mob *pthis);
	
}

struct replacedEntry{
    int32_t new_chara;
    int32_t new_var;
    int32_t look_chara;
    int32_t look_var;
};