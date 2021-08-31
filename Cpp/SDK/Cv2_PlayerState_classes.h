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

// BlueprintGeneratedClass Cv2_PlayerState.Cv2_PlayerState_C
// 0x0000
class ACv2_PlayerState_C : public APlayerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_PlayerState.Cv2_PlayerState_C");
		return ptr;
	}



	void LoadPlayerCondition();
	void SavePlayerCondition();
	void IncrementStateOnValue();
	void GetState();
	void SaveState();
	void LoadState();
	void CreateStateMap();
	void LOAD_DB();
	void SAVE_DB();
	void AWL_AddMoney();
	void AWL_SetMoney();
	void AWL_ADD_XP();
	void SAVE_RPG();
	void LOAD_RPG();
	void OnRep_AWL_XP();
	void OnRep_Thirsty();
	void OnRep_Hungry();
	void OnRep_Temperature();
	void SetKillsBot();
	void CheckFireDistance();
	void CheckFrostEffect();
	void BoostMe();
	void GetBattleXP();
	void GetCoolScores();
	void GetRankXP();
	void SetBeginVariables();
	void Gets_Honors();
	void CheckHungry();
	void OnRep_Nation();
	void CheckNeededXP();
	void AddXP();
	void OnRep_Deaths();
	void OnRep_Kills();
	void OnFailure_2F3E86754CF5F7CE7666AC82FEA194AA();
	void OnSuccess_2F3E86754CF5F7CE7666AC82FEA194AA();
	void OnFailure_AF52F9F04D606FEBBF9FE4909BE121F1();
	void OnSuccess_AF52F9F04D606FEBBF9FE4909BE121F1();
	void ReceiveBeginPlay();
	void ShowKillMultiplier();
	void SetSide_Server();
	void Gets_Achievements();
	void MultiCastPlayVoice();
	void AddBoost();
	void StopBoost();
	void TimeState();
	void ExecuteUbergraph_Cv2_PlayerState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
