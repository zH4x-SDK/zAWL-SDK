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

// Function AssetResource.AssetResource_C.ReceiveTick
// ()
void AAssetResource_C::ReceiveTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetResource.AssetResource_C.ReceiveTick");

	AAssetResource_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetResource.AssetResource_C.ReceiveBeginPlay
// ()
void AAssetResource_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetResource.AssetResource_C.ReceiveBeginPlay");

	AAssetResource_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetResource.AssetResource_C.ExecuteUbergraph_AssetResource
// ()
void AAssetResource_C::ExecuteUbergraph_AssetResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetResource.AssetResource_C.ExecuteUbergraph_AssetResource");

	AAssetResource_C_ExecuteUbergraph_AssetResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
