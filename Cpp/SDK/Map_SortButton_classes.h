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

// WidgetBlueprintGeneratedClass Map_SortButton.Map_SortButton_C
// 0x0000
class UMap_SortButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Map_SortButton.Map_SortButton_C");
		return ptr;
	}



	void PreConstruct();
	void Construct();
	void ShowSort();
	void HideSort();
	void Revers();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Map_SortButton();
	void ButtonClick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
