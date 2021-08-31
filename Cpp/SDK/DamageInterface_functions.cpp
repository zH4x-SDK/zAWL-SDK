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

// Function DamageInterface.DamageInterface_C.SpawnBloodEffect
// ()
void UDamageInterface_C::SpawnBloodEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DamageInterface.DamageInterface_C.SpawnBloodEffect");

	UDamageInterface_C_SpawnBloodEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DamageInterface.DamageInterface_C.ApplyHitDamage
// ()
void UDamageInterface_C::ApplyHitDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DamageInterface.DamageInterface_C.ApplyHitDamage");

	UDamageInterface_C_ApplyHitDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
