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

// Function Cv2_SearchLight.Cv2_SearchLight_C.OnRep_isDestroy
// ()
void ACv2_SearchLight_C::OnRep_isDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv2_SearchLight.Cv2_SearchLight_C.OnRep_isDestroy");

	ACv2_SearchLight_C_OnRep_isDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_SearchLight.Cv2_SearchLight_C.OnRep_Light
// ()
void ACv2_SearchLight_C::OnRep_Light()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv2_SearchLight.Cv2_SearchLight_C.OnRep_Light");

	ACv2_SearchLight_C_OnRep_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_SearchLight.Cv2_SearchLight_C.SetLight
// ()
void ACv2_SearchLight_C::SetLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv2_SearchLight.Cv2_SearchLight_C.SetLight");

	ACv2_SearchLight_C_SetLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
