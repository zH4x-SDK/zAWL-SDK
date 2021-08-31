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

// BlueprintGeneratedClass Cv2_WeaponsComponent.Cv2_WeaponsComponent_C
// 0x0000
class UCv2_WeaponsComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_WeaponsComponent.Cv2_WeaponsComponent_C");
		return ptr;
	}



	void SetAimSceneRotation();
	void SwitchFiringMode();
	void FireClientOnly();
	void CheckAntiHacker();
	void SetAmmoProtected();
	void LoopReloading();
	void Reloading();
	void EndReloading();
	void RemoveAmmoWeapon();
	void SpawnShell();
	void MultiCastFireCharacter();
	void Init();
	void ExecuteUbergraph_Cv2_WeaponsComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
