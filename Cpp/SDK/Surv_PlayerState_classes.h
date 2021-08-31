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

// BlueprintGeneratedClass Surv_PlayerState.Surv_PlayerState_C
// 0x0000
class ASurv_PlayerState_C : public APlayerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv_PlayerState.Surv_PlayerState_C");
		return ptr;
	}



	void OnRep_PlayerMoney();
	void LIDER_CheckLobbyReady();
	void GetMyLider();
	void LIDER_TryRemovePlayerFromLobby();
	void DisconectFromLobby();
	void LIDER_TryAddPlayerToLobby();
	void SetMeLeader();
	void OnFailure_A48022AC4C6123D1F4E96EA3E5040D90();
	void OnSuccess_A48022AC4C6123D1F4E96EA3E5040D90();
	void OnFailure_AA4941F94822BA4E0FAB2E850ECAB16C();
	void OnSuccess_AA4941F94822BA4E0FAB2E850ECAB16C();
	void ReceiveBeginPlay();
	void ServerToClientShowInviteYesNoWidget();
	void ServerSendLobbyInvite();
	void ServerInviteToLobby();
	void ServerToClientUpdateLobby();
	void ClientInviteToLobby();
	void ServerLeaderUpdateAllLobby();
	void ServerLeaveLobby();
	void ClientLeaveLobby();
	void ClientSendInviteToLobby();
	void ClientReady();
	void ServerSetReady();
	void SetOwnerID();
	void SERVER_CnacelInviteFromClient();
	void CLIENT_CancelInviteForLeader();
	void CLIENT_LIDER_GetSessionForLobby();
	void SearchAgain();
	void CLIENT_StartConnetction();
	void CLIENT_StopConnection();
	void CLIENT_SetSession();
	void SERVER_LiderFoundSession();
	void SERVER_Lider_NO_FoundSession();
	void TryGetAgain();
	void CheckLobbyID();
	void ExecuteUbergraph_Surv_PlayerState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
