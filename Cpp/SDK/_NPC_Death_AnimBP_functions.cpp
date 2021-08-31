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

// Function _NPC_Death_AnimBP._NPC_Death_AnimBP_C.AnimGraph
// ()
void U_NPC_Death_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function _NPC_Death_AnimBP._NPC_Death_AnimBP_C.AnimGraph");

	U_NPC_Death_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function _NPC_Death_AnimBP._NPC_Death_AnimBP_C.ExecuteUbergraph__NPC_Death_AnimBP
// ()
void U_NPC_Death_AnimBP_C::ExecuteUbergraph__NPC_Death_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function _NPC_Death_AnimBP._NPC_Death_AnimBP_C.ExecuteUbergraph__NPC_Death_AnimBP");

	U_NPC_Death_AnimBP_C_ExecuteUbergraph__NPC_Death_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
