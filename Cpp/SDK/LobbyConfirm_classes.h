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

// WidgetBlueprintGeneratedClass LobbyConfirm.LobbyConfirm_C
// 0x0000
class ULobbyConfirm_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyConfirm.LobbyConfirm_C");
		return ptr;
	}



	void Construct();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_0_Click_Yes__DelegateSignature();
	void BndEvt__YesNoDialog_K2Node_ComponentBoundEvent_1_Click_No__DelegateSignature();
	void Draw();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SURV_GlobalMenuButton_K2Node_ComponentBoundEvent_9_OnClick_button__DelegateSignature();
	void BndEvt__SURV_GlobalMenuButton_0_K2Node_ComponentBoundEvent_10_OnClick_button__DelegateSignature();
	void ExecuteUbergraph_LobbyConfirm();
	void No__DelegateSignature();
	void Yes__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
