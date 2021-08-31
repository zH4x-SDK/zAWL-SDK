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

// BlueprintGeneratedClass BOT_SPAWN.BOT_SPAWN_C
// 0x0000
class ABOT_SPAWN_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BOT_SPAWN.BOT_SPAWN_C");
		return ptr;
	}



	void CheckDayKillCreatures();
	void CheckCreaturesSpawn();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BOT_SPAWN();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
