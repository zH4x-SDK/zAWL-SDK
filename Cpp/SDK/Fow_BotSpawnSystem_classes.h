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

// BlueprintGeneratedClass Fow_BotSpawnSystem.Fow_BotSpawnSystem_C
// 0x0000
class AFow_BotSpawnSystem_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fow_BotSpawnSystem.Fow_BotSpawnSystem_C");
		return ptr;
	}



	void CheckBotSpawn();
	void ReceiveBeginPlay();
	void SpawnBotActor();
	void ExecuteUbergraph_Fow_BotSpawnSystem();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
