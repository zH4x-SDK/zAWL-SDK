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

// Function Surv_Car_GAZ-3321_Police.Surv_Car_GAZ-3321_Police_C.UserConstructionScript
// ()
void ASurv_Car_GAZ_3321_Police_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Surv_Car_GAZ-3321_Police.Surv_Car_GAZ-3321_Police_C.UserConstructionScript");

	ASurv_Car_GAZ_3321_Police_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
