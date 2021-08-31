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

// BlueprintGeneratedClass Z_Character.Z_Character_C
// 0x0000
class AZ_Character_C : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_Character.Z_Character_C");
		return ptr;
	}



	void GetAlwaysLookOnTarget();
	void Z_IsDead();
	void Z_GetHP();
	void GetCharacterMovemetComponent();
	void GetIsProne();
	void GetIsSprint();
	void GetNetPitch();
	void GetIsAim();
	void GetBasePointCoords();
	void GetEnemies();
	void GetIsCrouch();
	void FireTimer();
	void BotSpeakTimer();
	void Dead();
	void Fire();
	void UserConstructionScript();
	void SetAim();
	void ReceiveBeginPlay();
	void SetIsAim();
	void SetIsCrouch();
	void Z_Fire();
	void SetTargetActor();
	void SetHP();
	void ApplyHitDamage();
	void ReceiveAnyDamage();
	void SpawnBloodEffect();
	void SetBasePointCoords();
	void ReceiveTick();
	void Set_Crouch();
	void BotSpeak();
	void SetAlwaysLookOnTarget();
	void Temp();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Z_Character();
	void OnDeath__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
