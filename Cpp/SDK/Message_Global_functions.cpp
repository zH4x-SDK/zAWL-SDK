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

// Function Message_Global.Message_Global_C.ShowMessageEvacuation
// ()
void UMessage_Global_C::ShowMessageEvacuation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Message_Global.Message_Global_C.ShowMessageEvacuation");

	UMessage_Global_C_ShowMessageEvacuation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_Global.Message_Global_C.ShowMyMessage
// ()
void UMessage_Global_C::ShowMyMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Message_Global.Message_Global_C.ShowMyMessage");

	UMessage_Global_C_ShowMyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_Global.Message_Global_C.Construct
// ()
void UMessage_Global_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Message_Global.Message_Global_C.Construct");

	UMessage_Global_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_Global.Message_Global_C.ExecuteUbergraph_Message_Global
// ()
void UMessage_Global_C::ExecuteUbergraph_Message_Global()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Message_Global.Message_Global_C.ExecuteUbergraph_Message_Global");

	UMessage_Global_C_ExecuteUbergraph_Message_Global_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
