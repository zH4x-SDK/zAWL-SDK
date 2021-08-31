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

// Function Menu_MainMenu_Character.Menu_MainMenu_Character_C.Construct
// ()
void UMenu_MainMenu_Character_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_MainMenu_Character.Menu_MainMenu_Character_C.Construct");

	UMenu_MainMenu_Character_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_Character.Menu_MainMenu_Character_C.ExecuteUbergraph_Menu_MainMenu_Character
// ()
void UMenu_MainMenu_Character_C::ExecuteUbergraph_Menu_MainMenu_Character()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_MainMenu_Character.Menu_MainMenu_Character_C.ExecuteUbergraph_Menu_MainMenu_Character");

	UMenu_MainMenu_Character_C_ExecuteUbergraph_Menu_MainMenu_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
