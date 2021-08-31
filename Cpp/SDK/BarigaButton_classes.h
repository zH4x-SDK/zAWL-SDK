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

// WidgetBlueprintGeneratedClass BarigaButton.BarigaButton_C
// 0x0000
class UBarigaButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BarigaButton.BarigaButton_C");
		return ptr;
	}



	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetSize();
	void Draw();
	void Construct();
	void SetSelectedStyle();
	void SetNormalStyle();
	void ExecuteUbergraph_BarigaButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
