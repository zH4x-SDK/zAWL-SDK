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

// BlueprintGeneratedClass AWL_Solder_Spawn.AWL_Solder_Spawn_C
// 0x0000
class AAWL_Solder_Spawn_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_Solder_Spawn.AWL_Solder_Spawn_C");
		return ptr;
	}



	void ON_AWL_Solder_Die();
	void SetBlackboardValues();
	void SpawnSolderFunc();
	void GetRandomPoints();
	void SpawnSolder();
	void DeleteSolder();
	void ExecuteUbergraph_AWL_Solder_Spawn();
	void OnSolderDeath__DelegateSignature();
	void OnSloderSpawn__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
