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

// WidgetBlueprintGeneratedClass InventoryPanelsROOT.InventoryPanelsROOT_C
// 0x0000
class UInventoryPanelsROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryPanelsROOT.InventoryPanelsROOT_C");
		return ptr;
	}



	void RemoveLootByIndexes();
	void GetSelectedItems();
	void DrawSlots();
	void GetAllLoot();
	void Construct();
	void Tick();
	void ExecuteUbergraph_InventoryPanelsROOT();
	void DrawCards__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
