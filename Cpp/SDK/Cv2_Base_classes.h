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

// Class Cv2_Base.FixCharacter
// 0x0000
class AFixCharacter : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cv2_Base.FixCharacter");
		return ptr;
	}



};

// Class Cv2_Base.FixPlayerController
// 0x0000
class AFixPlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cv2_Base.FixPlayerController");
		return ptr;
	}



	void K2_StopTalking();
	void K2_StartTalking();
	void K2_ServerUnmutePlayer();
	void K2_ServerMutePlayer();
	void K2_IsPlayerMuted();
	void K2_GameplayUnmutePlayer();
	void K2_GameplayMutePlayer();
	void K2_ClientUnmutePlayer();
	void K2_ClientMutePlayer();
};

// Class Cv2_Base.FurnitureAnimInstance
// 0x0000
class UFurnitureAnimInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cv2_Base.FurnitureAnimInstance");
		return ptr;
	}



};

// Class Cv2_Base.MyBlueprintFixes
// 0x0000
class UMyBlueprintFixes : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cv2_Base.MyBlueprintFixes");
		return ptr;
	}



	void WritteToFile();
	void UpdateWheelEffectsHelper();
	void SetPhysicsConstraintActor2();
	void SetPhysicsConstraintActor1();
	void SetCurrentCulture();
	void SetCharacterMovementHalfHeight();
	void SetBodyLock();
	void MyTryServerRestart();
	void IsWithEditor();
	void GetUnixTimeStamp();
	void GetMD5Sum();
	void GetGameSessionMaxPlayers();
	void GetCurrentCulture();
	void GetBodyLock();
	void GetArrayFromFile();
	void AddToFile();
};

// Class Cv2_Base.VehicleDustType
// 0x0000
class UVehicleDustType : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cv2_Base.VehicleDustType");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
