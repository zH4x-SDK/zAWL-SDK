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

// BlueprintGeneratedClass Cv2_BaseCar_4W.Cv2_BaseCar_4W_C
// 0x0000
class ACv2_BaseCar_4W_C : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_BaseCar_4W.Cv2_BaseCar_4W_C");
		return ptr;
	}



	void CheckTutorialCancel();
	void CheckIcon();
	void OnRep_isDamaged_Engine();
	void OnRep_RealSide();
	void OnRep_productType();
	void OnRep_HitPoints();
	void OnRep_Light();
	void OnRep_isDead();
	void OnRep_EngineActive();
	void OnRep_Crews();
	void UserConstructionScript();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_13();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_12();
	void InpActEvt_Use_K2Node_InputActionEvent_11();
	void InpActEvt_Use_K2Node_InputActionEvent_10();
	void InpActEvt_Fire_K2Node_InputActionEvent_9();
	void InpActEvt_Fire_K2Node_InputActionEvent_8();
	void InpActEvt_Open_Vehicle_K2Node_InputActionEvent_7();
	void InpActEvt_Aim_K2Node_InputActionEvent_6();
	void InpActEvt_Switch_Weapon_K2Node_InputActionEvent_5();
	void InpActEvt_Walk_K2Node_InputActionEvent_4();
	void InpActEvt_Walk_K2Node_InputActionEvent_3();
	void InpActEvt_Jump_K2Node_InputActionEvent_2();
	void InpActEvt_Jump_K2Node_InputActionEvent_1();
	void Repair();
	void SetLight();
	void FuelTimer();
	void OpenCarServer();
	void FireServer();
	void SwitchWeaponServer();
	void ServerSetTurret();
	void MulticastFire();
	void ServerFire();
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2();
	void InpAxisEvt_MoveBack_K2Node_InputAxisEvent_3();
	void ServerSetLocationAndRotation();
	void CheckReplicateMovement();
	void ReceiveAnyDamage();
	void ServerHornMultiCast();
	void ServerHorn();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void CheckVehiclePhysicsAndEffects();
	void ExitVehicleServer();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_116();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_124();
	void ClientSetPhysics();
	void ReceivePossessed();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16();
	void InpAxisEvt_MoveForwardAlt_K2Node_InputAxisEvent_4();
	void InpAxisEvt_MoveBackAlt_K2Node_InputAxisEvent_5();
	void InpAxisEvt_MoveRightAlt_K2Node_InputAxisEvent_35();
	void InpAxisEvt_MoveLeftAlt_K2Node_InputAxisEvent_68();
	void InpAxisEvt_HelicopterLeft_K2Node_InputAxisEvent_65();
	void InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_66();
	void UpdateLootArray();
	void ReceiveUnpossessed();
	void ExecuteUbergraph_Cv2_BaseCar_4W();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
