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

// WidgetBlueprintGeneratedClass InventoryBackPackCard.InventoryBackPackCard_C
// 0x0000
class UInventoryBackPackCard_C : public UInventorySlotsRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryBackPackCard.InventoryBackPackCard_C");
		return ptr;
	}



	void Get_SplitCountText_Visibility_1();
	void SetSplitProgress();
	void GetVisibility_1();
	void GetText_1();
	void OnMouseWheel();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void DrawCard();
	void DoubleClick();
	void OneClick();
	void ClearCard();
	void OnMouseLeave();
	void OnMouseEnter();
	void MouseDown();
	void DrawSlot();
	void ClearSlot();
	void RightClick();
	void ShowThrober();
	void HideThrober();
	void Construct();
	void ExecuteUbergraph_InventoryBackPackCard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
