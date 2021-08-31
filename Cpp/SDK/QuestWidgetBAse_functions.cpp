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

// Function QuestWidgetBAse.QuestWidgetBase_C.ShowQuestMessage
// ()
void UQuestWidgetBase_C::ShowQuestMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuestWidgetBAse.QuestWidgetBase_C.ShowQuestMessage");

	UQuestWidgetBase_C_ShowQuestMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestWidgetBAse.QuestWidgetBase_C.ExecuteUbergraph_QuestWidgetBase
// ()
void UQuestWidgetBase_C::ExecuteUbergraph_QuestWidgetBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuestWidgetBAse.QuestWidgetBase_C.ExecuteUbergraph_QuestWidgetBase");

	UQuestWidgetBase_C_ExecuteUbergraph_QuestWidgetBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
