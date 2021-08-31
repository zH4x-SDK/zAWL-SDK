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

// WidgetBlueprintGeneratedClass Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C
// 0x0000
class UMenu_InGame_VIDEO_options_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_VIDEO_options.Menu_InGame_VIDEO_options_C");
		return ptr;
	}



	void SettingChanges();
	void StepToResscale();
	void ResScaleToStep();
	void OnMouseWheel();
	void GetSettings();
	void Save();
	void ApplyVideoPresset();
	void PreConstruct();
	void Construct();
	void BndEvt__Accept_K2Node_ComponentBoundEvent_54_OnClick__DelegateSignature();
	void BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_5_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_6_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ComboBoxString_49_K2Node_ComponentBoundEvent_262_OnSelectionChangedEvent__DelegateSignature();
	void On_Open();
	void BndEvt__WindowedCB_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature();
	void BndEvt__Postprocess_K2Node_ComponentBoundEvent_4_ChangeStep__DelegateSignature();
	void BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_5_ChangeStep__DelegateSignature();
	void BndEvt__Texture_K2Node_ComponentBoundEvent_6_ChangeStep__DelegateSignature();
	void BndEvt__alising_K2Node_ComponentBoundEvent_7_ChangeStep__DelegateSignature();
	void BndEvt__distance_K2Node_ComponentBoundEvent_8_ChangeStep__DelegateSignature();
	void BndEvt__effects_K2Node_ComponentBoundEvent_9_ChangeStep__DelegateSignature();
	void BndEvt__FoliageBar_K2Node_ComponentBoundEvent_10_ChangeStep__DelegateSignature();
	void BndEvt__resolutionScale_K2Node_ComponentBoundEvent_11_ChangeStep__DelegateSignature();
	void BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_2024_OnCheckBoxComponentStateChanged__DelegateSignature();
	void BndEvt__Brightness_K2Node_ComponentBoundEvent_50_ChangeStep__DelegateSignature();
	void ApplySettings();
	void BndEvt__FOV_K2Node_ComponentBoundEvent_0_ChangeDynamic__DelegateSignature();
	void BndEvt__FOV_K2Node_ComponentBoundEvent_2_SliderMouseDown__DelegateSignature();
	void BndEvt__FOV_K2Node_ComponentBoundEvent_3_SliderMouseUp__DelegateSignature();
	void BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature();
	void ExecuteUbergraph_Menu_InGame_VIDEO_options();
	void ShowApplyButton__DelegateSignature();
	void HideApplyButton__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
