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

// Function Menu_InGame_Panel_ROOT.Menu_InGame_Panel_ROOT_C.On_Open
// ()
void UMenu_InGame_Panel_ROOT_C::On_Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_InGame_Panel_ROOT.Menu_InGame_Panel_ROOT_C.On_Open");

	UMenu_InGame_Panel_ROOT_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_InGame_Panel_ROOT.Menu_InGame_Panel_ROOT_C.ExecuteUbergraph_Menu_InGame_Panel_ROOT
// ()
void UMenu_InGame_Panel_ROOT_C::ExecuteUbergraph_Menu_InGame_Panel_ROOT()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_InGame_Panel_ROOT.Menu_InGame_Panel_ROOT_C.ExecuteUbergraph_Menu_InGame_Panel_ROOT");

	UMenu_InGame_Panel_ROOT_C_ExecuteUbergraph_Menu_InGame_Panel_ROOT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
