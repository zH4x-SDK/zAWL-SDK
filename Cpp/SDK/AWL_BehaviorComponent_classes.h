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

// BlueprintGeneratedClass AWL_BehaviorComponent.AWL_BehaviorComponent_C
// 0x0000
class UAWL_BehaviorComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_BehaviorComponent.AWL_BehaviorComponent_C");
		return ptr;
	}



	void PreEvent();
	void BEHAVIOR_HIDE();
	void Hide_func_delete();
	void BEHAVIOR_PATROL();
	void EventTicker();
	void DebugMessage();
	void F_MoveToClass();
	void BEHAVIOR_FOLOW();
	void F_AttackClass();
	void F_GetLastDamager();
	void F_AttackActor();
	void BEHAVIOR_STOP();
	void BEHAVIOR_THINK();
	void BEHAVIOR_PANIC();
	void BEHAVIOR_ATTACK();
	void Pawn_Aim();
	void Pawn_Sprint();
	void Pawn_Crouch();
	void RandomizeLocation();
	void OnFail_51073E75457F8146D0D045A130B9B2B8();
	void OnSuccess_51073E75457F8146D0D045A130B9B2B8();
	void OnFail_3EA6D9A14BA1DEE3CBAF3B83E5E454D7();
	void OnSuccess_3EA6D9A14BA1DEE3CBAF3B83E5E454D7();
	void BEHAVIOR_EVENT();
	void SET_BEHAVIOR();
	void Delayed_BEHAVIOR();
	void Delayed_EVENT();
	void ReceiveBeginPlay();
	void PAWN_MoveToLocation();
	void PAWN_MoveToActor();
	void Pawn_Fire();
	void PAWN_TURN_TO_TARGET();
	void test();
	void SET_PATROL_POINTS();
	void HEAR_NOISE();
	void Hide_Delete();
	void ExecuteUbergraph_AWL_BehaviorComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
