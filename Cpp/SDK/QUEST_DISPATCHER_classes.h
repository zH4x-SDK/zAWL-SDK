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

// BlueprintGeneratedClass QUEST_DISPATCHER.QUEST_DISPATCHER_C
// 0x0000
class UQUEST_DISPATCHER_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass QUEST_DISPATCHER.QUEST_DISPATCHER_C");
		return ptr;
	}



	void CorrectTranzit();
	void EVENT_INTERPRETATOR();
	void DropLoot_ServerOnly();
	void CompliteQuest();
	void QuestIsActiveNow();
	void TRY_ADD_QUEST();
	void CLIENT_QUEST_ACTIVATE();
	void QuestEvent();
	void SERVER_CompliteQuest();
	void SERVER_TRY_ADD_QUEST();
	void OnQuestComplite();
	void OnQuestActivate();
	void CLIENT_COMPLITE_QUEST();
	void ReceiveTick();
	void RegisterPlayer_Server_();
	void EVENT_OnLootAdded();
	void EVENT_OnLootRemove();
	void ReceiveBeginPlay();
	void DELAYED_QUEST();
	void ExecuteUbergraph_QUEST_DISPATCHER();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
