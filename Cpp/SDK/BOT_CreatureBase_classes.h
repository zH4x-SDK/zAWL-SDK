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

// BlueprintGeneratedClass BOT_CreatureBase.BOT_CreatureBase_C
// 0x0000
class ABOT_CreatureBase_C : public APawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BOT_CreatureBase.BOT_CreatureBase_C");
		return ptr;
	}



	void GetActiveWeapon();
	void IsEnemy();
	void GetIsDead();
	void RandomPatrolAlarm();
	void GoToBase();
	void GoToEating();
	void OnPhysic();
	void OffPhysics();
	void OnRep_Target();
	void RandomTargetLocation();
	void OnRep_GlobalIsSleep();
	void CheckSleep();
	void RandomPatrol();
	void AttackCheckDistance();
	void RestartTargets();
	void OnRep_isDeath();
	void OnRep_HitPoints();
	void CheckSpeed();
	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature();
	void CustomMoveFunction();
	void ReceiveTick();
	void ReceiveAnyDamage();
	void BotAttackServer();
	void BotAttackMultiCast();
	void CheckGround();
	void ReceiveRadialDamage();
	void SaveMy_RPCAll();
	void ExecuteUbergraph_BOT_CreatureBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
