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

// BlueprintGeneratedClass Cv2_CharacterComponent.Cv2_CharacterComponent_C
// 0x0000
class UCv2_CharacterComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_CharacterComponent.Cv2_CharacterComponent_C");
		return ptr;
	}



	void CheckPlayerMeshVisible();
	void CheckAntiCheat();
	void CheckStamina();
	void AddResourceShkafLoot();
	void CheckStand();
	void SetKillerCamera();
	void ClientTakeLoot();
	void SetAiming();
	void HideOptic();
	void ShowOptic();
	void SetPlayerNick();
	void CheckToPlayersDistance();
	void ShowChatClient();
	void DeadCameraMove();
	void GetGrenadesCount();
	void ClearAllLoot();
	void DropAllLoot();
	void SetInHandsWeaponAmmo();
	void GetInHandsWeaponAmmo();
	void ThrowGrenade();
	void InitializeOnlyServer();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cv2_CharacterComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
