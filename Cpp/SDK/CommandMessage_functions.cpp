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

// Function CommandMessage.CommandMessage_C.ShowMessage
// ()
void UCommandMessage_C::ShowMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommandMessage.CommandMessage_C.ShowMessage");

	UCommandMessage_C_ShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandMessage.CommandMessage_C.ExecuteUbergraph_CommandMessage
// ()
void UCommandMessage_C::ExecuteUbergraph_CommandMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommandMessage.CommandMessage_C.ExecuteUbergraph_CommandMessage");

	UCommandMessage_C_ExecuteUbergraph_CommandMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
