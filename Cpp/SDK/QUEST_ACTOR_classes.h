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

// BlueprintGeneratedClass QUEST_ACTOR.QUEST_ACTOR_C
// 0x0000
class AQUEST_ACTOR_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass QUEST_ACTOR.QUEST_ACTOR_C");
		return ptr;
	}



	void ActivateSpwans();
	void GetSpawns();
	void CompliteMe();
	void CheckAllItemsFound();
	void SetHandles();
	void IsMyQuest();
	void ActivateQuestOnActors();
	void GetQuestActors();
	void OnQuestActivate();
	void OnQuestComplite();
	void ReceiveBeginPlay();
	void QuestEvent();
	void ReceiveDestroyed();
	void ExecuteUbergraph_QUEST_ACTOR();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
