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

// Function Cv2_MineBase_AP.Cv2_MineBase_AP_C.UserConstructionScript
// ()
void ACv2_MineBase_AP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv2_MineBase_AP.Cv2_MineBase_AP_C.UserConstructionScript");

	ACv2_MineBase_AP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
