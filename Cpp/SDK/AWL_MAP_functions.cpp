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

// Function AWL_MAP.AWL_MAP_C.OnKeyDown
// ()
void UAWL_MAP_C::OnKeyDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_MAP.AWL_MAP_C.OnKeyDown");

	UAWL_MAP_C_OnKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif