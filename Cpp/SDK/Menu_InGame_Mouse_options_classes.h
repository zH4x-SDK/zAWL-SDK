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

// WidgetBlueprintGeneratedClass Menu_InGame_Mouse_options.Menu_InGame_Mouse_options_C
// 0x0000
class UMenu_InGame_Mouse_options_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_Mouse_options.Menu_InGame_Mouse_options_C");
		return ptr;
	}



	void Save();
	void PreConstruct();
	void Construct();
	void BndEvt__Back_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	void BndEvt__Slider_42_K2Node_ComponentBoundEvent_48_OnFloatValueChangedEvent__DelegateSignature();
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature();
	void BndEvt__Menu_Item_C_0_K2Node_ComponentBoundEvent_56_OnClick__DelegateSignature();
	void On_Open();
	void ExecuteUbergraph_Menu_InGame_Mouse_options();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
