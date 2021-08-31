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

// WidgetBlueprintGeneratedClass ByDLC_Widget.ByDLC_Widget_C
// 0x0000
class UByDLC_Widget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ByDLC_Widget.ByDLC_Widget_C");
		return ptr;
	}



	void OnKeyDown();
	void Construct();
	void BndEvt__ButtonProduction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Close();
	void BndEvt__ButtonProduction_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ByDLC_Widget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
