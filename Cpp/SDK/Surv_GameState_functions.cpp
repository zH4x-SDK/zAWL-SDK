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

// Function Surv_GameState.Surv_GameState_C.ReceiveBeginPlay
// ()
void ASurv_GameState_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Surv_GameState.Surv_GameState_C.ReceiveBeginPlay");

	ASurv_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_GameState.Surv_GameState_C.ExecuteUbergraph_Surv_GameState
// ()
void ASurv_GameState_C::ExecuteUbergraph_Surv_GameState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Surv_GameState.Surv_GameState_C.ExecuteUbergraph_Surv_GameState");

	ASurv_GameState_C_ExecuteUbergraph_Surv_GameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
