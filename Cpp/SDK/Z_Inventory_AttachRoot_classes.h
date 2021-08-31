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

// WidgetBlueprintGeneratedClass Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C
// 0x0000
class UZ_Inventory_AttachRoot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_Inventory_AttachRoot.Z_Inventory_AttachRoot_C");
		return ptr;
	}



	void Clear();
	void Draw();
	void SetParametrs();
	void Root_MouseDrop();
	void ExecuteUbergraph_Z_Inventory_AttachRoot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
