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

// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// 0x0000
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary");
		return ptr;
	}



	void RequestSteamFriendInfo();
	void OpenSteamUserOverlay();
	void IsDlcInstalled();
	void GetSteamPersonaName();
	void GetSteamGroups();
	void GetSteamFriendGamePlayed();
	void GetSteamFriendAvatar();
	void GetLocalSteamIDFromSteam();
	void GetFriendSteamLevel();
	void GetBuildId();
	void CreateSteamIDFromString();
	void BuyTime();
	void BPGetAppOwner();
};

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// 0x0000
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary");
		return ptr;
	}



	void GetSubscribedWorkshopItems();
	void GetNumSubscribedWorkshopItems();
};

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// 0x0000
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy");
		return ptr;
	}



	void GetSteamGroupOfficerList();
};

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// 0x0000
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy");
		return ptr;
	}



	void GetWorkshopItemDetails();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
