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

// BlueprintGeneratedClass Fence_BaseSpawn.Fence_BaseSpawn_C
// 0x0000
class AFence_BaseSpawn_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fence_BaseSpawn.Fence_BaseSpawn_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Fence_BaseSpawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
