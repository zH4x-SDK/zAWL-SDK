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

// BlueprintGeneratedClass Z_InventoryComponent.Z_InventoryComponent_C
// 0x0000
class UZ_InventoryComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_InventoryComponent.Z_InventoryComponent_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void Loot_GetLootWithHandle();
	void GetInventorySummaryCost();
	void TrySetToInventoryIndex();
	void InventoryClear_NoSync_();
	void LootAddLootStr();
	void IsInventoryEmpty();
	void LootDecrementLootCount_ServerOnly_();
	void LootAddLoot();
	void Loot_IncrementLoot_ServerOnly_();
	void LootGetLootCount();
	void LootDecrementLoot_ServerOnly_();
	void DisconnectManager();
	void ConnectManager();
	void UpdateInfo();
	void Slot_ClearLoot();
	void Slot_GetEmpty_NoToEqpt_();
	void Slot_GetLoot();
	void Slot_SetLoot();
	void InitializeInventory();
	void ZL_GUI_ConstructMenu();
	void ZL_GUI_Update();
	void ZL_GUI_ShowInventory();
	void ZL_GUI_HideInventory();
	void ZL_GUI_Construkt_Container();
	void ZL_GUI_ClearContainer();
	void ZL_GUI_DnD_Drag();
	void ZL_GUI_DND_Drop();
	void ZL_CHARACTER_EquipThis_Server_();
	void ZL_CHARACTER_DropThis_Server_();
	void ZL_CHARACTER_USEThis_Server_();
	void ZL_CHARACTER_Unequip_Serever_();
	void ZL_GUI_SLOT_Hovered();
	void ZL_GUI_SLOT_Unhovered();
	void ZL_CHARACTER_AttachToWeapon_Server_();
	void ZL_GUI_DrawLootNear();
	void ZL_CHARACTER_UNAttach_Server_();
	void ZL_GUI_Overload();
	void ExecuteUbergraph_Z_InventoryComponent();
	void OnCloseInventory__DelegateSignature();
	void OnLootRemove__DelegateSignature();
	void OnLootAdded_ServerOnly___DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
