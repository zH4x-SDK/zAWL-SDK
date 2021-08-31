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

// Function SUR_UZI_AnimBP.SUR_UZI_AnimBP_C.AnimGraph
// ()
void USUR_UZI_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SUR_UZI_AnimBP.SUR_UZI_AnimBP_C.AnimGraph");

	USUR_UZI_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SUR_UZI_AnimBP.SUR_UZI_AnimBP_C.ExecuteUbergraph_SUR_UZI_AnimBP
// ()
void USUR_UZI_AnimBP_C::ExecuteUbergraph_SUR_UZI_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SUR_UZI_AnimBP.SUR_UZI_AnimBP_C.ExecuteUbergraph_SUR_UZI_AnimBP");

	USUR_UZI_AnimBP_C_ExecuteUbergraph_SUR_UZI_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
