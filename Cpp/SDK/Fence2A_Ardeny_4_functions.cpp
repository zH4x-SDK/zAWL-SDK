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

// Function Fence2A_Ardeny_4.Fence2A_Ardeny_3_C.UserConstructionScript
// ()
void AFence2A_Ardeny_3_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fence2A_Ardeny_4.Fence2A_Ardeny_3_C.UserConstructionScript");

	AFence2A_Ardeny_3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
