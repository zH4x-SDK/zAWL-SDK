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

// Function MouseWheelZone.MouseWheelZone_C.OnMouseWheel
// ()
void UMouseWheelZone_C::OnMouseWheel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseWheelZone.MouseWheelZone_C.OnMouseWheel");

	UMouseWheelZone_C_OnMouseWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MouseWheelZone.MouseWheelZone_C.MouseWheel__DelegateSignature
// ()
void UMouseWheelZone_C::MouseWheel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseWheelZone.MouseWheelZone_C.MouseWheel__DelegateSignature");

	UMouseWheelZone_C_MouseWheel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
