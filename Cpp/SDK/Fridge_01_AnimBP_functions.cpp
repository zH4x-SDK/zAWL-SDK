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

// Function Fridge_01_AnimBP.Fridge_01_AnimBP_C.AnimGraph
// ()
void UFridge_01_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fridge_01_AnimBP.Fridge_01_AnimBP_C.AnimGraph");

	UFridge_01_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fridge_01_AnimBP.Fridge_01_AnimBP_C.ExecuteUbergraph_Fridge_01_AnimBP
// ()
void UFridge_01_AnimBP_C::ExecuteUbergraph_Fridge_01_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fridge_01_AnimBP.Fridge_01_AnimBP_C.ExecuteUbergraph_Fridge_01_AnimBP");

	UFridge_01_AnimBP_C_ExecuteUbergraph_Fridge_01_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
