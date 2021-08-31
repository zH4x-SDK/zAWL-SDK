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

// BlueprintGeneratedClass Z_CharacterInterface.Z_CharacterInterface_C
// 0x0000
class UZ_CharacterInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_CharacterInterface.Z_CharacterInterface_C");
		return ptr;
	}



	void SetAlwaysLookOnTarget();
	void GetAlwaysLookOnTarget();
	void BotSpeak();
	void Z_IsDead();
	void SetBasePointCoords();
	void Z_GetHP();
	void SetHP();
	void SetTargetActor();
	void Z_Fire();
	void SetIsAim();
	void SetIsCrouch();
	void GetIsCrouch();
	void GetEnemies();
	void GetBasePointCoords();
	void GetIsAim();
	void GetNetPitch();
	void GetIsSprint();
	void GetIsProne();
	void GetCharacterMovemetComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
