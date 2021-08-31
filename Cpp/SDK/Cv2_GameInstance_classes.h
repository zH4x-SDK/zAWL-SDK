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

// BlueprintGeneratedClass Cv2_GameInstance.Cv2_GameInstance_C
// 0x0000
class UCv2_GameInstance_C : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_GameInstance.Cv2_GameInstance_C");
		return ptr;
	}



	void SetDifficulty();
	void GetSaveSlotName();
	void SetLocalization();
	void GetSpawnCoords();
	void CreateStorageActor();
	void CreateBatFiles();
	void ShowZagluha();
	void ApplyVideoSettings();
	void ApplyMouseSettings();
	void CheckResolution();
	void ApplySettings();
	void SaveSettings();
	void LoadSettings();
	void OnFailure_71D85BA246BA90EDBA5995AD2163273F();
	void OnSuccess_71D85BA246BA90EDBA5995AD2163273F();
	void ChangeVolume();
	void ReceiveInit();
	void UpdateSession();
	void ChangeMap();
	void ExecuteUbergraph_Cv2_GameInstance();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
