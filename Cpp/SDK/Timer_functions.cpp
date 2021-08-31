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

// Function Timer.Timer_C.TimerFnc
// ()
void UTimer_C::TimerFnc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Timer.Timer_C.TimerFnc");

	UTimer_C_TimerFnc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Timer.Timer_C.StartTimer
// ()
void UTimer_C::StartTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Timer.Timer_C.StartTimer");

	UTimer_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Timer.Timer_C.ExecuteUbergraph_Timer
// ()
void UTimer_C::ExecuteUbergraph_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Timer.Timer_C.ExecuteUbergraph_Timer");

	UTimer_C_ExecuteUbergraph_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
