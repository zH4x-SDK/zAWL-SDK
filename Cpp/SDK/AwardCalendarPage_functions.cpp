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

// Function AwardCalendarPage.AwardCalendarPage_C.Draw
// ()
void UAwardCalendarPage_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AwardCalendarPage.AwardCalendarPage_C.Draw");

	UAwardCalendarPage_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AwardCalendarPage.AwardCalendarPage_C.ExecuteUbergraph_AwardCalendarPage
// ()
void UAwardCalendarPage_C::ExecuteUbergraph_AwardCalendarPage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AwardCalendarPage.AwardCalendarPage_C.ExecuteUbergraph_AwardCalendarPage");

	UAwardCalendarPage_C_ExecuteUbergraph_AwardCalendarPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
