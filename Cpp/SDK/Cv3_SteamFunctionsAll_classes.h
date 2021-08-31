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

// BlueprintGeneratedClass Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C
// 0x0000
class UCv3_SteamFunctionsAll_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C");
		return ptr;
	}



	void GetFriendAvatar();
	void Convert_UniqID_ToString();
	void ShowWebURL();
	void IsAdmin();
	void IsFriend();
	void GetUniqID_Classic();
	void IsDLC();
	void isBanned();
	void SetStata_Client();
	void GetStata_Client();
	void SetStata_Server();
	void GetStata_Server();
	void GetUniqID_String();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
