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

// Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.AddString
// ()
void UMenu_MainMenu_ServerListTable_C::AddString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.AddString");

	UMenu_MainMenu_ServerListTable_C_AddString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.ClearTable
// ()
void UMenu_MainMenu_ServerListTable_C::ClearTable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C.ClearTable");

	UMenu_MainMenu_ServerListTable_C_ClearTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
