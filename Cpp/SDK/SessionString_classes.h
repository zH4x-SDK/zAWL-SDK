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

// WidgetBlueprintGeneratedClass SessionString.SessionString_C
// 0x0000
class USessionString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SessionString.SessionString_C");
		return ptr;
	}



	void OnFailure_4F4ED60C4492AE08BE74B2B07A3AAE72();
	void OnSuccess_4F4ED60C4492AE08BE74B2B07A3AAE72();
	void Draw();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SessionString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
