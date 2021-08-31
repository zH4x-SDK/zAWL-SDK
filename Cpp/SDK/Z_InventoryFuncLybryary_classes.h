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

// BlueprintGeneratedClass Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C
// 0x0000
class UZ_InventoryFuncLybryary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_InventoryFuncLybryary.Z_InventoryFuncLybryary_C");
		return ptr;
	}



	void ZFL_GetLootCost();
	void ZFL_BackpackGetMass();
	void ZFL_GetLootMass();
	void ZFL_Transport_To_Loot();
	void ZFL_Loot_To_Transport();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
