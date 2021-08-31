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

// WidgetBlueprintGeneratedClass Inventory_SlotType_Equip.Inventory_SlotType_Equip_C
// 0x0000
class UInventory_SlotType_Equip_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory_SlotType_Equip.Inventory_SlotType_Equip_C");
		return ptr;
	}



	void Draw();
	void SetAmmoInfo();
	void ExecuteUbergraph_Inventory_SlotType_Equip();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
