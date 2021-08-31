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

// Class AdvancedSessions.AdvancedExternalUILibrary
// 0x0000
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedExternalUILibrary");
		return ptr;
	}



	void ShowWebURLUI();
	void ShowProfileUI();
	void ShowLeaderBoardUI();
	void ShowInviteUI();
	void ShowFriendsUI();
	void ShowAccountUpgradeUI();
	void CloseWebURLUI();
};

// Class AdvancedSessions.AdvancedFriendsGameInstance
// 0x0000
class UAdvancedFriendsGameInstance : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsGameInstance");
		return ptr;
	}



	void OnSessionInviteReceived();
	void OnSessionInviteAccepted();
	void OnPlayerTalkingStateChanged();
	void OnPlayerLoginStatusChanged();
	void OnPlayerLoginChanged();
};

// Class AdvancedSessions.AdvancedFriendsInterface
// 0x0000
class UAdvancedFriendsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsInterface");
		return ptr;
	}



	void OnSessionInviteReceived();
	void OnSessionInviteAccepted();
	void OnPlayerVoiceStateChanged();
	void OnPlayerLoginStatusChanged();
	void OnPlayerLoginChanged();
};

// Class AdvancedSessions.AdvancedFriendsLibrary
// 0x0000
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsLibrary");
		return ptr;
	}



	void SendSessionInviteToFriends();
	void SendSessionInviteToFriend();
	void IsAFriend();
	void GetStoredRecentPlayersList();
	void GetStoredFriendsList();
	void GetFriend();
};

// Class AdvancedSessions.AdvancedIdentityLibrary
// 0x0000
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedIdentityLibrary");
		return ptr;
	}



	void SetUserAccountAttribute();
	void GetUserID();
	void GetUserAccountRealName();
	void GetUserAccountDisplayName();
	void GetUserAccountAuthAttribute();
	void GetUserAccountAttribute();
	void GetUserAccountAccessToken();
	void GetUserAccount();
	void GetPlayerNickname();
	void GetPlayerAuthToken();
	void GetLoginStatus();
	void GetAllUserAccounts();
};

// Class AdvancedSessions.AdvancedSessionsLibrary
// 0x0000
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedSessionsLibrary");
		return ptr;
	}



	void UniqueNetIdToString();
	void SetPlayerName();
	void MakeLiteralSessionSearchProperty();
	void MakeLiteralSessionPropertyString();
	void MakeLiteralSessionPropertyInt();
	void MakeLiteralSessionPropertyFloat();
	void MakeLiteralSessionPropertyByte();
	void MakeLiteralSessionPropertyBool();
	void IsValidUniqueNetID();
	void IsValidSession();
	void IsPlayerInSession();
	void HasOnlineSubsystem();
	void GetUniqueNetIDFromPlayerState();
	void GetUniqueNetID();
	void GetUniqueBuildID();
	void GetSessionState();
	void GetSessionSettings();
	void GetSessionPropertyString();
	void GetSessionPropertyKey();
	void GetSessionPropertyInt();
	void GetSessionPropertyFloat();
	void GetSessionPropertyByte();
	void GetSessionPropertyBool();
	void GetSessionID_AsString();
	void GetPlayerName();
	void GetNumberOfNetworkPlayers();
	void GetNetPlayerIndex();
	void GetExtraSettings();
	void GetCurrentUniqueBuildID();
	void GetCurrentSessionID_AsString();
	void FindSessionPropertyIndexByName();
	void FindSessionPropertyByName();
	void EqualEqual_UNetIDUnetID();
	void AddOrModifyExtraSettings();
};

// Class AdvancedSessions.AdvancedVoiceLibrary
// 0x0000
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.AdvancedVoiceLibrary");
		return ptr;
	}



	void UnRegisterRemoteTalker();
	void UnRegisterLocalTalker();
	void UnRegisterAllLocalTalkers();
	void UnMuteRemoteTalker();
	void StopNetworkedVoice();
	void StartNetworkedVoice();
	void RemoveAllRemoteTalkers();
	void RegisterRemoteTalker();
	void RegisterLocalTalker();
	void RegisterAllLocalTalkers();
	void MuteRemoteTalker();
	void IsRemotePlayerTalking();
	void IsPlayerMuted();
	void IsLocalPlayerTalking();
	void IsHeadsetPresent();
	void GetNumLocalTalkers();
};

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// 0x0000
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.CancelFindSessionsCallbackProxy");
		return ptr;
	}



	void CancelFindSessions();
};

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// 0x0000
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.CreateSessionCallbackProxyAdvanced");
		return ptr;
	}



	void CreateAdvancedSession();
};

// Class AdvancedSessions.EndSessionCallbackProxy
// 0x0000
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.EndSessionCallbackProxy");
		return ptr;
	}



	void EndSession();
};

// Class AdvancedSessions.FindFriendSessionCallbackProxy
// 0x0000
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.FindFriendSessionCallbackProxy");
		return ptr;
	}



	void FindFriendSession();
};

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// 0x0000
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.FindSessionsCallbackProxyAdvanced");
		return ptr;
	}



	void FindSessionsAdvanced();
	void FilterSessionResults();
};

// Class AdvancedSessions.GetFriendsCallbackProxy
// 0x0000
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.GetFriendsCallbackProxy");
		return ptr;
	}



	void GetAndStoreFriendsList();
};

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// 0x0000
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.GetRecentPlayersCallbackProxy");
		return ptr;
	}



	void GetAndStoreRecentPlayersList();
};

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// 0x0000
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.GetUserPrivilegeCallbackProxy");
		return ptr;
	}



	void GetUserPrivilege();
};

// Class AdvancedSessions.LoginUserCallbackProxy
// 0x0000
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.LoginUserCallbackProxy");
		return ptr;
	}



	void LoginUser();
};

// Class AdvancedSessions.LogoutUserCallbackProxy
// 0x0000
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.LogoutUserCallbackProxy");
		return ptr;
	}



	void LogoutUser();
};

// Class AdvancedSessions.SendFriendInviteCallbackProxy
// 0x0000
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.SendFriendInviteCallbackProxy");
		return ptr;
	}



	void SendFriendInvite();
};

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// 0x0000
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced");
		return ptr;
	}



	void UpdateSession();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
