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

// BlueprintGeneratedClass Cv2_VehicleComponent.Cv2_VehicleComponent_C
// 0x0000
class UCv2_VehicleComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_VehicleComponent.Cv2_VehicleComponent_C");
		return ptr;
	}



	void GetBattery();
	void HideCrewMesh();
	void ShowCrewMesh();
	void CheckCarDamageCrash();
	void SetWinterPaint();
	void HideComRepPassenger();
	void Damage_LeftTrack();
	void Damage_RightTrack();
	void SetPaint();
	void CheckCarBoom();
	void ActivateVeh();
	void DeactivateVeh();
	void FireArt();
	void SetLight();
	void UpdateCrewsServer();
	void AttackCarVelocity();
	void Comp_OnRep();
	void GetAmmo();
	void GetFuel();
	void TankReloadingSoundPlay();
	void UpdateWheelEffects();
	void AttackVelocity();
	void FireTank();
	void CheckCrews();
	void ExitVehicleServer();
	void DestroyVehicle();
	void CheckActionSide();
	void CheckTankDamage();
	void ReceiveBeginPlay();
	void Comp_OnRepTimer();
	void ExecuteUbergraph_Cv2_VehicleComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
