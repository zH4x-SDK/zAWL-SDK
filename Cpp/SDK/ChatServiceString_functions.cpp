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

// Function ChatServiceString.ChatServiceString_C.DrawString
// ()
void UChatServiceString_C::DrawString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatServiceString.ChatServiceString_C.DrawString");

	UChatServiceString_C_DrawString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatServiceString.ChatServiceString_C.ExecuteUbergraph_ChatServiceString
// ()
void UChatServiceString_C::ExecuteUbergraph_ChatServiceString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatServiceString.ChatServiceString_C.ExecuteUbergraph_ChatServiceString");

	UChatServiceString_C_ExecuteUbergraph_ChatServiceString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
