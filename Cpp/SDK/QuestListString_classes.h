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

// WidgetBlueprintGeneratedClass QuestListString.QuestListString_C
// 0x0000
class UQuestListString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestListString.QuestListString_C");
		return ptr;
	}



	void ShowMe();
	void HideMe();
	void Draw();
	void OnMouseEnter();
	void OnMouseLeave();
	void ExecuteUbergraph_QuestListString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
