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

// Function AssetWarehouse.AssetWarehouse_C.ReceiveBeginPlay
// ()
void AAssetWarehouse_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetWarehouse.AssetWarehouse_C.ReceiveBeginPlay");

	AAssetWarehouse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetWarehouse.AssetWarehouse_C.ProduceTick
// ()
void AAssetWarehouse_C::ProduceTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetWarehouse.AssetWarehouse_C.ProduceTick");

	AAssetWarehouse_C_ProduceTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetWarehouse.AssetWarehouse_C.ExecuteUbergraph_AssetWarehouse
// ()
void AAssetWarehouse_C::ExecuteUbergraph_AssetWarehouse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetWarehouse.AssetWarehouse_C.ExecuteUbergraph_AssetWarehouse");

	AAssetWarehouse_C_ExecuteUbergraph_AssetWarehouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
