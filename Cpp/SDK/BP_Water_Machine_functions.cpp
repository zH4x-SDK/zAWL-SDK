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

// Function BP_Water_Machine.BP_Water_Machine_C.ReceiveBeginPlay
// ()
void ABP_Water_Machine_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Water_Machine.BP_Water_Machine_C.ReceiveBeginPlay");

	ABP_Water_Machine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Water_Machine.BP_Water_Machine_C.ExecuteUbergraph_BP_Water_Machine
// ()
void ABP_Water_Machine_C::ExecuteUbergraph_BP_Water_Machine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Water_Machine.BP_Water_Machine_C.ExecuteUbergraph_BP_Water_Machine");

	ABP_Water_Machine_C_ExecuteUbergraph_BP_Water_Machine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
