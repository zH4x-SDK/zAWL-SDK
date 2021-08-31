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

// Function OutlineInterface.OutlineInterface_C.SetIsFocusedNow
// ()
void UOutlineInterface_C::SetIsFocusedNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OutlineInterface.OutlineInterface_C.SetIsFocusedNow");

	UOutlineInterface_C_SetIsFocusedNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineInterface.OutlineInterface_C.GetIsFocusedNow
// ()
void UOutlineInterface_C::GetIsFocusedNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OutlineInterface.OutlineInterface_C.GetIsFocusedNow");

	UOutlineInterface_C_GetIsFocusedNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
