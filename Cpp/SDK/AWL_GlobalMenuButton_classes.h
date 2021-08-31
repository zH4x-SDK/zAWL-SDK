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

// WidgetBlueprintGeneratedClass AWL_GlobalMenuButton.AWL_GlobalMenuButton_C
// 0x0000
class UAWL_GlobalMenuButton_C : public UGlobalMenuButton_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_GlobalMenuButton.AWL_GlobalMenuButton_C");
		return ptr;
	}



	void SetText();
	void OnPreviewKeyDown();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Root_HideConfirm();
	void Root_ShowConfirm();
	void Root_Set_HoveredStyle();
	void Root_Set_SelectedStyle();
	void Root_SetUnselectedStyle();
	void Construct();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_5_Click_Yes__DelegateSignature();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_6_Click_No__DelegateSignature();
	void PreConstruct();
	void SetStyle();
	void SetDesabled();
	void Unhover();
	void ExecuteUbergraph_AWL_GlobalMenuButton();
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature();
	void OnClick_button__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
