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

// Function CV2_Panel.CV2_Panel_C.PreConstruct
// ()
void UCV2_Panel_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CV2_Panel.CV2_Panel_C.PreConstruct");

	UCV2_Panel_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CV2_Panel.CV2_Panel_C.ExecuteUbergraph_CV2_Panel
// ()
void UCV2_Panel_C::ExecuteUbergraph_CV2_Panel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CV2_Panel.CV2_Panel_C.ExecuteUbergraph_CV2_Panel");

	UCV2_Panel_C_ExecuteUbergraph_CV2_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
