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

// Function AWL_Tutorial.AWL_Tutorial_C.Save
// ()
void UAWL_Tutorial_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Tutorial.AWL_Tutorial_C.Save");

	UAWL_Tutorial_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_Tutorial.AWL_Tutorial_C.Load
// ()
void UAWL_Tutorial_C::Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Tutorial.AWL_Tutorial_C.Load");

	UAWL_Tutorial_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
