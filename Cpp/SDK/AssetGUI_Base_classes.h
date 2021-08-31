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

// WidgetBlueprintGeneratedClass AssetGUI_Base.AssetGUI_Base_C
// 0x0000
class UAssetGUI_Base_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetGUI_Base.AssetGUI_Base_C");
		return ptr;
	}



	void UpdateGoodsItems();
	void OnKeyDown();
	void Draw();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_Divedents_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Sell_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnSaveComplite_Event_2();
	void ShowLocked();
	void BndEvt__Button_Sell_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnOpen();
	void OnClose();
	void ExecuteUbergraph_AssetGUI_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
