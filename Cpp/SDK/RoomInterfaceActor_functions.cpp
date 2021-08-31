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

// Function RoomInterfaceActor.RoomInterfaceActor_C.ReceiveBeginPlay
// ()
void ARoomInterfaceActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RoomInterfaceActor.RoomInterfaceActor_C.ReceiveBeginPlay");

	ARoomInterfaceActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RoomInterfaceActor.RoomInterfaceActor_C.ExecuteUbergraph_RoomInterfaceActor
// ()
void ARoomInterfaceActor_C::ExecuteUbergraph_RoomInterfaceActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RoomInterfaceActor.RoomInterfaceActor_C.ExecuteUbergraph_RoomInterfaceActor");

	ARoomInterfaceActor_C_ExecuteUbergraph_RoomInterfaceActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
