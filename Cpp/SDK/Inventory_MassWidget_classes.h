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

// WidgetBlueprintGeneratedClass Inventory_MassWidget.Inventory_MassWidget_C
// 0x0000
class UInventory_MassWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory_MassWidget.Inventory_MassWidget_C");
		return ptr;
	}



	void GetText_Percents();
	void MovePercent();
	void Tick();
	void OverloadEvent();
	void Update();
	void ExecuteUbergraph_Inventory_MassWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
