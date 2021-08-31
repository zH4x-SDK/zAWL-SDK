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

// WidgetBlueprintGeneratedClass Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C
// 0x0000
class UZ_Inventory_Slot_ROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_Inventory_Slot_ROOT.Z_Inventory_Slot_ROOT_C");
		return ptr;
	}



	void CalcDecrementMass();
	void SlotDecrementMass();
	void ShowOverload();
	void Root_Hide_Ammo_Icon();
	void Root_Set_Ammo_Info();
	void Root_MouseWhell();
	void Clear();
	void Root_Style_Draw();
	void Root_Style_Clear();
	void Root_ShowHInt();
	void Root_HideHInt();
	void INITIALIZATION();
	void OnMouseButtonUp();
	void GetHintText();
	void Root_Get_CountText();
	void Root_Get_SplitProgress_Visibility();
	void SetSplitProgress();
	void CheckCanCombine();
	void Root_Style_SetCanCombine();
	void Root_ShowBackpackIcon();
	void DoUNATTACH();
	void CheckAttachet();
	void UseItem();
	void OnMouseButtonDoubleClick();
	void CallDropOut();
	void CheckCanDrop();
	void CallDropEvent();
	void Root_Style_SetCanDrop();
	void Root_Style_SetBlockDrop();
	void CheckTypeText();
	void Style_SetNormal();
	void Root_Style_SetDrag();
	void OnDrop();
	void OnDragDetected();
	void OnMouseButtonDown();
	void Construct();
	void Draw();
	void OnMouseEnter();
	void OnMouseLeave();
	void MOuseRelease();
	void RootConstruct();
	void Root_Child_SetNormalStyle();
	void ExecuteUbergraph_Z_Inventory_Slot_ROOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
