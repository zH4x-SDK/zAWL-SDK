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

// BlueprintGeneratedClass Cv2_ScenarioZone.Cv2_ScenarioZone_C
// 0x0000
class ACv2_ScenarioZone_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_ScenarioZone.Cv2_ScenarioZone_C");
		return ptr;
	}



	void OnRep_Is_Capture();
	void Check_IsAlliesShturm();
	void Check_IsAxisShturm();
	void OnRep_Is_Allies_Shturm_now();
	void OnRep_Is_Axes_Shturm_now();
	void Check_IsAllies_in();
	void OnRep_Is_Axes_in();
	void Check_IsAxesIn();
	void Check_IsBattleHere();
	void OnRep_Is_Allies_in();
	void CheckDestroyVillage();
	void UpdateProgresToTeam();
	void CheckPlayerTakeLootTime();
	void UserConstructionScript();
	void CheckPlayersDistance();
	void ReceiveBeginPlay();
	void ClientChekWidget();
	void ReceiveDestroyed();
	void AddXPLocal();
	void ExecuteUbergraph_Cv2_ScenarioZone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
