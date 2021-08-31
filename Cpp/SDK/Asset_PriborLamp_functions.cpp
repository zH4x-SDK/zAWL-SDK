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

// Function Asset_PriborLamp.Asset_PriborLamp_C.PreConstruct
// ()
void UAsset_PriborLamp_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborLamp.Asset_PriborLamp_C.PreConstruct");

	UAsset_PriborLamp_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Asset_PriborLamp.Asset_PriborLamp_C.SetState
// ()
void UAsset_PriborLamp_C::SetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborLamp.Asset_PriborLamp_C.SetState");

	UAsset_PriborLamp_C_SetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Asset_PriborLamp.Asset_PriborLamp_C.ExecuteUbergraph_Asset_PriborLamp
// ()
void UAsset_PriborLamp_C::ExecuteUbergraph_Asset_PriborLamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborLamp.Asset_PriborLamp_C.ExecuteUbergraph_Asset_PriborLamp");

	UAsset_PriborLamp_C_ExecuteUbergraph_Asset_PriborLamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
