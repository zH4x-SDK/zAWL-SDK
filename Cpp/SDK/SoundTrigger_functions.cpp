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

// Function SoundTrigger.SoundTrigger_C.ReceiveBeginPlay
// ()
void ASoundTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundTrigger.SoundTrigger_C.ReceiveBeginPlay");

	ASoundTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundTrigger.SoundTrigger_C.CheckDistance
// ()
void ASoundTrigger_C::CheckDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundTrigger.SoundTrigger_C.CheckDistance");

	ASoundTrigger_C_CheckDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundTrigger.SoundTrigger_C.ExecuteUbergraph_SoundTrigger
// ()
void ASoundTrigger_C::ExecuteUbergraph_SoundTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundTrigger.SoundTrigger_C.ExecuteUbergraph_SoundTrigger");

	ASoundTrigger_C_ExecuteUbergraph_SoundTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
