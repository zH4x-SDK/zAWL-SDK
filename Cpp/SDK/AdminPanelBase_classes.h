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

// WidgetBlueprintGeneratedClass AdminPanelBase.AdminPanelBase_C
// 0x0000
class UAdminPanelBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdminPanelBase.AdminPanelBase_C");
		return ptr;
	}



	void BndEvt__Button_202_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_128_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResourcesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature();
	void UpdatePlayers();
	void Construct();
	void Destruct();
	void ShowPlayer();
	void ExecuteUbergraph_AdminPanelBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
