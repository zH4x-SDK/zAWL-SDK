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

// BlueprintGeneratedClass DeleteSpawn.DeleteSpawn_C
// 0x0000
class ADeleteSpawn_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DeleteSpawn.DeleteSpawn_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Spawn();
	void ExecuteUbergraph_DeleteSpawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
