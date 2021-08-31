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

// Function Asset_PriborMonitor.Asset_PriborMonitor_C.PreConstruct
// ()
void UAsset_PriborMonitor_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborMonitor.Asset_PriborMonitor_C.PreConstruct");

	UAsset_PriborMonitor_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Asset_PriborMonitor.Asset_PriborMonitor_C.Tick
// ()
void UAsset_PriborMonitor_C::Tick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborMonitor.Asset_PriborMonitor_C.Tick");

	UAsset_PriborMonitor_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Asset_PriborMonitor.Asset_PriborMonitor_C.SetValue
// ()
void UAsset_PriborMonitor_C::SetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborMonitor.Asset_PriborMonitor_C.SetValue");

	UAsset_PriborMonitor_C_SetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Asset_PriborMonitor.Asset_PriborMonitor_C.ExecuteUbergraph_Asset_PriborMonitor
// ()
void UAsset_PriborMonitor_C::ExecuteUbergraph_Asset_PriborMonitor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_PriborMonitor.Asset_PriborMonitor_C.ExecuteUbergraph_Asset_PriborMonitor");

	UAsset_PriborMonitor_C_ExecuteUbergraph_Asset_PriborMonitor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
