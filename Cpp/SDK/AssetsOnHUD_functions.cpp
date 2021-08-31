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

// Function AssetsOnHUD.AssetsOnHUD_C.UpdateInfo
// ()
void UAssetsOnHUD_C::UpdateInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetsOnHUD.AssetsOnHUD_C.UpdateInfo");

	UAssetsOnHUD_C_UpdateInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetsOnHUD.AssetsOnHUD_C.Construct
// ()
void UAssetsOnHUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetsOnHUD.AssetsOnHUD_C.Construct");

	UAssetsOnHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetsOnHUD.AssetsOnHUD_C.ExecuteUbergraph_AssetsOnHUD
// ()
void UAssetsOnHUD_C::ExecuteUbergraph_AssetsOnHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetsOnHUD.AssetsOnHUD_C.ExecuteUbergraph_AssetsOnHUD");

	UAssetsOnHUD_C_ExecuteUbergraph_AssetsOnHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
