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

// Function MessageScoreMessage.MessageScoreMessage_C.AddMessage
// ()
void UMessageScoreMessage_C::AddMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageScoreMessage.MessageScoreMessage_C.AddMessage");

	UMessageScoreMessage_C_AddMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageScoreMessage.MessageScoreMessage_C.ExecuteUbergraph_MessageScoreMessage
// ()
void UMessageScoreMessage_C::ExecuteUbergraph_MessageScoreMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageScoreMessage.MessageScoreMessage_C.ExecuteUbergraph_MessageScoreMessage");

	UMessageScoreMessage_C_ExecuteUbergraph_MessageScoreMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
