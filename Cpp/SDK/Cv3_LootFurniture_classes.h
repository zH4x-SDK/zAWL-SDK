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

// BlueprintGeneratedClass Cv3_LootFurniture.Cv3_LootFurniture_C
// 0x0000
class ACv3_LootFurniture_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_LootFurniture.Cv3_LootFurniture_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void OnRep_isDestroy();
	void OnRep_isOpen();
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
	void RegenerateLoot();
	void ReceiveBeginPlay();
	void CheckRegenerateLoot();
	void CheckState();
	void ExecuteUbergraph_Cv3_LootFurniture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
