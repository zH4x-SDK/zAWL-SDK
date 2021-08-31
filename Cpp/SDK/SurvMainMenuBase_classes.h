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

// WidgetBlueprintGeneratedClass SurvMainMenuBase.SurvMainMenuBase_C
// 0x0000
class USurvMainMenuBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvMainMenuBase.SurvMainMenuBase_C");
		return ptr;
	}



	void SetMoneyText();
	void ControllStat();
	void ShowMenu();
	void OnMouseWheel();
	void HideAllPanels();
	void UnselectAll();
	void OnMouseButtonDoubleClick();
	void OnMouseButtonDown();
	void Construct();
	void BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__Home_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__Trade_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__ServerList_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Character_K2Node_ComponentBoundEvent_63_OnClick__DelegateSignature();
	void GetPlayerInfo();
	void BndEvt__CheatButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
	void ShowTradeInfo();
	void ExecuteUbergraph_SurvMainMenuBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
