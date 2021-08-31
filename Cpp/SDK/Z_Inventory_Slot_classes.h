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

// WidgetBlueprintGeneratedClass Z_Inventory_Slot.Z_Inventory_Slot_C
// 0x0000
class UZ_Inventory_Slot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_Inventory_Slot.Z_Inventory_Slot_C");
		return ptr;
	}



	void OnMouseButtonUp();
	void GetHintText();
	void Get_CountText_Text_1();
	void Get_SplitProgress_Visibility_1();
	void SetSplitProgress();
	void CheckCanCombine();
	void Style_SetCanCombine();
	void ShowBackpackIcon();
	void DoUNATTACH();
	void CheckAttachet();
	void UseItem();
	void OnMouseButtonDoubleClick();
	void CallDropOut();
	void CheckCanDrop();
	void CallDropEvent();
	void Style_SetCanDrop();
	void Style_SetBlockDrop();
	void CheckTypeText();
	void Style_SetNormal();
	void Style_SetDrag();
	void OnDrop();
	void OnDragDetected();
	void OnMouseButtonDown();
	void Construct();
	void Draw();
	void OnMouseEnter();
	void OnMouseLeave();
	void SetSlotType();
	void Tick();
	void BndEvt__MouseWheelZone_K2Node_ComponentBoundEvent_4_MouseWheel__DelegateSignature();
	void MOuseRelease();
	void ExecuteUbergraph_Z_Inventory_Slot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
