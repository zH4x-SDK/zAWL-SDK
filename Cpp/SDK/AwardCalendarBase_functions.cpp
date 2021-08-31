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

// Function AwardCalendarBase.AwardCalendarBase_C.DrawCalendar
// ()
void UAwardCalendarBase_C::DrawCalendar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AwardCalendarBase.AwardCalendarBase_C.DrawCalendar");

	UAwardCalendarBase_C_DrawCalendar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AwardCalendarBase.AwardCalendarBase_C.ExecuteUbergraph_AwardCalendarBase
// ()
void UAwardCalendarBase_C::ExecuteUbergraph_AwardCalendarBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AwardCalendarBase.AwardCalendarBase_C.ExecuteUbergraph_AwardCalendarBase");

	UAwardCalendarBase_C_ExecuteUbergraph_AwardCalendarBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
