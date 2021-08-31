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

// Function AssetProgressbar.AssetProgressbar_C.Draw
// ()
void UAssetProgressbar_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetProgressbar.AssetProgressbar_C.Draw");

	UAssetProgressbar_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetProgressbar.AssetProgressbar_C.ExecuteUbergraph_AssetProgressbar
// ()
void UAssetProgressbar_C::ExecuteUbergraph_AssetProgressbar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetProgressbar.AssetProgressbar_C.ExecuteUbergraph_AssetProgressbar");

	UAssetProgressbar_C_ExecuteUbergraph_AssetProgressbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
