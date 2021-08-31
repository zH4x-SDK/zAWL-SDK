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

// Function Fence_BaseSpawn.Fence_BaseSpawn_C.ReceiveBeginPlay
// ()
void AFence_BaseSpawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fence_BaseSpawn.Fence_BaseSpawn_C.ReceiveBeginPlay");

	AFence_BaseSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fence_BaseSpawn.Fence_BaseSpawn_C.ExecuteUbergraph_Fence_BaseSpawn
// ()
void AFence_BaseSpawn_C::ExecuteUbergraph_Fence_BaseSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fence_BaseSpawn.Fence_BaseSpawn_C.ExecuteUbergraph_Fence_BaseSpawn");

	AFence_BaseSpawn_C_ExecuteUbergraph_Fence_BaseSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
