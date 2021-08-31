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

// Function BaseWeapon_MG42_TriPod.BaseWeapon_MG42_TriPod_C.AnimGraph
// ()
void UBaseWeapon_MG42_TriPod_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BaseWeapon_MG42_TriPod.BaseWeapon_MG42_TriPod_C.AnimGraph");

	UBaseWeapon_MG42_TriPod_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseWeapon_MG42_TriPod.BaseWeapon_MG42_TriPod_C.ExecuteUbergraph_BaseWeapon_MG42_TriPod
// ()
void UBaseWeapon_MG42_TriPod_C::ExecuteUbergraph_BaseWeapon_MG42_TriPod()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BaseWeapon_MG42_TriPod.BaseWeapon_MG42_TriPod_C.ExecuteUbergraph_BaseWeapon_MG42_TriPod");

	UBaseWeapon_MG42_TriPod_C_ExecuteUbergraph_BaseWeapon_MG42_TriPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
