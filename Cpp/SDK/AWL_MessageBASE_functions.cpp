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

// Function AWL_MessageBASE.AWL_MessageBASE_C.ShowPlaceCapture
// ()
void UAWL_MessageBASE_C::ShowPlaceCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_MessageBASE.AWL_MessageBASE_C.ShowPlaceCapture");

	UAWL_MessageBASE_C_ShowPlaceCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_MessageBASE.AWL_MessageBASE_C.ExecuteUbergraph_AWL_MessageBASE
// ()
void UAWL_MessageBASE_C::ExecuteUbergraph_AWL_MessageBASE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_MessageBASE.AWL_MessageBASE_C.ExecuteUbergraph_AWL_MessageBASE");

	UAWL_MessageBASE_C_ExecuteUbergraph_AWL_MessageBASE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
