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

// BlueprintGeneratedClass LootPlatform.LootPlatform_C
// 0x0000
class ALootPlatform_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LootPlatform.LootPlatform_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void SpawnLoot();
	void ReceiveTick();
	void SetSlotsCount();
	void ExecuteUbergraph_LootPlatform();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
