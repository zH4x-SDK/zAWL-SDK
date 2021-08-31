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

// Function BTS_CheckIsDead.BTS_CheckIsDead_C.ReceiveTick
// ()
void UBTS_CheckIsDead_C::ReceiveTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_CheckIsDead.BTS_CheckIsDead_C.ReceiveTick");

	UBTS_CheckIsDead_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTS_CheckIsDead.BTS_CheckIsDead_C.ExecuteUbergraph_BTS_CheckIsDead
// ()
void UBTS_CheckIsDead_C::ExecuteUbergraph_BTS_CheckIsDead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_CheckIsDead.BTS_CheckIsDead_C.ExecuteUbergraph_BTS_CheckIsDead");

	UBTS_CheckIsDead_C_ExecuteUbergraph_BTS_CheckIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
