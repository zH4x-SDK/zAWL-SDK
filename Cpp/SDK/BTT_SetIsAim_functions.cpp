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

// Function BTT_SetIsAim.BTT_SetIsAim_C.ReceiveExecuteAI
// ()
void UBTT_SetIsAim_C::ReceiveExecuteAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_SetIsAim.BTT_SetIsAim_C.ReceiveExecuteAI");

	UBTT_SetIsAim_C_ReceiveExecuteAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTT_SetIsAim.BTT_SetIsAim_C.ExecuteUbergraph_BTT_SetIsAim
// ()
void UBTT_SetIsAim_C::ExecuteUbergraph_BTT_SetIsAim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_SetIsAim.BTT_SetIsAim_C.ExecuteUbergraph_BTT_SetIsAim");

	UBTT_SetIsAim_C_ExecuteUbergraph_BTT_SetIsAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
