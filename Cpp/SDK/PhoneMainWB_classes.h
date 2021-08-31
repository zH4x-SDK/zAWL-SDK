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

// WidgetBlueprintGeneratedClass PhoneMainWB.PhoneMainWB_C
// 0x0000
class UPhoneMainWB_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhoneMainWB.PhoneMainWB_C");
		return ptr;
	}



	void PreConstruct();
	void BndEvt__ButtonReload_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonFire_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonFire_K2Node_ComponentBoundEvent_124_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ButtonFire_K2Node_ComponentBoundEvent_136_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_PhoneMainWB();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
