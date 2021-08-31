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

// WidgetBlueprintGeneratedClass SURV_GlobalMenuExit.SURV_GlobalMenuExit_C
// 0x0000
class USURV_GlobalMenuExit_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_GlobalMenuExit.SURV_GlobalMenuExit_C");
		return ptr;
	}



	void OnFailure_9A650B1342FD9D45757FC3A88360EAC8();
	void OnSuccess_9A650B1342FD9D45757FC3A88360EAC8();
	void BndEvt__Exit_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Mainmenu_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
	void OnShow();
	void BndEvt__Exit_K2Node_ComponentBoundEvent_218_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Mainmenu_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_7_Click_No__DelegateSignature();
	void BndEvt__YesNoDialog_MainMenu_K2Node_ComponentBoundEvent_8_Click_No__DelegateSignature();
	void BndEvt__YesNoDialog_MainMenu_K2Node_ComponentBoundEvent_9_Click_Yes__DelegateSignature();
	void BndEvt__YesNoDialogExit_K2Node_ComponentBoundEvent_10_Click_Yes__DelegateSignature();
	void BndEvt__ConfirmWidgetBase_K2Node_ComponentBoundEvent_2_ClickYes__DelegateSignature();
	void BndEvt__ConfirmWidgetBase_K2Node_ComponentBoundEvent_3_ClickNo__DelegateSignature();
	void ExecuteUbergraph_SURV_GlobalMenuExit();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
