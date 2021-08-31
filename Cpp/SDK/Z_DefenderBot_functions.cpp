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

// Function Z_DefenderBot.Z_DefenderBot_C.ReceiveBeginPlay
// ()
void AZ_DefenderBot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z_DefenderBot.Z_DefenderBot_C.ReceiveBeginPlay");

	AZ_DefenderBot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_DefenderBot.Z_DefenderBot_C.ExecuteUbergraph_Z_DefenderBot
// ()
void AZ_DefenderBot_C::ExecuteUbergraph_Z_DefenderBot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z_DefenderBot.Z_DefenderBot_C.ExecuteUbergraph_Z_DefenderBot");

	AZ_DefenderBot_C_ExecuteUbergraph_Z_DefenderBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
