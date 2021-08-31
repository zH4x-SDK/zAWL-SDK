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

// WidgetBlueprintGeneratedClass SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C
// 0x0000
class USURV_InventoryCRAFTPanel_C : public UZ_InventoryCRAFT_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_InventoryCRAFTPanel.SURV_InventoryCRAFTPanel_C");
		return ptr;
	}



	void GenerateTable();
	void SetAboutText();
	void DrawSelected();
	void CheckCraft();
	void GetText_1();
	void Get_Button_Craft_bIsEnabled_1();
	void Create_CraftSlots();
	void AddSlotsToArray();
	void Tick();
	void BndEvt__Button_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_113_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature();
	void RootDrawSlots();
	void RootCraft_This();
	void Construct();
	void RootShowMyCraft();
	void RootShowActorCraft();
	void RootUpdateCraftPanel();
	void OnCloseCraft();
	void ExecuteUbergraph_SURV_InventoryCRAFTPanel();
	void ClickClose_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
