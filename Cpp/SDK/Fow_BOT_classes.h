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

// BlueprintGeneratedClass Fow_BOT.Fow_BOT_C
// 0x0000
class AFow_BOT_C : public AFixCharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fow_BOT.Fow_BOT_C");
		return ptr;
	}



	void GetActiveWeapon();
	void IsEnemy();
	void GetIsDead();
	void OnRep_Health();
	void OnRep_AttackTarget();
	void OnRep_CommanderPawn();
	void EquipWeapon();
	void CheckAttack();
	void OffWarMode();
	void OnRep_WeaponEnum();
	void OnRep_WeaponBack();
	void CheckMonagePlays();
	void OnRep_BotResource();
	void Fire();
	void OnRep_IsProne();
	void OnRep_isSprint();
	void OnRep_isDeath();
	void PoseDead();
	void OnRep_Team();
	void OnRep_Behavior();
	void CheckPatrol();
	void OnLoaded_F3993EC540DF4C1554D6EFB729A15C1C();
	void OnLoaded_DB3828E541E8DF0A7787EE9628D714E0();
	void ReceiveAnyDamage();
	void CreateBloodEffect();
	void ServerDestroyActor();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void StopFire();
	void StartFire();
	void ServerBotFire();
	void MultiCastThrowGrenade();
	void SendKillSheepMessageToAll_Server_();
	void BndEvt__QUEST_Component_K2Node_ComponentBoundEvent_0_QUEST_ACTIVATE__DelegateSignature();
	void ExecuteUbergraph_Fow_BOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
