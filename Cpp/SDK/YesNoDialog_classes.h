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

// WidgetBlueprintGeneratedClass YesNoDialog.YesNoDialog_C
// 0x0000
class UYesNoDialog_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass YesNoDialog.YesNoDialog_C");
		return ptr;
	}



	void Construct();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ShowConfirm();
	void HideConfirm();
	void ExecuteUbergraph_YesNoDialog();
	void Click_No__DelegateSignature();
	void Click_Yes__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
