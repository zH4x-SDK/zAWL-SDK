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

// Function SpawnManager.SpawnManager_C.GetSpawnTransform
// ()
void USpawnManager_C::GetSpawnTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnManager.SpawnManager_C.GetSpawnTransform");

	USpawnManager_C_GetSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnManager.SpawnManager_C.ReceiveBeginPlay
// ()
void USpawnManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnManager.SpawnManager_C.ReceiveBeginPlay");

	USpawnManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnManager.SpawnManager_C.ExecuteUbergraph_SpawnManager
// ()
void USpawnManager_C::ExecuteUbergraph_SpawnManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnManager.SpawnManager_C.ExecuteUbergraph_SpawnManager");

	USpawnManager_C_ExecuteUbergraph_SpawnManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
