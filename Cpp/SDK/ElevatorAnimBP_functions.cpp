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

// Function ElevatorAnimBP.ElevatorAnimBP_C.AnimGraph
// ()
void UElevatorAnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorAnimBP.ElevatorAnimBP_C.AnimGraph");

	UElevatorAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ElevatorAnimBP.ElevatorAnimBP_C.ExecuteUbergraph_ElevatorAnimBP
// ()
void UElevatorAnimBP_C::ExecuteUbergraph_ElevatorAnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorAnimBP.ElevatorAnimBP_C.ExecuteUbergraph_ElevatorAnimBP");

	UElevatorAnimBP_C_ExecuteUbergraph_ElevatorAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
