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

// Function ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C.PlayerInteraction
// ()
void AROOM_ACTOR_BASE_C::PlayerInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C.PlayerInteraction");

	AROOM_ACTOR_BASE_C_PlayerInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C.ini
// ()
void AROOM_ACTOR_BASE_C::ini()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C.ini");

	AROOM_ACTOR_BASE_C_ini_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C.ExecuteUbergraph_ROOM_ACTOR_BASE
// ()
void AROOM_ACTOR_BASE_C::ExecuteUbergraph_ROOM_ACTOR_BASE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C.ExecuteUbergraph_ROOM_ACTOR_BASE");

	AROOM_ACTOR_BASE_C_ExecuteUbergraph_ROOM_ACTOR_BASE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
