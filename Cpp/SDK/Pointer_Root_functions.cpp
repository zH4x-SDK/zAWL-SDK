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

// Function Pointer_Root.Pointer_Root_C.CheckVisibleDistance
// ()
void UPointer_Root_C::CheckVisibleDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pointer_Root.Pointer_Root_C.CheckVisibleDistance");

	UPointer_Root_C_CheckVisibleDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pointer_Root.Pointer_Root_C.UpdateState
// ()
void UPointer_Root_C::UpdateState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pointer_Root.Pointer_Root_C.UpdateState");

	UPointer_Root_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pointer_Root.Pointer_Root_C.UpdatePositionInViewport
// ()
void UPointer_Root_C::UpdatePositionInViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pointer_Root.Pointer_Root_C.UpdatePositionInViewport");

	UPointer_Root_C_UpdatePositionInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
