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

// WidgetBlueprintGeneratedClass LocalizePanel.LocalizePanel_C
// 0x0000
class ULocalizePanel_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocalizePanel.LocalizePanel_C");
		return ptr;
	}



	void PreConstruct();
	void BndEvt__ComboBoxString_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature();
	void OnShow();
	void ExecuteUbergraph_LocalizePanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
