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

// Function Set_of_Boxes_01_3.Set_of_Boxes_01_2_C.UserConstructionScript
// ()
void ASet_of_Boxes_01_2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Set_of_Boxes_01_3.Set_of_Boxes_01_2_C.UserConstructionScript");

	ASet_of_Boxes_01_2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
