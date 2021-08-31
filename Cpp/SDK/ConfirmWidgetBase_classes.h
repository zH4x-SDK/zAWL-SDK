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

// WidgetBlueprintGeneratedClass ConfirmWidgetBase.ConfirmWidgetBase_C
// 0x0000
class UConfirmWidgetBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmWidgetBase.ConfirmWidgetBase_C");
		return ptr;
	}



	void Construct();
	void Show();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ConfirmWidgetBase();
	void ClickNo__DelegateSignature();
	void ClickYes__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
