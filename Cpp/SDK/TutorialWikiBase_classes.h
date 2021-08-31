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

// WidgetBlueprintGeneratedClass TutorialWikiBase.TutorialWikiBase_C
// 0x0000
class UTutorialWikiBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialWikiBase.TutorialWikiBase_C");
		return ptr;
	}



	void OnKeyDown();
	void OnOpen();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CheckBox_VSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TutorialWikiBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
