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

// WidgetBlueprintGeneratedClass Menu_InGame_MainMenu.Menu_InGame_MainMenu_C
// 0x0000
class UMenu_InGame_MainMenu_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_MainMenu.Menu_InGame_MainMenu_C");
		return ptr;
	}



	void Construct();
	void BndEvt__Menu_Item_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void BndEvt__Menu_Item_0_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature();
	void BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_23_OnClick__DelegateSignature();
	void BndEvt__Menu_Item_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature();
	void BndEvt__Menu_Item_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void ExecuteUbergraph_Menu_InGame_MainMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
