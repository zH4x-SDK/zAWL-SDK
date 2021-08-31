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

// WidgetBlueprintGeneratedClass Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C
// 0x0000
class UZ_InventoryCRAFTPanel_C : public UInventoryPanelsROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_InventoryCRAFTPanel.Z_InventoryCRAFTPanel_C");
		return ptr;
	}



	void GenerateTable();
	void SetAboutText();
	void DrawSelected();
	void CheckCraft();
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
	void BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature();
	void OnCloseCraft();
	void ExecuteUbergraph_Z_InventoryCRAFTPanel();
	void ClickClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
