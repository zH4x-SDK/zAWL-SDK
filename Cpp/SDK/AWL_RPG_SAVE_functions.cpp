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

// Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.SaveDB
// ()
void UAWL_RPG_SAVE_C::SaveDB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.SaveDB");

	UAWL_RPG_SAVE_C_SaveDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.LoadDB
// ()
void UAWL_RPG_SAVE_C::LoadDB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.LoadDB");

	UAWL_RPG_SAVE_C_LoadDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.Load
// ()
void UAWL_RPG_SAVE_C::Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.Load");

	UAWL_RPG_SAVE_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.Save
// ()
void UAWL_RPG_SAVE_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_RPG_SAVE.AWL_RPG_SAVE_C.Save");

	UAWL_RPG_SAVE_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
