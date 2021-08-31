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

// WidgetBlueprintGeneratedClass AWL_Yes_No.AWL_Yes_No_C
// 0x0000
class UAWL_Yes_No_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_Yes_No.AWL_Yes_No_C");
		return ptr;
	}



	void OnKeyDown();
	void OpenDialog();
	void Close();
	void Construct();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_AWL_Yes_No();
	void ClickNo__DelegateSignature();
	void ClickYes__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
