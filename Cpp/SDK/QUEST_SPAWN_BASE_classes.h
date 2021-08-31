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

// BlueprintGeneratedClass QUEST_SPAWN_BASE.QUEST_SPAWN_BASE_C
// 0x0000
class AQUEST_SPAWN_BASE_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass QUEST_SPAWN_BASE.QUEST_SPAWN_BASE_C");
		return ptr;
	}



	void ROOT_SpawnActor();
	void ROOT_ACTIVATE();
	void AssignActorEvents();
	void OnDestroyed_Event_1();
	void ExecuteUbergraph_QUEST_SPAWN_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
