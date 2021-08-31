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

// WidgetBlueprintGeneratedClass AWL_InGameMenu.AWL_InGameMenu_C
// 0x0000
class UAWL_InGameMenu_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_InGameMenu.AWL_InGameMenu_C");
		return ptr;
	}



	void OnKeyDown();
	void BndEvt__AWL_Continue_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature();
	void ShowSettings();
	void HideSettings();
	void BndEvt__AWLOptionsBASE_K2Node_ComponentBoundEvent_1_OnCloseOptions__DelegateSignature();
	void BndEvt__AWL_Respawn_K2Node_ComponentBoundEvent_2_OnClick_button__DelegateSignature();
	void BndEvt__AWL_MainMenu_K2Node_ComponentBoundEvent_3_OnClick_button__DelegateSignature();
	void BndEvt__AWL_Exit_K2Node_ComponentBoundEvent_4_OnClick_button__DelegateSignature();
	void BndEvt__AWL_Settings_K2Node_ComponentBoundEvent_5_OnClick_button__DelegateSignature();
	void BndEvt__AWL_Difficulty_K2Node_ComponentBoundEvent_6_OnClick_button__DelegateSignature();
	void ShowDifficulty();
	void HideDifficulty();
	void BndEvt__DificultyBase_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature();
	void Construct();
	void BndEvt__AWL_Yes_No_Exit_K2Node_ComponentBoundEvent_7_ClickYes__DelegateSignature();
	void Respawn();
	void ToMainMenu();
	void Exit();
	void BndEvt__AWL_Yes_No_Exit_K2Node_ComponentBoundEvent_9_ClickNo__DelegateSignature();
	void OnOpen();
	void OnClose();
	void ExecuteUbergraph_AWL_InGameMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
