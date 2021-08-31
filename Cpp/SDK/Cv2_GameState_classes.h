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

// BlueprintGeneratedClass Cv2_GameState.Cv2_GameState_C
// 0x0000
class ACv2_GameState_C : public AGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_GameState.Cv2_GameState_C");
		return ptr;
	}



	void IsComputerOnline();
	void CheckPlayerOnSlot();
	void GetComputersPlayers();
	void CheckInsurgenters();
	void CheckDoorsClosed();
	void OnRep_EnemyCount();
	void OnRep_isNight_();
	void GetTopArrays();
	void OnRep_GameTime();
	void OnFailure_76B8372D4F9E44755CC645B450E4AAD7();
	void OnSuccess_76B8372D4F9E44755CC645B450E4AAD7();
	void ReceiveBeginPlay();
	void CheckTime();
	void AirDropRandom();
	void ClientDestroySession();
	void GetSortedTopArray();
	void PlayNightMusicTimer();
	void PlayNightScreamsTimer();
	void StartComputerLogic();
	void ExecuteUbergraph_Cv2_GameState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
