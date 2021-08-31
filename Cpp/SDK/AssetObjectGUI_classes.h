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

// WidgetBlueprintGeneratedClass AssetObjectGUI.AssetObjectGUI_C
// 0x0000
class UAssetObjectGUI_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetObjectGUI.AssetObjectGUI_C");
		return ptr;
	}



	void Update_goods();
	void OnKeyDown();
	void Tick();
	void Draw();
	void BndEvt__AWL_GlobalMenuButtonClose_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature();
	void UpdateAssetObjects_Event_1();
	void OnClose();
	void BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Pause_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Stop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_AssetObjectGUI();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
