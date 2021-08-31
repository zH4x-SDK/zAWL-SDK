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

// BlueprintGeneratedClass AWL_BOT.AWL_BOT_C
// 0x0000
class AAWL_BOT_C : public AFixCharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_BOT.AWL_BOT_C");
		return ptr;
	}



	void GetActiveWeapon();
	void IsEnemy();
	void GetIsDead();
	void GetLastDamager();
	void GetHP();
	void GetSeeTarget();
	void GetTargetActor();
	void GetIsProne();
	void GetNetPitch();
	void GetIsAim();
	void GetIsSprint();
	void CheckDistaceToPlayer();
	void OnRep_isSprint();
	void Dead();
	void Fire();
	void SetNetPitch();
	void OnRep_WeaponEnum();
	void OnLoaded_A205915748DAFDB1497EFB80E0E83EB7();
	void OnLoaded_9DE75BCF46AFF57996008FBBDD115587();
	void CreateBloodEffect();
	void BotSay();
	void Pawn_Aim();
	void Pawn_Crouch();
	void Pawn_Prone();
	void Pawn_Sprint();
	void Pawn_Fire();
	void ReceiveAnyDamage();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void SetTargetActor();
	void SetSeeTarget();
	void EventCall();
	void SetPatrolActors();
	void strafe();
	void PawnStrafe();
	void SetMainSpawnRef();
	void ReceiveEndPlay();
	void ExecuteUbergraph_AWL_BOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
