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

// BlueprintGeneratedClass _SpawnFurnitur_04._SpawnFurnitur_04_C
// 0x0000
class A_SpawnFurnitur_04_C : public ACv3_SpawnLootFurniture_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass _SpawnFurnitur_04._SpawnFurnitur_04_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
