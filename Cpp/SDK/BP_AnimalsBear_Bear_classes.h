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

// BlueprintGeneratedClass BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C
// 0x0000
class ABP_AnimalsBear_Bear_C : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalsBear_Bear.BP_AnimalsBear_Bear_C");
		return ptr;
	}



	void CheckPatrol();
	void OnRep_Distance();
	void OnRep_isDeath();
	void OnLoaded_F28CA0514489AF047F5BA98F6D701841();
	void OnLoaded_587BD4934FA6D3514327CEA1749AE881();
	void ReceiveBeginPlay();
	void CreateBloodEffect();
	void ReceiveTick();
	void ServerAttack();
	void ServerAUUU();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_6_SeePawnDelegate__DelegateSignature();
	void ReceiveAnyDamage();
	void ServerDestroyActor();
	void ExecuteUbergraph_BP_AnimalsBear_Bear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
