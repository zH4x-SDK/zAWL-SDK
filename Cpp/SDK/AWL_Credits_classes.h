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

// WidgetBlueprintGeneratedClass AWL_Credits.AWL_Credits_C
// 0x0000
class UAWL_Credits_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_Credits.AWL_Credits_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void OnKeyDown();
	void Construct();
	void BndEvt__Button_125_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Show();
	void Close();
	void BndEvt__Button_125_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_125_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_AWL_Credits();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
