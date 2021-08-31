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

// WidgetBlueprintGeneratedClass SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C
// 0x0000
class USURV_Inventory_CraftResSlot_C : public UZ_InventoryCraftResourseSlotROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Inventory_CraftResSlot.SURV_Inventory_CraftResSlot_C");
		return ptr;
	}



	void Get_Fon_ColorAndOpacity_1();
	void Get_Count_Text_1();
	void Get_Count_ColorAndOpacity_1();
	void Construct();
	void RootClearSlot();
	void ExecuteUbergraph_SURV_Inventory_CraftResSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
