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

// Function DeleteSpawn.DeleteSpawn_C.ReceiveBeginPlay
// ()
void ADeleteSpawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeleteSpawn.DeleteSpawn_C.ReceiveBeginPlay");

	ADeleteSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeleteSpawn.DeleteSpawn_C.Spawn
// ()
void ADeleteSpawn_C::Spawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeleteSpawn.DeleteSpawn_C.Spawn");

	ADeleteSpawn_C_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeleteSpawn.DeleteSpawn_C.ExecuteUbergraph_DeleteSpawn
// ()
void ADeleteSpawn_C::ExecuteUbergraph_DeleteSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeleteSpawn.DeleteSpawn_C.ExecuteUbergraph_DeleteSpawn");

	ADeleteSpawn_C_ExecuteUbergraph_DeleteSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
