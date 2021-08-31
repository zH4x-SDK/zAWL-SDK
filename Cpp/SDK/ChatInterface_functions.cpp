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

// Function ChatInterface.ChatInterface_C.OpenChat
// ()
void UChatInterface_C::OpenChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatInterface.ChatInterface_C.OpenChat");

	UChatInterface_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatInterface.ChatInterface_C.ReciveChatMessage
// ()
void UChatInterface_C::ReciveChatMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatInterface.ChatInterface_C.ReciveChatMessage");

	UChatInterface_C_ReciveChatMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
