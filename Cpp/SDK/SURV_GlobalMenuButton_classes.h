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

// WidgetBlueprintGeneratedClass SURV_GlobalMenuButton.SURV_GlobalMenuButton_C
// 0x0000
class USURV_GlobalMenuButton_C : public UGlobalMenuButton_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_GlobalMenuButton.SURV_GlobalMenuButton_C");
		return ptr;
	}



	void SetText();
	void ConstructIcon();
	void OnPreviewKeyDown();
	void PreConstruct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Root_HideConfirm();
	void Root_ShowConfirm();
	void Root_Set_HoveredStyle();
	void Root_Set_SelectedStyle();
	void Root_SetUnselectedStyle();
	void Construct();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_5_Click_Yes__DelegateSignature();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_6_Click_No__DelegateSignature();
	void ExecuteUbergraph_SURV_GlobalMenuButton();
	void OnClick_button__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
