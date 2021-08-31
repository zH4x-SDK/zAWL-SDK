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

// WidgetBlueprintGeneratedClass SettingsSlider.SettingsSlider_C
// 0x0000
class USettingsSlider_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsSlider.SettingsSlider_C");
		return ptr;
	}



	void PreConstruct();
	void Tick();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature();
	void SetStep();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void SetSelectedStyle();
	void SetColor();
	void MoveDynamic();
	void SetDynamycPosition();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_SettingsSlider();
	void SliderMouseUp__DelegateSignature();
	void SliderMouseDown__DelegateSignature();
	void ChangeDynamic__DelegateSignature();
	void ChangeStep__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
