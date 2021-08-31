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

// Function Furniture_04_Rig.Furniture_04_Rig_C.UserConstructionScript
// ()
void AFurniture_04_Rig_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Furniture_04_Rig.Furniture_04_Rig_C.UserConstructionScript");

	AFurniture_04_Rig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
