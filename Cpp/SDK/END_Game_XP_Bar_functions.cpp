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

// Function END_Game_XP_Bar.END_Game_XP_Bar_C.PreConstruct
// ()
void UEND_Game_XP_Bar_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function END_Game_XP_Bar.END_Game_XP_Bar_C.PreConstruct");

	UEND_Game_XP_Bar_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function END_Game_XP_Bar.END_Game_XP_Bar_C.DrawBar
// ()
void UEND_Game_XP_Bar_C::DrawBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function END_Game_XP_Bar.END_Game_XP_Bar_C.DrawBar");

	UEND_Game_XP_Bar_C_DrawBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function END_Game_XP_Bar.END_Game_XP_Bar_C.ExecuteUbergraph_END_Game_XP_Bar
// ()
void UEND_Game_XP_Bar_C::ExecuteUbergraph_END_Game_XP_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function END_Game_XP_Bar.END_Game_XP_Bar_C.ExecuteUbergraph_END_Game_XP_Bar");

	UEND_Game_XP_Bar_C_ExecuteUbergraph_END_Game_XP_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
