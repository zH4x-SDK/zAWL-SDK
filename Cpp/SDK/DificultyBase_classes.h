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

// WidgetBlueprintGeneratedClass DificultyBase.DificultyBase_C
// 0x0000
class UDificultyBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DificultyBase.DificultyBase_C");
		return ptr;
	}



	void Construct();
	void BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_ChangeStep__DelegateSignature();
	void BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_1_ChangeDynamic__DelegateSignature();
	void BndEvt__AWL_GlobalMenuButton_K2Node_ComponentBoundEvent_2_OnClick_button__DelegateSignature();
	void OnOpen();
	void ExecuteUbergraph_DificultyBase();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
