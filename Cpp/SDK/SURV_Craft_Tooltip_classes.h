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

// WidgetBlueprintGeneratedClass SURV_Craft_Tooltip.SURV_Craft_Tooltip_C
// 0x0000
class USURV_Craft_Tooltip_C : public UZ_Tooltip_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Craft_Tooltip.SURV_Craft_Tooltip_C");
		return ptr;
	}



	void Construct();
	void Tick();
	void DrawFromCraft();
	void Destruct();
	void ExecuteUbergraph_SURV_Craft_Tooltip();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
