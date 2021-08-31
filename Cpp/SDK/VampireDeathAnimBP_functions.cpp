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

// Function VampireDeathAnimBP.VampireDeathAnimBP_C.AnimGraph
// ()
void UVampireDeathAnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireDeathAnimBP.VampireDeathAnimBP_C.AnimGraph");

	UVampireDeathAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VampireDeathAnimBP.VampireDeathAnimBP_C.ExecuteUbergraph_VampireDeathAnimBP
// ()
void UVampireDeathAnimBP_C::ExecuteUbergraph_VampireDeathAnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireDeathAnimBP.VampireDeathAnimBP_C.ExecuteUbergraph_VampireDeathAnimBP");

	UVampireDeathAnimBP_C_ExecuteUbergraph_VampireDeathAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
