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

// Function AWL_CharacterAction.AWL_CharacterAction_C.Unhover
// ()
void UAWL_CharacterAction_C::Unhover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_CharacterAction.AWL_CharacterAction_C.Unhover");

	UAWL_CharacterAction_C_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_CharacterAction.AWL_CharacterAction_C.hover
// ()
void UAWL_CharacterAction_C::hover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_CharacterAction.AWL_CharacterAction_C.hover");

	UAWL_CharacterAction_C_hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_CharacterAction.AWL_CharacterAction_C.Action
// ()
void UAWL_CharacterAction_C::Action()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_CharacterAction.AWL_CharacterAction_C.Action");

	UAWL_CharacterAction_C_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
