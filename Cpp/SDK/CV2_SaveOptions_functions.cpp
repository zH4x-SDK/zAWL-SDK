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

// Function CV2_SaveOptions.CV2_SaveOptions_C.CheckSettingsCorrect
// ()
void UCV2_SaveOptions_C::CheckSettingsCorrect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CV2_SaveOptions.CV2_SaveOptions_C.CheckSettingsCorrect");

	UCV2_SaveOptions_C_CheckSettingsCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CV2_SaveOptions.CV2_SaveOptions_C.GetSettings
// ()
void UCV2_SaveOptions_C::GetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CV2_SaveOptions.CV2_SaveOptions_C.GetSettings");

	UCV2_SaveOptions_C_GetSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CV2_SaveOptions.CV2_SaveOptions_C.SaveSettings
// ()
void UCV2_SaveOptions_C::SaveSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CV2_SaveOptions.CV2_SaveOptions_C.SaveSettings");

	UCV2_SaveOptions_C_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
