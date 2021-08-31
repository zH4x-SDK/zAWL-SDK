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

// Function TutorialGUI.TutorialGUI_C.SetBoost
// ()
void UTutorialGUI_C::SetBoost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialGUI.TutorialGUI_C.SetBoost");

	UTutorialGUI_C_SetBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialGUI.TutorialGUI_C.PlayTimer
// ()
void UTutorialGUI_C::PlayTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialGUI.TutorialGUI_C.PlayTimer");

	UTutorialGUI_C_PlayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialGUI.TutorialGUI_C.ShowTutor
// ()
void UTutorialGUI_C::ShowTutor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialGUI.TutorialGUI_C.ShowTutor");

	UTutorialGUI_C_ShowTutor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialGUI.TutorialGUI_C.PauseTutor
// ()
void UTutorialGUI_C::PauseTutor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialGUI.TutorialGUI_C.PauseTutor");

	UTutorialGUI_C_PauseTutor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialGUI.TutorialGUI_C.ExecuteUbergraph_TutorialGUI
// ()
void UTutorialGUI_C::ExecuteUbergraph_TutorialGUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialGUI.TutorialGUI_C.ExecuteUbergraph_TutorialGUI");

	UTutorialGUI_C_ExecuteUbergraph_TutorialGUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
