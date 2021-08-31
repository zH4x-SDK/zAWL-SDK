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

// BlueprintGeneratedClass Cv3_LootLibrary.Cv3_LootLibrary_C
// 0x0000
class UCv3_LootLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_LootLibrary.Cv3_LootLibrary_C");
		return ptr;
	}



	void CheckCountLoot();
	void GenerateLoot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
