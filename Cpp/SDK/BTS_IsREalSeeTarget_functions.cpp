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

// Function BTS_IsREalSeeTarget.BTS_IsREalSeeTarget_C.ReceiveTick
// ()
void UBTS_IsREalSeeTarget_C::ReceiveTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_IsREalSeeTarget.BTS_IsREalSeeTarget_C.ReceiveTick");

	UBTS_IsREalSeeTarget_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTS_IsREalSeeTarget.BTS_IsREalSeeTarget_C.ExecuteUbergraph_BTS_IsREalSeeTarget
// ()
void UBTS_IsREalSeeTarget_C::ExecuteUbergraph_BTS_IsREalSeeTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_IsREalSeeTarget.BTS_IsREalSeeTarget_C.ExecuteUbergraph_BTS_IsREalSeeTarget");

	UBTS_IsREalSeeTarget_C_ExecuteUbergraph_BTS_IsREalSeeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
