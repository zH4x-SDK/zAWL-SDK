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

// Function FenceOther_4Close_A.FenceOther_4Close_A_C.UserConstructionScript
// ()
void AFenceOther_4Close_A_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FenceOther_4Close_A.FenceOther_4Close_A_C.UserConstructionScript");

	AFenceOther_4Close_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
