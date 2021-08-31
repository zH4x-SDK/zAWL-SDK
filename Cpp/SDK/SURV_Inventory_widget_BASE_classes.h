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

// WidgetBlueprintGeneratedClass SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C
// 0x0000
class USURV_Inventory_widget_BASE_C : public UZ_InventoryBASE_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Inventory_widget_BASE.SURV_Inventory_widget_BASE_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void CheckMoneySize();
	void CheckInteraction();
	void GetInteractVisibility();
	void GetUninstlledDLC();
	void MouseAutoPosition();
	void ShowBariga();
	void CreateBarigaButtons();
	void UpdateSlotsSize();
	void Container_ShowAllSlots();
	void Get_ContainerName_Visibility_1();
	void AddWidgetToContainer();
	void AddWidgetToGrid();
	void Slots_UpdateBlockcondition();
	void OnMouseWheel();
	void OnMouseButtonDown();
	void Slots_AddGrenades();
	void Slots_AddMelee();
	void Container_HideAllSlots();
	void Slots_AddSecundaryWeapons();
	void Slots_AddEquip();
	void SetParentsAndChilds();
	void Slots_AddPrymaryWeapons();
	void CheckDropable();
	void Container_Update();
	void Inventory_Update();
	void ZL_GUI_ConstructMenu();
	void ZL_GUI_ShowInventory();
	void ZL_GUI_HideInventory();
	void ZL_CHARACTER_EquipThis_Server_();
	void ZL_CHARACTER_DropThis_Server_();
	void ZL_CHARACTER_USEThis_Server_();
	void ZL_CHARACTER_Unequip_Serever_();
	void ZL_CHARACTER_AttachToWeapon_Server_();
	void ZL_GUI_DrawLootNear();
	void ZL_CHARACTER_UNAttach_Server_();
	void Construct();
	void ZL_GUI_ClearContainer();
	void ZL_GUI_Construkt_Container();
	void ZL_GUI_DND_Drop();
	void ZL_GUI_SLOT_Hovered();
	void ZL_GUI_SLOT_Unhovered();
	void ZL_GUI_Update();
	void ZL_GUI_DnD_Drag();
	void OnInventoryOpen();
	void OnInventoryClose();
	void HideCraft();
	void BndEvt__Z_InventoryCRAFTPanel_K2Node_ComponentBoundEvent_35_ClickClose__DelegateSignature();
	void ShowMyCraft();
	void ShowMeInventory();
	void SetBackpackCount();
	void ShowActorCraft();
	void CreateMenu();
	void ROOT_CreateMenu();
	void ROOT_ShowCraft();
	void ROOT_ShowInvtory();
	void ROOT_ShowActorCraft();
	void ZL_GUI_Overload();
	void ROOT_ShowPrOpticPart();
	void ROOT_ShowInformation();
	void ROOT_HideInformation();
	void ROOT_respawnMode();
	void BndEvt__PLAY_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OpenMainMenuMode();
	void CloseMainMenuMode();
	void UpdateSlotsSizeEvent();
	void SelectBarigaButton();
	void ROOT_OnClose();
	void ROOT_ShowPrSilencerPart();
	void ROOT_ShowSecSilencerPart();
	void ROOT_ShowSecOpticPart();
	void BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetMoney();
	void BndEvt__AWL_RespawnBtn_K2Node_ComponentBoundEvent_1_OnClick_button__DelegateSignature();
	void Tick();
	void ExecuteUbergraph_SURV_Inventory_widget_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
