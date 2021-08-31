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

// BlueprintGeneratedClass AWL_MAIN_SPAWN.AWL_MAIN_SPAWN_C
// 0x0000
class AAWL_MAIN_SPAWN_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_MAIN_SPAWN.AWL_MAIN_SPAWN_C");
		return ptr;
	}



	void SetSoldersCount();
	void CheckTotalSolderCount();
	void SetPlayerIn();
	void Get_Solders_Count();
	void GetBotsCount();
	void IsMyPoint();
	void Get_LootCount();
	void AllHasKilled();
	void CheckSolders();
	void GetSpwans();
	void GetCheckPoints();
	void UserConstructionScript();
	void ActivatePlayerIn();
	void Deactivate();
	void ReceiveBeginPlay();
	void ActivateAttack();
	void SetState();
	void OwningCheckpoint();
	void All_Deaths();
	void Stop();
	void ReceiveTick();
	void OnPlayerIn();
	void OnPlayerOut();
	void OnSolderDie();
	void OnSolderSpawn();
	void ExecuteUbergraph_AWL_MAIN_SPAWN();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
