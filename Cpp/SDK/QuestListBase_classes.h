#pragma once

// Name: AWL, Version: 4.24.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestListBase.QuestListBase_C
// 0x0000
class UQuestListBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestListBase.QuestListBase_C");
		return ptr;
	}



	void ShowDescription();
	void ClearDescription();
	void DrawTaskInList();
	void ClearList();
	void UpdateQuestList();
	void Construct();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_QuestListBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
