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

// BlueprintGeneratedClass Cv2_Character.Cv2_Character_C
// 0x0000
class ACv2_Character_C : public AFixCharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_Character.Cv2_Character_C");
		return ptr;
	}



	void GetActiveWeapon();
	void IsEnemy();
	void GetIsDead();
	void ZL_CONTROLLER_GetSlots();
	void CheckDamageType();
	void CheckTutorialCancel();
	void HUD_CheckPosition();
	void GetIsProne();
	void GetNetPitch();
	void GetIsAim();
	void GetIsSprint();
	void GetTargetActor();
	void GetSeeTarget();
	void GetHP();
	void GetLastDamager();
	void OnRep_BunkerID();
	void isPlayReloading();
	void OnRep_playerSilencer();
	void Duplicate_onRepSetMyRealWepon();
	void LoadFov();
	void OnRep_FACE_ID();
	void OnRep_PARTS_FACE();
	void OnRep_playerOptic();
	void CalculateReloadAmmo_Client();
	void OnRep_Socket_Secondary();
	void OnRep_Socket_Melee();
	void OnRep_Socket_BackPack();
	void OnRep_Socket_Primary();
	void CalculateReloadAmmo();
	void FireWeaponClient();
	void OnRep_SprintPress();
	void OnRep_IsProne();
	void SetProne();
	void PoseDead();
	void OnRep_Light();
	void OnRep_MyRealGrenades();
	void OnRep_PlayerName();
	void OnRep_CharacterClass();
	void isPlayMontage();
	void HideWeapon();
	void ShowWeapon();
	void OnRep_MyRealHelmet();
	void CheckPlayerInventory();
	void OnRep_MyRealWeapon();
	void CharacterOn();
	void CharacterOff();
	void OnRep_HitPoints();
	void HUD_SetHitPoint();
	void OnRep_isDead();
	void HUD_SetAmmo();
	void SetHandsPosition();
	void SetWeaponModel();
	void InpActEvt_Jump_K2Node_InputActionEvent_18();
	void InpActEvt_Crouch_K2Node_InputActionEvent_17();
	void InpActEvt_Walk_K2Node_InputActionEvent_16();
	void InpActEvt_Walk_K2Node_InputActionEvent_15();
	void InpActEvt_One_K2Node_InputKeyEvent_26();
	void InpActEvt_Two_K2Node_InputKeyEvent_25();
	void InpActEvt_Three_K2Node_InputKeyEvent_24();
	void InpActEvt_T_K2Node_InputKeyEvent_23();
	void InpActEvt_Delete_K2Node_InputKeyEvent_22();
	void InpActEvt_Reloading_K2Node_InputActionEvent_14();
	void InpActEvt_Use_K2Node_InputActionEvent_13();
	void InpActEvt_Switch_Weapon_K2Node_InputActionEvent_12();
	void InpActEvt_Throw_Grenade_K2Node_InputActionEvent_11();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_10();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_9();
	void InpActEvt_Binocular_K2Node_InputActionEvent_8();
	void InpActEvt_Fire_K2Node_InputActionEvent_7();
	void InpActEvt_Fire_K2Node_InputActionEvent_6();
	void InpActEvt_Aim_K2Node_InputActionEvent_5();
	void InpActEvt_End_K2Node_InputKeyEvent_21();
	void InpActEvt_Prone_K2Node_InputActionEvent_4();
	void InpActEvt_CrouchFast_K2Node_InputActionEvent_3();
	void InpActEvt_CrouchFast_K2Node_InputActionEvent_2();
	void InpActEvt_Add_K2Node_InputKeyEvent_20();
	void InpActEvt_Subtract_K2Node_InputKeyEvent_19();
	void InpActEvt_Subtract_K2Node_InputKeyEvent_18();
	void InpActEvt_Subtract_K2Node_InputKeyEvent_17();
	void InpActEvt_Add_K2Node_InputKeyEvent_16();
	void InpActEvt_Add_K2Node_InputKeyEvent_15();
	void InpActEvt_D_K2Node_InputKeyEvent_14();
	void InpActEvt_D_K2Node_InputKeyEvent_13();
	void InpActEvt_A_K2Node_InputKeyEvent_12();
	void InpActEvt_A_K2Node_InputKeyEvent_11();
	void InpActEvt_S_K2Node_InputKeyEvent_10();
	void InpActEvt_S_K2Node_InputKeyEvent_9();
	void InpActEvt_W_K2Node_InputKeyEvent_8();
	void InpActEvt_W_K2Node_InputKeyEvent_7();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_6();
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_5();
	void InpActEvt_Zero_K2Node_InputKeyEvent_4();
	void InpActEvt_Zero_K2Node_InputKeyEvent_3();
	void InpActEvt_Nine_K2Node_InputKeyEvent_2();
	void InpActEvt_Nine_K2Node_InputKeyEvent_1();
	void InpActEvt_Fire_Mode_K2Node_InputActionEvent_1();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48();
	void ServerFire();
	void MulticastFire();
	void ReceiveAnyDamage();
	void SetMaxWalkSpeed();
	void ReloadMultiCast();
	void ReloadServer();
	void ServerAction();
	void ReceiveEndPlay();
	void SwitchWeaponServer();
	void ServerCheckInventory();
	void CheckInventory();
	void reload();
	void FirePressed();
	void FireReleased();
	void ServerThrowGrenade();
	void MultiCastThrowGrenade();
	void ShowChatMessageToAll();
	void AirPlanesServer();
	void SetServerFlashLight();
	void CreateDynamicCamera();
	void OnLanded();
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2();
	void InpAxisEvt_MoveBack_K2Node_InputAxisEvent_3();
	void SetAimingNet();
	void SetStartWalkSpeed();
	void CreateBloodEffect();
	void CheckProne();
	void SprintRequest();
	void ServerSprintSide();
	void ReceiveTick();
	void ZL_CHARACTER_AttachToWeapon_Server_();
	void ZL_CHARACTER_DropThis_Server_();
	void ZL_CHARACTER_EquipThis_Server_();
	void ZL_CHARACTER_Unequip_Serever_();
	void ZL_CHARACTER_USEThis_Server_();
	void ServerCloseFurniture();
	void ThrowGrenade_Client();
	void SetIsTalking();
	void MulticastTalk();
	void ServerSetPlayerOpticMesh();
	void BurstFire();
	void ServerBurstFire();
	void ServerStopBurstFire();
	void ReceiveBeginPlay();
	void ZL_GUI_Overload();
	void ZL_CHARACTER_UNAttach_Server_();
	void ZL_GUI_DrawLootNear();
	void ZL_GUI_SLOT_Unhovered();
	void ZL_GUI_SLOT_Hovered();
	void ZL_GUI_DND_Drop();
	void ZL_GUI_DnD_Drag();
	void ZL_GUI_ClearContainer();
	void ZL_GUI_Construkt_Container();
	void ZL_GUI_HideInventory();
	void ZL_GUI_ShowInventory();
	void ZL_GUI_Update();
	void ZL_GUI_ConstructMenu();
	void ResetCrouchProne();
	void ReceivePossessed();
	void PossesClient();
	void ReceiveUnpossessed();
	void SwitchWeaponManual();
	void ClientSyncAmmo();
	void ServerSyncAmmo();
	void ServerSetPlayerSilencerMesh();
	void NoAmmo();
	void NoAmmoToAll();
	void ExecuteUbergraph_Cv2_Character();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
