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

// Function MENU_ROOT.MENU_ROOT_C.Root_SaveSettings
// ()
void UMENU_ROOT_C::Root_SaveSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MENU_ROOT.MENU_ROOT_C.Root_SaveSettings");

	UMENU_ROOT_C_Root_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MENU_ROOT.MENU_ROOT_C.Root_LoadSettings
// ()
void UMENU_ROOT_C::Root_LoadSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MENU_ROOT.MENU_ROOT_C.Root_LoadSettings");

	UMENU_ROOT_C_Root_LoadSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MENU_ROOT.MENU_ROOT_C.OnMenuStateChanged
// ()
void UMENU_ROOT_C::OnMenuStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MENU_ROOT.MENU_ROOT_C.OnMenuStateChanged");

	UMENU_ROOT_C_OnMenuStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MENU_ROOT.MENU_ROOT_C.ShowMenu
// ()
void UMENU_ROOT_C::ShowMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MENU_ROOT.MENU_ROOT_C.ShowMenu");

	UMENU_ROOT_C_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
