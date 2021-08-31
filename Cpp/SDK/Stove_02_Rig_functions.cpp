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

// Function Stove_02_Rig.Stove_02_Rig_C.UserConstructionScript
// ()
void AStove_02_Rig_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Stove_02_Rig.Stove_02_Rig_C.UserConstructionScript");

	AStove_02_Rig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
