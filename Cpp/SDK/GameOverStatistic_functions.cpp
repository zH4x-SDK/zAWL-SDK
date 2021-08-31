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

// Function GameOverStatistic.GameOverStatistic_C.Construct
// ()
void UGameOverStatistic_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverStatistic.GameOverStatistic_C.Construct");

	UGameOverStatistic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverStatistic.GameOverStatistic_C.ShowStat
// ()
void UGameOverStatistic_C::ShowStat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverStatistic.GameOverStatistic_C.ShowStat");

	UGameOverStatistic_C_ShowStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverStatistic.GameOverStatistic_C.ExecuteUbergraph_GameOverStatistic
// ()
void UGameOverStatistic_C::ExecuteUbergraph_GameOverStatistic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameOverStatistic.GameOverStatistic_C.ExecuteUbergraph_GameOverStatistic");

	UGameOverStatistic_C_ExecuteUbergraph_GameOverStatistic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
