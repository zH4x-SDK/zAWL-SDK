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

// BlueprintGeneratedClass Z_InventoryManager.Z_InventoryManager_C
// 0x0000
class UZ_InventoryManager_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_InventoryManager.Z_InventoryManager_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void Container_OpenBarigaActor_Server_();
	void Loot_DropWeaponFromHand_ServerFunc_();
	void CheckBackpackMass();
	void SplitCount();
	void Container_GetContainerPosition();
	void Container_CheckMoveOut();
	void Slots_CheckMass();
	void Slots_CalculateMass();
	void Inventory_Update_DBActorInfo();
	void OPEN_RESPAWN_MODE_ServerOnly_();
	void GET_LOOT_BY_SOCKET();
	void Slots_CanBackpackUnEqpt();
	void Slots_CheckOverload();
	void Loot_GetSocetIndex();
	void Fire();
	void LootTryAddToHand();
	void CheckTradeSuccess();
	void LootUNAttach_OnCharacter_ServerFunc_();
	void Slots_GetAttachSlotsIndexes();
	void LootAttachOnFloor();
	void AddHealth_ServerOnly_();
	void LootGetMedicineArray();
	void TRY_HEAL_ME();
	void SHOW_ACTOR_CRAFT();
	void LootCombine();
	void SET_BACKPACK_Mass();
	void LootUseThis();
	void TRY_ADD_ARRAY_LOOT_TO_INVENTORY();
	void Loot_Drop();
	void LOOT_DROP_NO_INVENTORY();
	void External_Close_ServerFunc_();
	void External_SetInventory();
	void External_Open_ServerFunc_();
	void Slots_ClearAllLoot();
	void GET_ALL_LOOT_BY_SOCKET_NoSlot_();
	void Loot_SetLoot_InSocket();
	void LootIsAttachExist();
	void LootClearAttach();
	void LootUnAttach();
	void LootCheckCanAttachAnywhere_noWork_();
	void LootFloorMove();
	void LootRemoveLootFromFloor();
	void GUI_DrawClientLootNear();
	void LootSeekLoot();
	void LootGetLootNear();
	void LootRemoveLoot();
	void Slots_ClearAttachmentOnParentSlot();
	void LootAttach_OnCharacter_ServerFunc_();
	void LootSetAttachInWeapStr();
	void Slots_SetAttachmentSlots();
	void Slots_ClearAttachmentSlots();
	void Slots_GetAttachSlotsByParentIndex();
	void LootTryAttach();
	void LootCheckCanAttachToWeapon();
	void GET_LOOT_By_Equipment();
	void LootCheckCanSetToSlot();
	void TRY_ADD_LOOT_TO_SOCKET();
	void GET_INVENTORY_LOOT_COUNT();
	void GET_PLAYER_LOOT_COUNT();
	void GET_LOOT_COUNT_By_Socet();
	void LootCombineEqual();
	void DECREMENT_SOCET_COUNT();
	void GET_LOOT_FROM_Socet();
	void LootUnEquip();
	void LootUnEquip_OnCharacter_ServerFunc_();
	void Slots_GetEquipSlots();
	void LootCheckCanEquip();
	void LootDrop_OnCharacter_ServerFunc_();
	void LootEquip_OnCharacter_ServerFunc_();
	void LootCheckUsable();
	void LootUse();
	void ContainerClose_ServerFunc_();
	void TransportTOInventory();
	void InventoryTOTransport();
	void GUI_OpenContainer();
	void ContainerOpen_ServerFunc_();
	void LootMove();
	void GUI_HideInventory();
	void GUI_ShowInventory();
	void GUI_StopUpdate();
	void GUI_StartUpdate();
	void GUI_Construct();
	void GUI_Update();
	void Initialize();
	void TRY_ADD_LOOT_TO_INVENTORY();
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
	void CLIENT_PLAYER_SetLootInSlot();
	void InitializeGUI();
	void CLIENT_PLAYER_ClearSlot();
	void SERVER_PLAYER_MoveLoot();
	void SERVER_Open_Container();
	void CLIENT_OPEN_CONTAINER();
	void SERVER_CONTAINER_MoveLoot();
	void CLIENT_CONTAINER_ClearSlot();
	void CLIENT_CONTAINER_SetLootInSlot();
	void SERVER_MOVE_FromContainerToPlayer();
	void SERVER_MOVE_FromPlayerToContainer();
	void SERVER_CLOSE_CONTAINER();
	void CLIENT_CLOSE_CONTAINER();
	void SERVER_CONTAINER_DROPItem();
	void SERVER_PLAYER_DROPItem();
	void SERVER_PLAYER_USEItem();
	void SERVER_CONTAINER_USEitem();
	void SERVER_PLAYER_TryUnEquip();
	void CLIENT_SIHRONIZE();
	void SERVER_SINHRONIZE();
	void SERVER_PLAYER_AttachToWeapon();
	void StartSeekLoot();
	void StopSeekLoot();
	void CLIENT_ONFLOOR_SetLootItem();
	void CLIENT_ONFLOOR_RemoveLoot();
	void CLIENT_ONFLOOR_Setloot();
	void SERVER_ONFLOOR_FromFloorToPlayer();
	void SERVER_ONFLOOR_FromPlayerToFloor();
	void SERVER_ONFLOOR_UseItem();
	void SERVER_CONTAINER_attach();
	void SERVER_UNATTACH_PLAYER_PLAYER();
	void SERVER_UNATTACH_PLAYER_CONTAINER();
	void SERVER_UNATTACH_CONTAINER_PLAYER();
	void SERVER_UNATTACH_CONTAINER_CONTAINER();
	void CLIENT_Extrernal_Open();
	void CLIENT_External_Close();
	void CLIENT_External_Set();
	void CLIENT_External_Clear();
	void CLIENT_PLAYER_Setbackpack();
	void SERVER_PLAYER_COMBINE();
	void CLIENT_ShowActorCraft();
	void SERVER_Split_count();
	void SERVER_HEAL_KEY();
	void StartAddHealth();
	void StopAddHealth();
	void SERVER_ONFLOOR_AttachFromPlayer();
	void SERVER_IsDoubleClick();
	void SERVER_TRADE_Begin();
	void Print_mass();
	void SERVER_StartDebug();
	void CLIENT_PrintDEbug();
	void ReceiveBeginPlay();
	void SERVER_UpdateDBActorInfo();
	void SERVER_OPEN_DB();
	void SERVER_Cheat_Moneys();
	void CLIENT_SHOW_TRADE_INFO();
	void SERVER_CorectMass();
	void SERVER_DropWeaponFromHand();
	void SERVER_CreateDbActor();
	void ReceiveEndPlay();
	void ExecuteUbergraph_Z_InventoryManager();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
