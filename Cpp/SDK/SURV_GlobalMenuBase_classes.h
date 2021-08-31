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

// WidgetBlueprintGeneratedClass SURV_GlobalMenuBase.SURV_GlobalMenuBase_C
// 0x0000
class USURV_GlobalMenuBase_C : public UGlobalMenu_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_GlobalMenuBase.SURV_GlobalMenuBase_C");
		return ptr;
	}



	void OnKeyDown();
	void UpdatePlayersCount();
	void OnMouseWheel();
	void OnMouseButtonDoubleClick();
	void OnMouseButtonDown();
	void Construct();
	void Root_ShowExitMenu();
	void Root_ShowInventory();
	void Root_ShowOptions();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_805_OnClick_button__DelegateSignature();
	void BndEvt__Options_K2Node_ComponentBoundEvent_815_OnClick_button__DelegateSignature();
	void BndEvt__Respawn_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature();
	void BndEvt__Exit_K2Node_ComponentBoundEvent_32_OnClick_button__DelegateSignature();
	void BndEvt__Close_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature();
	void ROOT_ShowActorCraft();
	void RootShowInventory_NoAnim();
	void Root_MinimalMode();
	void Root_HideBlur();
	void Root_RespanwMenu();
	void Root_OnOpen();
	void ROOT_OnClose();
	void ExecuteUbergraph_SURV_GlobalMenuBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
