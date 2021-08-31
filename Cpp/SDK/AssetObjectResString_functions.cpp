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

// Function AssetObjectResString.AssetObjectResString_C.Draw
// ()
void UAssetObjectResString_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetObjectResString.AssetObjectResString_C.Draw");

	UAssetObjectResString_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetObjectResString.AssetObjectResString_C.ExecuteUbergraph_AssetObjectResString
// ()
void UAssetObjectResString_C::ExecuteUbergraph_AssetObjectResString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetObjectResString.AssetObjectResString_C.ExecuteUbergraph_AssetObjectResString");

	UAssetObjectResString_C_ExecuteUbergraph_AssetObjectResString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
