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

// Function AssetProduce.AssetProduce_C.ReceiveBeginPlay
// ()
void AAssetProduce_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetProduce.AssetProduce_C.ReceiveBeginPlay");

	AAssetProduce_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetProduce.AssetProduce_C.ProduceTick
// ()
void AAssetProduce_C::ProduceTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetProduce.AssetProduce_C.ProduceTick");

	AAssetProduce_C_ProduceTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetProduce.AssetProduce_C.ExecuteUbergraph_AssetProduce
// ()
void AAssetProduce_C::ExecuteUbergraph_AssetProduce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetProduce.AssetProduce_C.ExecuteUbergraph_AssetProduce");

	AAssetProduce_C_ExecuteUbergraph_AssetProduce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
