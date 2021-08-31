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

// WidgetBlueprintGeneratedClass Z_InventoryCraftResourseSlotROOT.Z_InventoryCraftResourseSlotROOT_C
// 0x0000
class UZ_InventoryCraftResourseSlotROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_InventoryCraftResourseSlotROOT.Z_InventoryCraftResourseSlotROOT_C");
		return ptr;
	}



	void RootClearSlot();
	void RootDrawSlot();
	void ExecuteUbergraph_Z_InventoryCraftResourseSlotROOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
