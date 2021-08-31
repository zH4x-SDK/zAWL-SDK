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

// WidgetBlueprintGeneratedClass Inventory_BASE.Inventory_BASE_C
// 0x0000
class UInventory_BASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory_BASE.Inventory_BASE_C");
		return ptr;
	}



	void OnMouseWheel();
	void OnMouseButtonDoubleClick();
	void OnMouseButtonDown();
	void Get_DropMouseIco_Visibility_1();
	void Get_TextDrop_Visibility_1();
	void UpdateOtherPanel();
	void GetText_3();
	void Get_Button_Trash_Visibility_1();
	void CheckAmmo();
	void GetText_2();
	void GetText_1();
	void Get_OutButton_Visibility_1();
	void Get_InButton_Visibility_1();
	void HidePanelAndButtons();
	void GetSelectedSlots();
	void RemoveFromInventoryArray();
	void MoveLootIn();
	void GetWidgetByIndex();
	void RefreshInventory();
	void ClearBackPack();
	void DrawBackPack();
	void AddRootToChild();
	void ClearMainSlots();
	void USE_Backpak_slot();
	void Construct();
	void Tick();
	void BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_367_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__InButton_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OutButton_K2Node_ComponentBoundEvent_412_OnButtonClickedEvent__DelegateSignature();
	void RefreshWidgetsEvent();
	void Destruct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Trash_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void CheckActorValid();
	void BindRefreshInventory();
	void ExecuteUbergraph_Inventory_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
