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

// WidgetBlueprintGeneratedClass Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C
// 0x0000
class UZ_InventoryCraftResourceSlot_C : public UInventorySlotsRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_InventoryCraftResourceSlot.Z_InventoryCraftResourceSlot_C");
		return ptr;
	}



	void Get_Fon_ColorAndOpacity_1();
	void GetVisibility_1();
	void Get_Count_Text_1();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void Construct();
	void OnMouseEnter();
	void OnMouseLeave();
	void ClearSlot();
	void DrawSlot();
	void ExecuteUbergraph_Z_InventoryCraftResourceSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
