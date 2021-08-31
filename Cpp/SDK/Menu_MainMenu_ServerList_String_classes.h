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

// WidgetBlueprintGeneratedClass Menu_MainMenu_ServerList_String.Menu_MainMenu_ServerList_String_C
// 0x0000
class UMenu_MainMenu_ServerList_String_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_MainMenu_ServerList_String.Menu_MainMenu_ServerList_String_C");
		return ptr;
	}



	void SaveInventoryCost();
	void OnMouseButtonDown();
	void OnMouseEnter();
	void CustomOnButtonClick();
	void OnMouseLeave();
	void PreConstruct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Menu_MainMenu_ServerList_String();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
