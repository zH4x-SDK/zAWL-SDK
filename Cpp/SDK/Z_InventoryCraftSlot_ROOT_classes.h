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

// WidgetBlueprintGeneratedClass Z_InventoryCraftSlot_ROOT.Z_InventoryCraftSlot_ROOT_C
// 0x0000
class UZ_InventoryCraftSlot_ROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_InventoryCraftSlot_ROOT.Z_InventoryCraftSlot_ROOT_C");
		return ptr;
	}



	void RootDrawSelected();
	void RootShowThrober();
	void RootClearSlots();
	void RootDrawCard();
	void RootHideThrober();
	void ExecuteUbergraph_Z_InventoryCraftSlot_ROOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
