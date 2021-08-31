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

// WidgetBlueprintGeneratedClass Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C
// 0x0000
class UMenu_MainMenu_Lobby_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_MainMenu_Lobby.Menu_MainMenu_Lobby_C");
		return ptr;
	}



	void SaveInventoryCost();
	void AddStringToVerticcalBox();
	void GetPlayerStringByUniq();
	void GetFriendByUniq();
	void GetPlayerByUniq();
	void GetPlayerState();
	void UpdateFriends();
	void OnFailure_0F934F7F4EE87502C488BD8D3349A95E();
	void OnSuccess_0F934F7F4EE87502C488BD8D3349A95E();
	void OnFailure_6C771462491759E53D667AAA8F29280B();
	void OnSuccess_6C771462491759E53D667AAA8F29280B();
	void Construct();
	void Destruct();
	void UpdateLobbyInfo();
	void ShowConfirm();
	void BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature();
	void BndEvt__LobbyConfirm_K2Node_ComponentBoundEvent_3_No__DelegateSignature();
	void SetInLobby();
	void SearchAgain();
	void UpdateFriendsArray();
	void BndEvt__CloseLobby_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BUTTON_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CancelInviteIfLeader();
	void ExecuteUbergraph_Menu_MainMenu_Lobby();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
