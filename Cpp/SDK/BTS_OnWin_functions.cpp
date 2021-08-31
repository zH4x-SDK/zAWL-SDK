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

// Function BTS_OnWin.BTS_OnWin_C.ReceiveActivation
// ()
void UBTS_OnWin_C::ReceiveActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_OnWin.BTS_OnWin_C.ReceiveActivation");

	UBTS_OnWin_C_ReceiveActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTS_OnWin.BTS_OnWin_C.ExecuteUbergraph_BTS_OnWin
// ()
void UBTS_OnWin_C::ExecuteUbergraph_BTS_OnWin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTS_OnWin.BTS_OnWin_C.ExecuteUbergraph_BTS_OnWin");

	UBTS_OnWin_C_ExecuteUbergraph_BTS_OnWin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
