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

// Function Cv4_EffectData.Cv4_EffectData_C.CheckParticle
// ()
void UCv4_EffectData_C::CheckParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv4_EffectData.Cv4_EffectData_C.CheckParticle");

	UCv4_EffectData_C_CheckParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
