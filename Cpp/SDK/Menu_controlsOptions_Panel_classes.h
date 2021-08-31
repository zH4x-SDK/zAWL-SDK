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

// WidgetBlueprintGeneratedClass Menu_controlsOptions_Panel.Menu_controlsOptions_Panel_C
// 0x0000
class UMenu_controlsOptions_Panel_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_controlsOptions_Panel.Menu_controlsOptions_Panel_C");
		return ptr;
	}



	void Construct();
	void BndEvt__Back_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__Keyboard_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__Mouse_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void ExecuteUbergraph_Menu_controlsOptions_Panel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
