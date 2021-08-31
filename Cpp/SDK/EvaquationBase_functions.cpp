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

// Function EvaquationBase.EvaquationBase_C.Draw
// ()
void UEvaquationBase_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EvaquationBase.EvaquationBase_C.Draw");

	UEvaquationBase_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvaquationBase.EvaquationBase_C.Timer
// ()
void UEvaquationBase_C::Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EvaquationBase.EvaquationBase_C.Timer");

	UEvaquationBase_C_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvaquationBase.EvaquationBase_C.Reboot
// ()
void UEvaquationBase_C::Reboot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EvaquationBase.EvaquationBase_C.Reboot");

	UEvaquationBase_C_Reboot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvaquationBase.EvaquationBase_C.ExecuteUbergraph_EvaquationBase
// ()
void UEvaquationBase_C::ExecuteUbergraph_EvaquationBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EvaquationBase.EvaquationBase_C.ExecuteUbergraph_EvaquationBase");

	UEvaquationBase_C_ExecuteUbergraph_EvaquationBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
