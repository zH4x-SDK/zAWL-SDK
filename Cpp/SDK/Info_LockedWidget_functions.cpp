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

// Function Info_LockedWidget.Info_LockedWidget_C.Unlock
// ()
void UInfo_LockedWidget_C::Unlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Info_LockedWidget.Info_LockedWidget_C.Unlock");

	UInfo_LockedWidget_C_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_LockedWidget.Info_LockedWidget_C.Lock
// ()
void UInfo_LockedWidget_C::Lock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Info_LockedWidget.Info_LockedWidget_C.Lock");

	UInfo_LockedWidget_C_Lock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
