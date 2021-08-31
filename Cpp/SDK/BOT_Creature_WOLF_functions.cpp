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

// Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.ReceiveBeginPlay
// ()
void ABOT_Creature_WOLF_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.ReceiveBeginPlay");

	ABOT_Creature_WOLF_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.ExecuteUbergraph_BOT_Creature_WOLF
// ()
void ABOT_Creature_WOLF_C::ExecuteUbergraph_BOT_Creature_WOLF()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_Creature_WOLF.BOT_Creature_WOLF_C.ExecuteUbergraph_BOT_Creature_WOLF");

	ABOT_Creature_WOLF_C_ExecuteUbergraph_BOT_Creature_WOLF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
