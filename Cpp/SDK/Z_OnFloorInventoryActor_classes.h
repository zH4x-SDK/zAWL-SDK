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

// BlueprintGeneratedClass Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C
// 0x0000
class AZ_OnFloorInventoryActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void CreateLootNear();
	void DeleteLootActor();
	void SetLootOnActor();
	void RemoveLoot();
	void AddLoot();
	void CompareLoot();
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
	void ReceiveBeginPlay();
	void UpdateInventory();
	void ReceiveTick();
	void ExecuteUbergraph_Z_OnFloorInventoryActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
