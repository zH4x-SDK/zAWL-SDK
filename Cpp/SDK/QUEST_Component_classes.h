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

// BlueprintGeneratedClass QUEST_Component.QUEST_Component_C
// 0x0000
class UQUEST_Component_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass QUEST_Component.QUEST_Component_C");
		return ptr;
	}



	void ADD_External_Quest();
	void COMPLITE_QUEST();
	void QuestIsActiveNow();
	void ADD_Quest();
	void REMOVE_Quest();
	void OWNER_ACTOR_ShowBanner();
	void OWNER_ACTOR_ShowOnCompas_ClientOnly_();
	void ReceiveBeginPlay();
	void CLIENT_ACTIVATE_QUEST_ON_ACTOR();
	void ActivateQuestEvent();
	void ExecuteUbergraph_QUEST_Component();
	void QUEST_ACTIVATE__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
