﻿// Name: AWL, Version: 4.24.3

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

// Function Furniture_04_AnimBP.Furniture_04_AnimBP_C.AnimGraph
// ()
void UFurniture_04_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Furniture_04_AnimBP.Furniture_04_AnimBP_C.AnimGraph");

	UFurniture_04_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Furniture_04_AnimBP.Furniture_04_AnimBP_C.ExecuteUbergraph_Furniture_04_AnimBP
// ()
void UFurniture_04_AnimBP_C::ExecuteUbergraph_Furniture_04_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Furniture_04_AnimBP.Furniture_04_AnimBP_C.ExecuteUbergraph_Furniture_04_AnimBP");

	UFurniture_04_AnimBP_C_ExecuteUbergraph_Furniture_04_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
