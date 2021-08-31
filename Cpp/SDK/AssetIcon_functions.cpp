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

// Function AssetIcon.AssetIcon_C.PreConstruct
// ()
void UAssetIcon_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetIcon.AssetIcon_C.PreConstruct");

	UAssetIcon_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetIcon.AssetIcon_C.SetStyle
// ()
void UAssetIcon_C::SetStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetIcon.AssetIcon_C.SetStyle");

	UAssetIcon_C_SetStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetIcon.AssetIcon_C.Draw
// ()
void UAssetIcon_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetIcon.AssetIcon_C.Draw");

	UAssetIcon_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetIcon.AssetIcon_C.ExecuteUbergraph_AssetIcon
// ()
void UAssetIcon_C::ExecuteUbergraph_AssetIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetIcon.AssetIcon_C.ExecuteUbergraph_AssetIcon");

	UAssetIcon_C_ExecuteUbergraph_AssetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
