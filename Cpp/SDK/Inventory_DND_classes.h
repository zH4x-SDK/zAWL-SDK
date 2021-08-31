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

// WidgetBlueprintGeneratedClass Inventory_DND.Inventory_DND_C
// 0x0000
class UInventory_DND_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory_DND.Inventory_DND_C");
		return ptr;
	}



	void PreConstruct();
	void Construct();
	void Tick();
	void ExecuteUbergraph_Inventory_DND();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
