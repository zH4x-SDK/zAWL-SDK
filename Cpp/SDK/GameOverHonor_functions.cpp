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

// Function GameOverHonor.GameOverHonor_C.Construct
// ()
void UGameOverHonor_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverHonor.GameOverHonor_C.Construct");

	UGameOverHonor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverHonor.GameOverHonor_C.ShowMe
// ()
void UGameOverHonor_C::ShowMe()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverHonor.GameOverHonor_C.ShowMe");

	UGameOverHonor_C_ShowMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverHonor.GameOverHonor_C.ExecuteUbergraph_GameOverHonor
// ()
void UGameOverHonor_C::ExecuteUbergraph_GameOverHonor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverHonor.GameOverHonor_C.ExecuteUbergraph_GameOverHonor");

	UGameOverHonor_C_ExecuteUbergraph_GameOverHonor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
