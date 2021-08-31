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

// WidgetBlueprintGeneratedClass PlaceWidgetBase.PlaceWidgetBase_C
// 0x0000
class UPlaceWidgetBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlaceWidgetBase.PlaceWidgetBase_C");
		return ptr;
	}



	void ClearComlitePlaces();
	void UpdatePlcesState();
	void Construct();
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature();
	void UpdateCombinationLIst();
	void ExecuteUbergraph_PlaceWidgetBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
