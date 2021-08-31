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

// Function DebugActor.DebugActor_C.ReceiveBeginPlay
// ()
void ADebugActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugActor.DebugActor_C.ReceiveBeginPlay");

	ADebugActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugActor.DebugActor_C.CustomEvent_1
// ()
void ADebugActor_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugActor.DebugActor_C.CustomEvent_1");

	ADebugActor_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugActor.DebugActor_C.ExecuteUbergraph_DebugActor
// ()
void ADebugActor_C::ExecuteUbergraph_DebugActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugActor.DebugActor_C.ExecuteUbergraph_DebugActor");

	ADebugActor_C_ExecuteUbergraph_DebugActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
