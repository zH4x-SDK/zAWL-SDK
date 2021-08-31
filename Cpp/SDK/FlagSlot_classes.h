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

// WidgetBlueprintGeneratedClass FlagSlot.FlagSlot_C
// 0x0000
class UFlagSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlagSlot.FlagSlot_C");
		return ptr;
	}



	void SetbuttonStyle();
	void PreConstruct();
	void DrawFlag();
	void SelectFlag();
	void UNSelectFlag();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void Set_disabled();
	void SetEnabled();
	void OnMouseEnter();
	void ExecuteUbergraph_FlagSlot();
	void Click__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
