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

// BlueprintGeneratedClass Cv2_Character_Survival.Cv2_Character_Survival_C
// 0x0000
class ACv2_Character_Survival_C : public ACv2_Character_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_Character_Survival.Cv2_Character_Survival_C");
		return ptr;
	}



	void GetAlwaysLookOnTarget();
	void GetCharacterMovemetComponent();
	void GetIsProne();
	void GetIsSprint();
	void GetNetPitch();
	void GetIsAim();
	void GetBasePointCoords();
	void GetEnemies();
	void GetIsCrouch();
	void Z_GetHP();
	void Z_IsDead();
	void SpawnBonusLoot();
	void SortCoords();
	void OnRep_PARTS_TORSE();
	void OnRep_PARTS_LEGS();
	void OnRep_PARTS_FOOT();
	void UserConstructionScript();
	void SetIsCrouch();
	void SetIsAim();
	void Z_Fire();
	void SetTargetActor();
	void SetHP();
	void SetBasePointCoords();
	void BotSpeak();
	void SetAlwaysLookOnTarget();
	void ReceiveBeginPlay();
	void test();
	void ExecuteUbergraph_Cv2_Character_Survival();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
