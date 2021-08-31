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

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// ()
void ULuminARSessionFunctionLibrary::StartLuminARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession");

	ULuminARSessionFunctionLibrary_StartLuminARSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// ()
void ULuminARFrameFunctionLibrary::LuminARLineTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace");

	ULuminARFrameFunctionLibrary_LuminARLineTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// ()
void ULuminARFrameFunctionLibrary::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState");

	ULuminARFrameFunctionLibrary_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation
// ()
void ULuminARFrameFunctionLibrary::GetLightEstimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation");

	ULuminARFrameFunctionLibrary_GetLightEstimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
