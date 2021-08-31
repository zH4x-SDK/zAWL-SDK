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

// Function CommandString.CommandString_C.PreConstruct
// ()
void UCommandString_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommandString.CommandString_C.PreConstruct");

	UCommandString_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandString.CommandString_C.DrawString
// ()
void UCommandString_C::DrawString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommandString.CommandString_C.DrawString");

	UCommandString_C_DrawString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandString.CommandString_C.ExecuteUbergraph_CommandString
// ()
void UCommandString_C::ExecuteUbergraph_CommandString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommandString.CommandString_C.ExecuteUbergraph_CommandString");

	UCommandString_C_ExecuteUbergraph_CommandString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
