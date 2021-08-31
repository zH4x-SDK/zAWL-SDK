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

// Function ChatMessageString.ChatMessageString_C.DrawString
// ()
void UChatMessageString_C::DrawString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatMessageString.ChatMessageString_C.DrawString");

	UChatMessageString_C_DrawString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatMessageString.ChatMessageString_C.ZDrawString
// ()
void UChatMessageString_C::ZDrawString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatMessageString.ChatMessageString_C.ZDrawString");

	UChatMessageString_C_ZDrawString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatMessageString.ChatMessageString_C.ExecuteUbergraph_ChatMessageString
// ()
void UChatMessageString_C::ExecuteUbergraph_ChatMessageString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatMessageString.ChatMessageString_C.ExecuteUbergraph_ChatMessageString");

	UChatMessageString_C_ExecuteUbergraph_ChatMessageString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
