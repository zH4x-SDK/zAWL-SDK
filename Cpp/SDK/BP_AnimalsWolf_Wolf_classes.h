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

// BlueprintGeneratedClass BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C
// 0x0000
class ABP_AnimalsWolf_Wolf_C : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalsWolf_Wolf.BP_AnimalsWolf_Wolf_C");
		return ptr;
	}



	void OnRep_isDeath();
	void OnRep_Distance();
	void CheckPatrol();
	void OnLoaded_FD2EB3AF451D69FC42A0AA8FFAC1076B();
	void OnLoaded_9E93184F4FCD21A431C99E87B2836323();
	void ReceiveTick();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature();
	void CreateBloodEffect();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage();
	void ServerDestroyActor();
	void ServerAttack();
	void ServerAUUU();
	void ExecuteUbergraph_BP_AnimalsWolf_Wolf();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
