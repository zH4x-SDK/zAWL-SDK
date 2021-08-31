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

// WidgetBlueprintGeneratedClass InventoryBigCard.InventoryBigCard_C
// 0x0000
class UInventoryBigCard_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryBigCard.InventoryBigCard_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void Get_Footer_Text_1();
	void DrawCard();
	void ClearCard();
	void OnMouseLeave();
	void OnMouseEnter();
	void Construct();
	void ExecuteUbergraph_InventoryBigCard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
