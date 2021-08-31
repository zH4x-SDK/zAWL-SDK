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

// WidgetBlueprintGeneratedClass InventoryCraftMainCard.InventoryCraftMainCard_C
// 0x0000
class UInventoryCraftMainCard_C : public UInventorySlotsRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryCraftMainCard.InventoryCraftMainCard_C");
		return ptr;
	}



	void Get_RANK_Lock_Visibility_1();
	void GetVisibility_4();
	void GetVisibility_3();
	void GetVisibility_2();
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
	void DrawCard();
	void ClearSlot();
	void ShowThrober();
	void HideThrober();
	void MouseDown();
	void Tick();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_InventoryCraftMainCard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
