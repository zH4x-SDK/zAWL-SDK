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

// Function Furniture_24_AnimBP.Furniture_24_AnimBP_C.AnimGraph
// ()
void UFurniture_24_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Furniture_24_AnimBP.Furniture_24_AnimBP_C.AnimGraph");

	UFurniture_24_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Furniture_24_AnimBP.Furniture_24_AnimBP_C.ExecuteUbergraph_Furniture_24_AnimBP
// ()
void UFurniture_24_AnimBP_C::ExecuteUbergraph_Furniture_24_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Furniture_24_AnimBP.Furniture_24_AnimBP_C.ExecuteUbergraph_Furniture_24_AnimBP");

	UFurniture_24_AnimBP_C_ExecuteUbergraph_Furniture_24_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
