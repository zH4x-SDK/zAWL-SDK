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

// BlueprintGeneratedClass DataBaseRoomComponent.DataBaseRoomComponent_C
// 0x0000
class UDataBaseRoomComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DataBaseRoomComponent.DataBaseRoomComponent_C");
		return ptr;
	}



	void CheckAssetCorrectDbInfo();
	void IsPlayerOnline();
	void DoManagerWorks();
	void CheckManager();
	void SetManager();
	void IsAssetOwner();
	void ResetPlayerIn();
	void DefineIncidents();
	void SaveObjectsInfo();
	void LoadTimeOfDay();
	void SaveTimeOfDay();
	void SeveClothes();
	void SaveLootTobox();
	void GetPlayerAvatar();
	void IsMineTerminal();
	void GetDivedents();
	void GetDivedentsPerDay();
	void GetDivedentsCount();
	void AddDivedents();
	void CalculateDivedents();
	void LevelUpAsset();
	void GetRoomInfoBuTimer();
	void Get_Players_Info();
	void BuyAsset();
	void GetAssetTerminal();
	void CheckBeginParametrs();
	void ReceiveBeginPlay();
	void Get_complite();
	void POST_COMPLITE_EVENT_Event_1();
	void SAVE_ROOM_INFORMATION();
	void LOAD_ROOM_Information();
	void GetSteamAvatars();
	void ExecuteUbergraph_DataBaseRoomComponent();
	void OnSaveComplite__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
