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

// WidgetBlueprintGeneratedClass SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C
// 0x0000
class USURV_Inventory_CraftSlot_C : public UZ_InventoryCraftSlot_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Inventory_CraftSlot.SURV_Inventory_CraftSlot_C");
		return ptr;
	}



	void ConvertToMyString();
	void Get_RANK_Lock_Visibility_1();
	void GetVisibility_4();
	void GetVisibility_Progress();
	void GetVisibilityButton();
	void CalculatePercent();
	void Get_PercentText_Visibility_1();
	void GetVisibility_1();
	void GetText_1();
	void GetShadowColorAndOpacity_1();
	void OnMouseButtonDown();
	void GetFillColorAndOpacity_2();
	void GetPercent_1();
	void Construct();
	void OnMouseEnter();
	void OnMouseLeave();
	void MouseDown();
	void Tick();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void RootShowThrober();
	void RootDrawCard();
	void RootHideThrober();
	void RootClearSlots();
	void ExecuteUbergraph_SURV_Inventory_CraftSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
