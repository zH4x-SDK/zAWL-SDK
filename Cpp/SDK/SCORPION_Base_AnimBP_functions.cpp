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

// Function SCORPION_Base_AnimBP.SCORPION_Base_AnimBP_C.AnimGraph
// ()
void USCORPION_Base_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SCORPION_Base_AnimBP.SCORPION_Base_AnimBP_C.AnimGraph");

	USCORPION_Base_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SCORPION_Base_AnimBP.SCORPION_Base_AnimBP_C.ExecuteUbergraph_SCORPION_Base_AnimBP
// ()
void USCORPION_Base_AnimBP_C::ExecuteUbergraph_SCORPION_Base_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SCORPION_Base_AnimBP.SCORPION_Base_AnimBP_C.ExecuteUbergraph_SCORPION_Base_AnimBP");

	USCORPION_Base_AnimBP_C_ExecuteUbergraph_SCORPION_Base_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
