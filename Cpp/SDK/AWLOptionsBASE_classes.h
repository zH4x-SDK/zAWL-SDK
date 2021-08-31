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

// WidgetBlueprintGeneratedClass AWLOptionsBASE.AWLOptionsBASE_C
// 0x0000
class UAWLOptionsBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWLOptionsBASE.AWLOptionsBASE_C");
		return ptr;
	}



	void OnKeyDown();
	void SelectPanel();
	void Construct();
	void UnselectAll();
	void OnOpen();
	void HideAllPanels();
	void HideAdditionalButtons();
	void BndEvt__Menu_InGame_VIDEO_options_K2Node_ComponentBoundEvent_332_HideApplyButton__DelegateSignature();
	void BndEvt__Menu_InGame_VIDEO_options_K2Node_ComponentBoundEvent_340_ShowApplyButton__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_436_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AzertyDefBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__KeyDefBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AWL_GlobalMenuButton_K2Node_ComponentBoundEvent_2_OnClick_button__DelegateSignature();
	void BndEvt__AWL_GlobalMenuButton_1_K2Node_ComponentBoundEvent_3_OnClick_button__DelegateSignature();
	void BndEvt__AWL_GlobalMenuButton_135_K2Node_ComponentBoundEvent_4_OnClick_button__DelegateSignature();
	void BndEvt__AWL_Back_K2Node_ComponentBoundEvent_5_OnClick_button__DelegateSignature();
	void BndEvt__AWL_APPLY_K2Node_ComponentBoundEvent_6_OnClick_button__DelegateSignature();
	void BndEvt__AWL_Back_1_K2Node_ComponentBoundEvent_7_OnClick_button__DelegateSignature();
	void ExecuteUbergraph_AWLOptionsBASE();
	void OnCloseOptions__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
