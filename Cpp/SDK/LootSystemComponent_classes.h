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

// BlueprintGeneratedClass LootSystemComponent.LootSystemComponent_C
// 0x0000
class ULootSystemComponent_C : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LootSystemComponent.LootSystemComponent_C");
		return ptr;
	}



	void RemoveAmmo();
	void GetNextWeaponInType();
	void GetNextWeaponIfDrop();
	void GetLootBytype();
	void Heal_Me();
	void GetSplitLoot();
	void GetTypeCount();
	void CharacterToLoot();
	void UseUsableLoot();
	void UpdateSlotsOnAll();
	void UseLoot();
	void RemoveLoot();
	void CheckResourcesForCraft();
	void CheckCouantbleLoot();
	void GetEmptySlotsIndexes();
	void GetLootIndexes();
	void GetLootcount();
	void OnRep_InventoryActor();
	void ClearSlots();
	void ClearID();
	void GetLoot();
	void AddLoot();
	void RemoveLootFromSlot();
	void Add_Loot_To_Slot();
	void Add_Loot_to_Id();
	void Get_ID_Indexes();
	void IndexateLootArray();
	void UpdateLootArray();
	void Server_MoveLoot_In();
	void Server_MoveLootOut();
	void Server_Use_Loot();
	void UpdatePlayerSlotsArrayFROM_SERVER();
	void UpdatePlayerSlotsON_Client();
	void UpdateActorSlotsON_CLIENT();
	void UpdateActorSlotsFromServer();
	void Server_DropLoot();
	void UpdateComponentFromServer();
	void ClientUseLoot();
	void Client_Drop_Weapon_From_Hand();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void ExecuteUbergraph_LootSystemComponent();
	void RefreashWidgets__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
