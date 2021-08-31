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

// Function Zagluha.Zagluha_C.Construct
// ()
void UZagluha_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Zagluha.Zagluha_C.Construct");

	UZagluha_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Zagluha.Zagluha_C.Set text
// ()
void UZagluha_C::Set_text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Zagluha.Zagluha_C.Set text");

	UZagluha_C_Set_text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Zagluha.Zagluha_C.ExecuteUbergraph_Zagluha
// ()
void UZagluha_C::ExecuteUbergraph_Zagluha()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Zagluha.Zagluha_C.ExecuteUbergraph_Zagluha");

	UZagluha_C_ExecuteUbergraph_Zagluha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
