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

// Function StatisticZone.StatisticZone_C.ReceiveActorBeginOverlap
// ()
void AStatisticZone_C::ReceiveActorBeginOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticZone.StatisticZone_C.ReceiveActorBeginOverlap");

	AStatisticZone_C_ReceiveActorBeginOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatisticZone.StatisticZone_C.ExecuteUbergraph_StatisticZone
// ()
void AStatisticZone_C::ExecuteUbergraph_StatisticZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StatisticZone.StatisticZone_C.ExecuteUbergraph_StatisticZone");

	AStatisticZone_C_ExecuteUbergraph_StatisticZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
