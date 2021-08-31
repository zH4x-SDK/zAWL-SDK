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

// Function StalevarkaAnimBP.StalevarkaAnimBP_C.AnimGraph
// ()
void UStalevarkaAnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StalevarkaAnimBP.StalevarkaAnimBP_C.AnimGraph");

	UStalevarkaAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StalevarkaAnimBP.StalevarkaAnimBP_C.ExecuteUbergraph_StalevarkaAnimBP
// ()
void UStalevarkaAnimBP_C::ExecuteUbergraph_StalevarkaAnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StalevarkaAnimBP.StalevarkaAnimBP_C.ExecuteUbergraph_StalevarkaAnimBP");

	UStalevarkaAnimBP_C_ExecuteUbergraph_StalevarkaAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
