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

// Function BTS_CheckTarget.BTS_CheckTarget_C.ReceiveTick
// ()
void UBTS_CheckTarget_C::ReceiveTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_CheckTarget.BTS_CheckTarget_C.ReceiveTick");

	UBTS_CheckTarget_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTS_CheckTarget.BTS_CheckTarget_C.ExecuteUbergraph_BTS_CheckTarget
// ()
void UBTS_CheckTarget_C::ExecuteUbergraph_BTS_CheckTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_CheckTarget.BTS_CheckTarget_C.ExecuteUbergraph_BTS_CheckTarget");

	UBTS_CheckTarget_C_ExecuteUbergraph_BTS_CheckTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
