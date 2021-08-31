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

// BlueprintGeneratedClass Cv2_TurrelBase.Cv2_TurrelBase_C
// 0x0000
class ACv2_TurrelBase_C : public APawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_TurrelBase.Cv2_TurrelBase_C");
		return ptr;
	}



	void SetCameraFollowShell();
	void FireGunClient();
	void SpawnBullet();
	void OnRep_isDead();
	void OnRep_Crews();
	void InpActEvt_Use_K2Node_InputActionEvent_5();
	void InpActEvt_Open_Vehicle_K2Node_InputActionEvent_4();
	void InpActEvt_Aim_K2Node_InputActionEvent_3();
	void InpActEvt_Fire_K2Node_InputActionEvent_2();
	void InpActEvt_Fire_K2Node_InputActionEvent_1();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_2();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_1();
	void ReceiveBeginPlay();
	void FireServer();
	void ExitVehicleServer();
	void ServerSetTurret();
	void ReceiveTick();
	void ReceiveAnyDamage();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_116();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_124();
	void UpdateLootArray();
	void MulticastFire();
	void ServerFire();
	void OpenCarServer();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2();
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_6();
	void ClientFire();
	void CheckReplication();
	void ServerSetRotateWheels();
	void ExecuteUbergraph_Cv2_TurrelBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
