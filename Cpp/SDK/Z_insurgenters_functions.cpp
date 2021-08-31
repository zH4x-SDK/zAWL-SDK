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

// Function Z_insurgenters.Z_insurgenters_C.ReceiveBeginPlay
// ()
void AZ_insurgenters_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z_insurgenters.Z_insurgenters_C.ReceiveBeginPlay");

	AZ_insurgenters_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_insurgenters.Z_insurgenters_C.ExecuteUbergraph_Z_insurgenters
// ()
void AZ_insurgenters_C::ExecuteUbergraph_Z_insurgenters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z_insurgenters.Z_insurgenters_C.ExecuteUbergraph_Z_insurgenters");

	AZ_insurgenters_C_ExecuteUbergraph_Z_insurgenters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
