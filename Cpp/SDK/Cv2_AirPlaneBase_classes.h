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

// BlueprintGeneratedClass Cv2_AirPlaneBase.Cv2_AirPlaneBase_C
// 0x0000
class ACv2_AirPlaneBase_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_AirPlaneBase.Cv2_AirPlaneBase_C");
		return ptr;
	}



	void OnRep_isDeath();
	void OnRep_HitPoints();
	void OnRep_IsDamage();
	void DropBombsFunc();
	void DropBombMultiCast();
	void DropLoot();
	void DropLootMultiCast();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage();
	void ReceiveTick();
	void BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature();
	void ExecuteUbergraph_Cv2_AirPlaneBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
