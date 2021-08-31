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

// Function StatisticCard.StatisticCard_C.Draw
// ()
void UStatisticCard_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticCard.StatisticCard_C.Draw");

	UStatisticCard_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticCard.StatisticCard_C.PreConstruct
// ()
void UStatisticCard_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticCard.StatisticCard_C.PreConstruct");

	UStatisticCard_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticCard.StatisticCard_C.ExecuteUbergraph_StatisticCard
// ()
void UStatisticCard_C::ExecuteUbergraph_StatisticCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticCard.StatisticCard_C.ExecuteUbergraph_StatisticCard");

	UStatisticCard_C_ExecuteUbergraph_StatisticCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
