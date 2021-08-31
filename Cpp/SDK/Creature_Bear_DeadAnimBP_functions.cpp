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

// Function Creature_Bear_DeadAnimBP.Creature_Bear_DeadAnimBP_C.AnimGraph
// ()
void UCreature_Bear_DeadAnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Creature_Bear_DeadAnimBP.Creature_Bear_DeadAnimBP_C.AnimGraph");

	UCreature_Bear_DeadAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Creature_Bear_DeadAnimBP.Creature_Bear_DeadAnimBP_C.ExecuteUbergraph_Creature_Bear_DeadAnimBP
// ()
void UCreature_Bear_DeadAnimBP_C::ExecuteUbergraph_Creature_Bear_DeadAnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Creature_Bear_DeadAnimBP.Creature_Bear_DeadAnimBP_C.ExecuteUbergraph_Creature_Bear_DeadAnimBP");

	UCreature_Bear_DeadAnimBP_C_ExecuteUbergraph_Creature_Bear_DeadAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
