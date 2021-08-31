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

// Function Pawn_Interface.Pawn_Interface_C.GetActiveWeapon
// ()
void UPawn_Interface_C::GetActiveWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pawn_Interface.Pawn_Interface_C.GetActiveWeapon");

	UPawn_Interface_C_GetActiveWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pawn_Interface.Pawn_Interface_C.IsEnemy
// ()
void UPawn_Interface_C::IsEnemy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pawn_Interface.Pawn_Interface_C.IsEnemy");

	UPawn_Interface_C_IsEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pawn_Interface.Pawn_Interface_C.GetIsDead
// ()
void UPawn_Interface_C::GetIsDead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pawn_Interface.Pawn_Interface_C.GetIsDead");

	UPawn_Interface_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
