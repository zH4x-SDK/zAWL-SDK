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

// WidgetBlueprintGeneratedClass MainMenu_CharCustomString.MainMenu_CharCustomString_C
// 0x0000
class UMainMenu_CharCustomString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenu_CharCustomString.MainMenu_CharCustomString_C");
		return ptr;
	}



	void PreConstruct();
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_MainMenu_CharCustomString();
	void ClickPrevious__DelegateSignature();
	void ClickNext__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
