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

// Function BloodWidgetBase.BloodWidgetBase_C.ShowBlood
// ()
void UBloodWidgetBase_C::ShowBlood()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodWidgetBase.BloodWidgetBase_C.ShowBlood");

	UBloodWidgetBase_C_ShowBlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodWidgetBase.BloodWidgetBase_C.ExecuteUbergraph_BloodWidgetBase
// ()
void UBloodWidgetBase_C::ExecuteUbergraph_BloodWidgetBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodWidgetBase.BloodWidgetBase_C.ExecuteUbergraph_BloodWidgetBase");

	UBloodWidgetBase_C_ExecuteUbergraph_BloodWidgetBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
