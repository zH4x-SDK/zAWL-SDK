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

// BlueprintGeneratedClass Inventory_DND_Operation.Inventory_DND_Operation_C
// 0x0000
class UInventory_DND_Operation_C : public UDragDropOperation
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Inventory_DND_Operation.Inventory_DND_Operation_C");
		return ptr;
	}



	void DragCancelled();
	void Drop();
	void ExecuteUbergraph_Inventory_DND_Operation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
