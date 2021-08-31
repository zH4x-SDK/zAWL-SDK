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

// Function InteractiveTimerClass.InteractiveTimerClass_C.CALL_BACK
// ()
void UInteractiveTimerClass_C::CALL_BACK()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveTimerClass.InteractiveTimerClass_C.CALL_BACK");

	UInteractiveTimerClass_C_CALL_BACK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveTimerClass.InteractiveTimerClass_C.ADD_TIMER
// ()
void UInteractiveTimerClass_C::ADD_TIMER()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveTimerClass.InteractiveTimerClass_C.ADD_TIMER");

	UInteractiveTimerClass_C_ADD_TIMER_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveTimerClass.InteractiveTimerClass_C.TIME_OUT__DelegateSignature
// ()
void UInteractiveTimerClass_C::TIME_OUT__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveTimerClass.InteractiveTimerClass_C.TIME_OUT__DelegateSignature");

	UInteractiveTimerClass_C_TIME_OUT__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
