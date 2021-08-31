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

// WidgetBlueprintGeneratedClass Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C
// 0x0000
class UInventory_AttachMiniSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory_AttachMiniSlot.Inventory_AttachMiniSlot_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void OnDragDetected();
	void Tick();
	void Draw();
	void MouseDrop();
	void SetParametrs();
	void ExecuteUbergraph_Inventory_AttachMiniSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
