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

// Function Cv2_OpticComponent.Cv2_OpticComponent_C.HideOptic
// ()
void UCv2_OpticComponent_C::HideOptic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv2_OpticComponent.Cv2_OpticComponent_C.HideOptic");

	UCv2_OpticComponent_C_HideOptic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_OpticComponent.Cv2_OpticComponent_C.ShowOptic
// ()
void UCv2_OpticComponent_C::ShowOptic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv2_OpticComponent.Cv2_OpticComponent_C.ShowOptic");

	UCv2_OpticComponent_C_ShowOptic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
