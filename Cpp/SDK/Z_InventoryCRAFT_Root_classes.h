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

// WidgetBlueprintGeneratedClass Z_InventoryCRAFT_Root.Z_InventoryCRAFT_Root_C
// 0x0000
class UZ_InventoryCRAFT_Root_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_InventoryCRAFT_Root.Z_InventoryCRAFT_Root_C");
		return ptr;
	}



	void RootShowActorCraft();
	void RootShowMyCraft();
	void RootCraft_This();
	void RootUpdateCraftPanel();
	void OnCloseCraft();
	void Reset();
	void RootDrawSlots();
	void RootClearSlot();
	void RootHideThrober();
	void ExecuteUbergraph_Z_InventoryCRAFT_Root();
	void ClickClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
