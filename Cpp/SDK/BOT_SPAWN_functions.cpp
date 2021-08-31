// Name: AWL, Version: 4.24.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BOT_SPAWN.BOT_SPAWN_C.CheckDayKillCreatures
// ()
void ABOT_SPAWN_C::CheckDayKillCreatures()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_SPAWN.BOT_SPAWN_C.CheckDayKillCreatures");

	ABOT_SPAWN_C_CheckDayKillCreatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_SPAWN.BOT_SPAWN_C.CheckCreaturesSpawn
// ()
void ABOT_SPAWN_C::CheckCreaturesSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_SPAWN.BOT_SPAWN_C.CheckCreaturesSpawn");

	ABOT_SPAWN_C_CheckCreaturesSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_SPAWN.BOT_SPAWN_C.ReceiveBeginPlay
// ()
void ABOT_SPAWN_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_SPAWN.BOT_SPAWN_C.ReceiveBeginPlay");

	ABOT_SPAWN_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_SPAWN.BOT_SPAWN_C.ExecuteUbergraph_BOT_SPAWN
// ()
void ABOT_SPAWN_C::ExecuteUbergraph_BOT_SPAWN()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_SPAWN.BOT_SPAWN_C.ExecuteUbergraph_BOT_SPAWN");

	ABOT_SPAWN_C_ExecuteUbergraph_BOT_SPAWN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
