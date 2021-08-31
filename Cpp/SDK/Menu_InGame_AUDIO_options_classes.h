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

// WidgetBlueprintGeneratedClass Menu_InGame_AUDIO_options.Menu_InGame_AUDIO_options_C
// 0x0000
class UMenu_InGame_AUDIO_options_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_AUDIO_options.Menu_InGame_AUDIO_options_C");
		return ptr;
	}



	void PreConstruct();
	void Construct();
	void BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	void BndEvt__Slider_42_K2Node_ComponentBoundEvent_48_OnFloatValueChangedEvent__DelegateSignature();
	void On_Open();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_47_OnFloatValueChangedEvent__DelegateSignature();
	void ExecuteUbergraph_Menu_InGame_AUDIO_options();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
