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

// Function OverheadChatString.OverheadChatString_C.DrawString
// ()
void UOverheadChatString_C::DrawString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadChatString.OverheadChatString_C.DrawString");

	UOverheadChatString_C_DrawString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadChatString.OverheadChatString_C.Construct
// ()
void UOverheadChatString_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadChatString.OverheadChatString_C.Construct");

	UOverheadChatString_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverheadChatString.OverheadChatString_C.ExecuteUbergraph_OverheadChatString
// ()
void UOverheadChatString_C::ExecuteUbergraph_OverheadChatString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadChatString.OverheadChatString_C.ExecuteUbergraph_OverheadChatString");

	UOverheadChatString_C_ExecuteUbergraph_OverheadChatString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
