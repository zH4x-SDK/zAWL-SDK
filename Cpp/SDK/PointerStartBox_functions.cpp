﻿// Name: AWL, Version: 4.24.3

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

// Function PointerStartBox.PointerStartBox_C.Construct
// ()
void UPointerStartBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerStartBox.PointerStartBox_C.Construct");

	UPointerStartBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerStartBox.PointerStartBox_C.ExecuteUbergraph_PointerStartBox
// ()
void UPointerStartBox_C::ExecuteUbergraph_PointerStartBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerStartBox.PointerStartBox_C.ExecuteUbergraph_PointerStartBox");

	UPointerStartBox_C_ExecuteUbergraph_PointerStartBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
