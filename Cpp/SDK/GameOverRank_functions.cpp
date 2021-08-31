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

// Function GameOverRank.GameOverRank_C.Construct
// ()
void UGameOverRank_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverRank.GameOverRank_C.Construct");

	UGameOverRank_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverRank.GameOverRank_C.Show
// ()
void UGameOverRank_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverRank.GameOverRank_C.Show");

	UGameOverRank_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverRank.GameOverRank_C.ExecuteUbergraph_GameOverRank
// ()
void UGameOverRank_C::ExecuteUbergraph_GameOverRank()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverRank.GameOverRank_C.ExecuteUbergraph_GameOverRank");

	UGameOverRank_C_ExecuteUbergraph_GameOverRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
