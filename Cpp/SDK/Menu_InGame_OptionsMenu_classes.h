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

// WidgetBlueprintGeneratedClass Menu_InGame_OptionsMenu.Menu_InGame_OptionsMenu_C
// 0x0000
class UMenu_InGame_OptionsMenu_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_OptionsMenu.Menu_InGame_OptionsMenu_C");
		return ptr;
	}



	void Construct();
	void BndEvt__Menu_Item_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature();
	void BndEvt__Audio_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__Controller_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void On_Open();
	void BndEvt__Keyboard_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void ExecuteUbergraph_Menu_InGame_OptionsMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
