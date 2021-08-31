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

// BlueprintGeneratedClass Cv2_Base_Tank.Cv2_Base_Tank_C
// 0x0000
class ACv2_Base_Tank_C : public ATankVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_Base_Tank.Cv2_Base_Tank_C");
		return ptr;
	}



	void SetAmmoShells();
	void SetDynamicTracks();
	void OnRep_isDamaged_Engine();
	void OnRep_isDamaged();
	void SetCameraFollowShell();
	void OnRep_isDamaged_Left_Track();
	void OnRep_isDamaged_Right_Track();
	void OnRep_RealSide();
	void FireClient();
	void OnRep_HitPoints();
	void OnRep_Light();
	void OnRep_EngineActive();
	void OnRep_isDead();
	void OnRep_Crews();
	void InpActEvt_Use_K2Node_InputActionEvent_9();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_8();
	void InpActEvt_Open_Vehicle_K2Node_InputActionEvent_7();
	void InpActEvt_Fire_K2Node_InputActionEvent_6();
	void InpActEvt_Fire_K2Node_InputActionEvent_5();
	void InpActEvt_Aim_K2Node_InputActionEvent_4();
	void InpActEvt_Switch_Weapon_K2Node_InputActionEvent_3();
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_9();
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_8();
	void InpActEvt_Walk_K2Node_InputActionEvent_2();
	void InpActEvt_Walk_K2Node_InputActionEvent_1();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_7();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_6();
	void InpActEvt_One_K2Node_InputKeyEvent_5();
	void InpActEvt_Two_K2Node_InputKeyEvent_4();
	void InpActEvt_Three_K2Node_InputKeyEvent_3();
	void InpActEvt_Four_K2Node_InputKeyEvent_2();
	void InpActEvt_Five_K2Node_InputKeyEvent_1();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16();
	void ReceiveTick();
	void ServerSetTurret();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_124();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_116();
	void ReceiveBeginPlay();
	void ServerFire();
	void MulticastFire();
	void ExitVehicleServer();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7();
	void ReceiveAnyDamage();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void Repair();
	void SetLight();
	void OpenCarServer();
	void FireServer();
	void SwitchWeaponServer();
	void InpAxisEvt_MoveBack_K2Node_InputAxisEvent_3();
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2();
	void ServerSetLocationAndRotation();
	void CheckReplicateMovement();
	void FuelTimer();
	void ReceivePossessed();
	void ClientSetPhysics();
	void SetSimulatePhysicsMultiCast();
	void BndEvt__Z_InventoryComponent_K2Node_ComponentBoundEvent_0_OnLootAdded_ServerOnly___DelegateSignature();
	void ExecuteUbergraph_Cv2_Base_Tank();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
