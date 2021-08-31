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

// WidgetBlueprintGeneratedClass SurvMainMenuHomePanel.SurvMainMenuHomePanel_C
// 0x0000
class USurvMainMenuHomePanel_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvMainMenuHomePanel.SurvMainMenuHomePanel_C");
		return ptr;
	}



	void OnFailure_86555F7A443D4961CF177C990028DC99();
	void OnSuccess_86555F7A443D4961CF177C990028DC99();
	void Construct();
	void UpdateAllOnline();
	void UpdateInSearch();
	void Destruct();
	void BndEvt__Button_Credits_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_Credits_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void ShowBattleStatistic();
	void ExecuteUbergraph_SurvMainMenuHomePanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
