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

// Function _SOLDIER_EMPTY_Actor_Survival._SOLDIER_EMPTY_Actor_Survival_C.UserConstructionScript
// ()
void A_SOLDIER_EMPTY_Actor_Survival_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function _SOLDIER_EMPTY_Actor_Survival._SOLDIER_EMPTY_Actor_Survival_C.UserConstructionScript");

	A_SOLDIER_EMPTY_Actor_Survival_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
