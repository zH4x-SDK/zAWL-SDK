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

// Function StatisticString.StatisticString_C.Draw
// ()
void UStatisticString_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticString.StatisticString_C.Draw");

	UStatisticString_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticString.StatisticString_C.PreConstruct
// ()
void UStatisticString_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticString.StatisticString_C.PreConstruct");

	UStatisticString_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticString.StatisticString_C.ExecuteUbergraph_StatisticString
// ()
void UStatisticString_C::ExecuteUbergraph_StatisticString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticString.StatisticString_C.ExecuteUbergraph_StatisticString");

	UStatisticString_C_ExecuteUbergraph_StatisticString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
