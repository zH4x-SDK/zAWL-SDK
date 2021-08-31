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

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// ()
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");

	UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// ()
void UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");

	UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// ()
void UGameMapsSettings::GetGameMapsSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");

	UGameMapsSettings_GetGameMapsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
