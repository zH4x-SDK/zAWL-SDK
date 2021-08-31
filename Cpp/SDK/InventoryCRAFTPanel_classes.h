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

// WidgetBlueprintGeneratedClass InventoryCRAFTPanel.InventoryCRAFTPanel_C
// 0x0000
class UInventoryCRAFTPanel_C : public UInventoryPanelsROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryCRAFTPanel.InventoryCRAFTPanel_C");
		return ptr;
	}



	void SetAboutText();
	void DrawSelected();
	void SortCraft();
	void GetText_1();
	void Get_Button_Craft_bIsEnabled_1();
	void AddRootToChild();
	void Create_CraftSlots();
	void AddSlotsToArray();
	void Construct();
	void Tick();
	void DrawSlots();
	void BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ShowActorCraft();
	void ShowMyCraft();
	void Craft_This();
	void Reset();
	void UpdateCraftPanel();
	void ExecuteUbergraph_InventoryCRAFTPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
