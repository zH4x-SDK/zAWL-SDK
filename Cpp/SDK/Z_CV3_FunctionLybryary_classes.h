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

// BlueprintGeneratedClass Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C
// 0x0000
class UZ_CV3_FunctionLybryary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C");
		return ptr;
	}



	void F_StringToLoot_NoCount_();
	void F_StringToInventory();
	void Z_CV3_SereverSetLootActorBP_GET_ON_GROUND_ServerOnly_();
	void Z_CV3_CharacterSwichWeapon();
	void Z_CV3_Name_To_ZLoot();
	void Z_CV3_ClearSplit();
	void Z_CV3_SetDebugMode();
	void Z_CV3_PrintDebugMessage_ClientOnly_();
	void Z_CV3_GetDebugMode();
	void Z_CV3_CheckCanSplit();
	void Z_CV3_UseAlcohol();
	void Z_CV3_UseFood();
	void Z_CV3_UseDrink();
	void Z_CV3_UseUsable();
	void Z_CV3_UseExplosive();
	void Z_CV3_UseMedicine();
	void Z_CV3_GetEffectivity();
	void Z_CV3_SereverSetLootActorBP_ServerOnly_();
	void Z_CV3_CheckResourceForCraft();
	void Z_CV3_Cv3LootType_ToZ_Equip_Socket();
	void F_InventoryToString();
	void Z_CV3_GetLootByType();
	void Z_CV3_ZLoot_to_Loot();
	void Z_CV3Loot_To_Z_Loot_ONLYCARGO();
	void Z_CV3_WeaponToZLoot();
	void Z_CV3_CharacterToInventory();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
