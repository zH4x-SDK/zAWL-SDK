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

// WidgetBlueprintGeneratedClass Inventory_widget_base.Inventory_widget_BASE_C
// 0x0000
class UInventory_widget_BASE_C : public UZ_InventoryBASE_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory_widget_base.Inventory_widget_BASE_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
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
	void ZL_GUI_ShowInventory();
	void ZL_GUI_HideInventory();
	void ZL_CHARACTER_EquipThis_Server_();
	void ZL_CHARACTER_DropThis_Server_();
	void ZL_CHARACTER_USEThis_Server_();
	void ZL_CHARACTER_Unequip_Serever_();
	void ZL_CHARACTER_AttachToWeapon_Server_();
	void ZL_CHARACTER_UNAttach_Server_();
	void ZL_GUI_Overload();
	void Construct();
	void ZL_GUI_ConstructMenu();
	void ZL_GUI_ClearContainer();
	void ZL_GUI_Construkt_Container();
	void ZL_GUI_DND_Drop();
	void ZL_GUI_SLOT_Hovered();
	void ZL_GUI_SLOT_Unhovered();
	void ZL_GUI_DrawLootNear();
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
	void ROOT_ShowInvtory();
	void ROOT_ShowCraft();
	void ROOT_ShowActorCraft();
	void ExecuteUbergraph_Inventory_widget_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
