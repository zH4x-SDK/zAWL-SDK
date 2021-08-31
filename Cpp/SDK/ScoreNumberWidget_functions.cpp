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

// Function ScoreNumberWidget.ScoreNumberWidget_C.Tick
// ()
void UScoreNumberWidget_C::Tick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScoreNumberWidget.ScoreNumberWidget_C.Tick");

	UScoreNumberWidget_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreNumberWidget.ScoreNumberWidget_C.Construct
// ()
void UScoreNumberWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScoreNumberWidget.ScoreNumberWidget_C.Construct");

	UScoreNumberWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreNumberWidget.ScoreNumberWidget_C.ExecuteUbergraph_ScoreNumberWidget
// ()
void UScoreNumberWidget_C::ExecuteUbergraph_ScoreNumberWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScoreNumberWidget.ScoreNumberWidget_C.ExecuteUbergraph_ScoreNumberWidget");

	UScoreNumberWidget_C_ExecuteUbergraph_ScoreNumberWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
