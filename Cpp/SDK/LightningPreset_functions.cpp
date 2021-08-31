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

// Function LightningPreset.LightningPreset_C.ApplyOnMaterial
// ()
void ULightningPreset_C::ApplyOnMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightningPreset.LightningPreset_C.ApplyOnMaterial");

	ULightningPreset_C_ApplyOnMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
