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

// Function Beretta_AnimBP.Beretta_AnimBP_C.AnimGraph
// ()
void UBeretta_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Beretta_AnimBP.Beretta_AnimBP_C.AnimGraph");

	UBeretta_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Beretta_AnimBP.Beretta_AnimBP_C.ExecuteUbergraph_Beretta_AnimBP
// ()
void UBeretta_AnimBP_C::ExecuteUbergraph_Beretta_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Beretta_AnimBP.Beretta_AnimBP_C.ExecuteUbergraph_Beretta_AnimBP");

	UBeretta_AnimBP_C_ExecuteUbergraph_Beretta_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
