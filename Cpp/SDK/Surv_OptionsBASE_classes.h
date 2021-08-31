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

// WidgetBlueprintGeneratedClass Surv_OptionsBASE.Surv_OptionsBASE_C
// 0x0000
class USurv_OptionsBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Surv_OptionsBASE.Surv_OptionsBASE_C");
		return ptr;
	}



	void SelectPanel();
	void Construct();
	void UnselectAll();
	void OnOpen();
	void BndEvt__VideoButton_K2Node_ComponentBoundEvent_94_OnClick__DelegateSignature();
	void HideAllPanels();
	void BndEvt__AudioButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__ControllerButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void HideAdditionalButtons();
	void BndEvt__Menu_InGame_VIDEO_options_K2Node_ComponentBoundEvent_332_HideApplyButton__DelegateSignature();
	void BndEvt__Menu_InGame_VIDEO_options_K2Node_ComponentBoundEvent_340_ShowApplyButton__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_436_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AzertyDefBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__KeyDefBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Surv_OptionsBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
