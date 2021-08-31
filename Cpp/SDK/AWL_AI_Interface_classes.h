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

// BlueprintGeneratedClass AWL_AI_Interface.AWL_AI_Interface_C
// 0x0000
class UAWL_AI_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_AI_Interface.AWL_AI_Interface_C");
		return ptr;
	}



	void SetMainSpawnRef();
	void PawnStrafe();
	void SetPatrolActors();
	void GetLastDamager();
	void GetHP();
	void GetSeeTarget();
	void SetSeeTarget();
	void SetTargetActor();
	void Pawn_Fire();
	void Pawn_Prone();
	void Pawn_Aim();
	void Pawn_Sprint();
	void Pawn_Crouch();
	void GetTargetActor();
	void EventCall();
	void GetIsSprint();
	void GetIsAim();
	void GetNetPitch();
	void GetIsProne();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
