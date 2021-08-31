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

// Function Clock.Clock_C.SetTime
// ()
void UClock_C::SetTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Clock.Clock_C.SetTime");

	UClock_C_SetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Clock.Clock_C.PreConstruct
// ()
void UClock_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Clock.Clock_C.PreConstruct");

	UClock_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Clock.Clock_C.ExecuteUbergraph_Clock
// ()
void UClock_C::ExecuteUbergraph_Clock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Clock.Clock_C.ExecuteUbergraph_Clock");

	UClock_C_ExecuteUbergraph_Clock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
