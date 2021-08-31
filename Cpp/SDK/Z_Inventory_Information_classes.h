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

// WidgetBlueprintGeneratedClass Z_Inventory_Information.Z_Inventory_Information_C
// 0x0000
class UZ_Inventory_Information_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_Inventory_Information.Z_Inventory_Information_C");
		return ptr;
	}



	void DrawInteraction();
	void DrawWeapon();
	void Construct();
	void Draw();
	void Clear();
	void ExecuteUbergraph_Z_Inventory_Information();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
