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

// WidgetBlueprintGeneratedClass SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C
// 0x0000
class USURV_Inventory_Eqpt_C : public UZ_Inventory_Slot_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SURV_Inventory_Eqpt.SURV_Inventory_Eqpt_C");
		return ptr;
	}



	void ShowHideSilencer();
	void SetAmmoCount();
	void ShowHideOpticSlot();
	void Root_HideHInt();
	void Root_ShowHInt();
	void Construct();
	void Root_Style_Clear();
	void BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_0_MouseWheel__DelegateSignature();
	void Root_Set_Ammo_Info();
	void Root_ShowBackpackIcon();
	void Root_Hide_Ammo_Icon();
	void Root_Style_Draw();
	void ExecuteUbergraph_SURV_Inventory_Eqpt();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
