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

// Function BTT_GetTargetCoords.BTT_GetTargetCoords_C.ReceiveExecuteAI
// ()
void UBTT_GetTargetCoords_C::ReceiveExecuteAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_GetTargetCoords.BTT_GetTargetCoords_C.ReceiveExecuteAI");

	UBTT_GetTargetCoords_C_ReceiveExecuteAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTT_GetTargetCoords.BTT_GetTargetCoords_C.ExecuteUbergraph_BTT_GetTargetCoords
// ()
void UBTT_GetTargetCoords_C::ExecuteUbergraph_BTT_GetTargetCoords()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_GetTargetCoords.BTT_GetTargetCoords_C.ExecuteUbergraph_BTT_GetTargetCoords");

	UBTT_GetTargetCoords_C_ExecuteUbergraph_BTT_GetTargetCoords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
