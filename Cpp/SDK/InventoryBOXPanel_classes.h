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

// WidgetBlueprintGeneratedClass InventoryBOXPanel.InventoryBOXPanel_C
// 0x0000
class UInventoryBOXPanel_C : public UInventoryPanelsROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryBOXPanel.InventoryBOXPanel_C");
		return ptr;
	}



	void AddSlotsToArray();
	void Construct();
	void Tick();
	void ExecuteUbergraph_InventoryBOXPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
