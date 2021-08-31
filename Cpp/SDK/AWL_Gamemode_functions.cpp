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

// Function AWL_Gamemode.AWL_Gamemode_C.ReceiveBeginPlay
// ()
void AAWL_Gamemode_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Gamemode.AWL_Gamemode_C.ReceiveBeginPlay");

	AAWL_Gamemode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_Gamemode.AWL_Gamemode_C.ExecuteUbergraph_AWL_Gamemode
// ()
void AAWL_Gamemode_C::ExecuteUbergraph_AWL_Gamemode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Gamemode.AWL_Gamemode_C.ExecuteUbergraph_AWL_Gamemode");

	AAWL_Gamemode_C_ExecuteUbergraph_AWL_Gamemode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
