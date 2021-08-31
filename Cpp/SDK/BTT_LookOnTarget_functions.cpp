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

// Function BTT_LookOnTarget.BTT_LookOnTarget_C.ReceiveExecuteAI
// ()
void UBTT_LookOnTarget_C::ReceiveExecuteAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_LookOnTarget.BTT_LookOnTarget_C.ReceiveExecuteAI");

	UBTT_LookOnTarget_C_ReceiveExecuteAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTT_LookOnTarget.BTT_LookOnTarget_C.ExecuteUbergraph_BTT_LookOnTarget
// ()
void UBTT_LookOnTarget_C::ExecuteUbergraph_BTT_LookOnTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_LookOnTarget.BTT_LookOnTarget_C.ExecuteUbergraph_BTT_LookOnTarget");

	UBTT_LookOnTarget_C_ExecuteUbergraph_BTT_LookOnTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
