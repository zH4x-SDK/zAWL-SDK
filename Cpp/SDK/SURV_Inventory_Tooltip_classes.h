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

// WidgetBlueprintGeneratedClass SURV_Inventory_Tooltip.SURV_Inventory_Tooltip_C
// 0x0000
class USURV_Inventory_Tooltip_C : public UZ_Tooltip_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Inventory_Tooltip.SURV_Inventory_Tooltip_C");
		return ptr;
	}



	void Construct();
	void Tick();
	void Destruct();
	void Root_Hide();
	void Root_SetMass();
	void ExecuteUbergraph_SURV_Inventory_Tooltip();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
