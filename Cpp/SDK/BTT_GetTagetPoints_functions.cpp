﻿// Name: AWL, Version: 4.24.3

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

// Function BTT_GetTagetPoints.BTT_GetTagetPoints_C.ReceiveExecuteAI
// ()
void UBTT_GetTagetPoints_C::ReceiveExecuteAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_GetTagetPoints.BTT_GetTagetPoints_C.ReceiveExecuteAI");

	UBTT_GetTagetPoints_C_ReceiveExecuteAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTT_GetTagetPoints.BTT_GetTagetPoints_C.ExecuteUbergraph_BTT_GetTagetPoints
// ()
void UBTT_GetTagetPoints_C::ExecuteUbergraph_BTT_GetTagetPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_GetTagetPoints.BTT_GetTagetPoints_C.ExecuteUbergraph_BTT_GetTagetPoints");

	UBTT_GetTagetPoints_C_ExecuteUbergraph_BTT_GetTagetPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
