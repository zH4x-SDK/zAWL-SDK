﻿// Name: AWL, Version: 4.24.3

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

// Function WeaponBox1_AnimBP.WeaponBox1_AnimBP_C.AnimGraph
// ()
void UWeaponBox1_AnimBP_C::AnimGraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponBox1_AnimBP.WeaponBox1_AnimBP_C.AnimGraph");

	UWeaponBox1_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponBox1_AnimBP.WeaponBox1_AnimBP_C.ExecuteUbergraph_WeaponBox1_AnimBP
// ()
void UWeaponBox1_AnimBP_C::ExecuteUbergraph_WeaponBox1_AnimBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponBox1_AnimBP.WeaponBox1_AnimBP_C.ExecuteUbergraph_WeaponBox1_AnimBP");

	UWeaponBox1_AnimBP_C_ExecuteUbergraph_WeaponBox1_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
