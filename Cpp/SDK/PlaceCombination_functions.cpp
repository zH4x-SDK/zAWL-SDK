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

// Function PlaceCombination.PlaceCombination_C.Draw
// ()
void UPlaceCombination_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaceCombination.PlaceCombination_C.Draw");

	UPlaceCombination_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlaceCombination.PlaceCombination_C.ExecuteUbergraph_PlaceCombination
// ()
void UPlaceCombination_C::ExecuteUbergraph_PlaceCombination()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaceCombination.PlaceCombination_C.ExecuteUbergraph_PlaceCombination");

	UPlaceCombination_C_ExecuteUbergraph_PlaceCombination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
