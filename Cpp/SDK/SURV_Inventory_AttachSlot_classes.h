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

// WidgetBlueprintGeneratedClass SURV_Inventory_AttachSlot.SURV_Inventory_AttachSlot_C
// 0x0000
class USURV_Inventory_AttachSlot_C : public UZ_Inventory_AttachRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Inventory_AttachSlot.SURV_Inventory_AttachSlot_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void OnDragDetected();
	void Tick();
	void MouseDrop();
	void Draw();
	void Root_MouseDrop();
	void Clear();
	void ExecuteUbergraph_SURV_Inventory_AttachSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
