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

// Function QUEST_Banner_Actor.QUEST_Banner_Actor_C.ReceiveBeginPlay
// ()
void AQUEST_Banner_Actor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QUEST_Banner_Actor.QUEST_Banner_Actor_C.ReceiveBeginPlay");

	AQUEST_Banner_Actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QUEST_Banner_Actor.QUEST_Banner_Actor_C.ExecuteUbergraph_QUEST_Banner_Actor
// ()
void AQUEST_Banner_Actor_C::ExecuteUbergraph_QUEST_Banner_Actor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QUEST_Banner_Actor.QUEST_Banner_Actor_C.ExecuteUbergraph_QUEST_Banner_Actor");

	AQUEST_Banner_Actor_C_ExecuteUbergraph_QUEST_Banner_Actor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
