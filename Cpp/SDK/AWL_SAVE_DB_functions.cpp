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

// Function AWL_SAVE_DB.AWL_SAVE_DB_C.SaveDB
// ()
void UAWL_SAVE_DB_C::SaveDB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_SAVE_DB.AWL_SAVE_DB_C.SaveDB");

	UAWL_SAVE_DB_C_SaveDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_SAVE_DB.AWL_SAVE_DB_C.LoadDB
// ()
void UAWL_SAVE_DB_C::LoadDB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_SAVE_DB.AWL_SAVE_DB_C.LoadDB");

	UAWL_SAVE_DB_C_LoadDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
