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

// Function BTS_CheckBeheviourModel.BTS_CheckBeheviourModel_C.ReceiveTick
// ()
void UBTS_CheckBeheviourModel_C::ReceiveTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_CheckBeheviourModel.BTS_CheckBeheviourModel_C.ReceiveTick");

	UBTS_CheckBeheviourModel_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTS_CheckBeheviourModel.BTS_CheckBeheviourModel_C.ExecuteUbergraph_BTS_CheckBeheviourModel
// ()
void UBTS_CheckBeheviourModel_C::ExecuteUbergraph_BTS_CheckBeheviourModel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_CheckBeheviourModel.BTS_CheckBeheviourModel_C.ExecuteUbergraph_BTS_CheckBeheviourModel");

	UBTS_CheckBeheviourModel_C_ExecuteUbergraph_BTS_CheckBeheviourModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
