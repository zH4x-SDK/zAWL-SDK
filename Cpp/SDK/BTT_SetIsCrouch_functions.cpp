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

// Function BTT_SetIsCrouch.BTT_SetIsCrouch_C.ReceiveExecuteAI
// ()
void UBTT_SetIsCrouch_C::ReceiveExecuteAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_SetIsCrouch.BTT_SetIsCrouch_C.ReceiveExecuteAI");

	UBTT_SetIsCrouch_C_ReceiveExecuteAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTT_SetIsCrouch.BTT_SetIsCrouch_C.ExecuteUbergraph_BTT_SetIsCrouch
// ()
void UBTT_SetIsCrouch_C::ExecuteUbergraph_BTT_SetIsCrouch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_SetIsCrouch.BTT_SetIsCrouch_C.ExecuteUbergraph_BTT_SetIsCrouch");

	UBTT_SetIsCrouch_C_ExecuteUbergraph_BTT_SetIsCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
