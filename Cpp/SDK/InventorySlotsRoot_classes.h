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

// WidgetBlueprintGeneratedClass InventorySlotsRoot.InventorySlotsRoot_C
// 0x0000
class UInventorySlotsRoot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventorySlotsRoot.InventorySlotsRoot_C");
		return ptr;
	}



	void Drop();
	void HideThrober();
	void ShowThrober();
	void GetLootSysytem();
	void CheckMyState();
	void Use();
	void DrawSlot();
	void ClearSlot();
	void UnSelectInRoot();
	void SelectInRoot();
	void Construct();
	void Tick();
	void ExecuteUbergraph_InventorySlotsRoot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
