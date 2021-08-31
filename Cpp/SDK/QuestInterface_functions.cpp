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

// Function QuestInterface.QuestInterface_C.OnQuestComplite
// ()
void UQuestInterface_C::OnQuestComplite()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuestInterface.QuestInterface_C.OnQuestComplite");

	UQuestInterface_C_OnQuestComplite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestInterface.QuestInterface_C.OnQuestActivate
// ()
void UQuestInterface_C::OnQuestActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuestInterface.QuestInterface_C.OnQuestActivate");

	UQuestInterface_C_OnQuestActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestInterface.QuestInterface_C.QuestEvent
// ()
void UQuestInterface_C::QuestEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuestInterface.QuestInterface_C.QuestEvent");

	UQuestInterface_C_QuestEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
