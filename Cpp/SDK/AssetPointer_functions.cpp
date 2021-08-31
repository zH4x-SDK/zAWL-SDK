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

// Function AssetPointer.AssetPointer_C.PreConstruct
// ()
void UAssetPointer_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetPointer.AssetPointer_C.PreConstruct");

	UAssetPointer_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetPointer.AssetPointer_C.UpdateState
// ()
void UAssetPointer_C::UpdateState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetPointer.AssetPointer_C.UpdateState");

	UAssetPointer_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AssetPointer.AssetPointer_C.ExecuteUbergraph_AssetPointer
// ()
void UAssetPointer_C::ExecuteUbergraph_AssetPointer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AssetPointer.AssetPointer_C.ExecuteUbergraph_AssetPointer");

	UAssetPointer_C_ExecuteUbergraph_AssetPointer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
