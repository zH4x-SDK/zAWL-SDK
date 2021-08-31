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

// BlueprintGeneratedClass PlaceActorComponent.PlaceActorComponent_C
// 0x0000
class UPlaceActorComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlaceActorComponent.PlaceActorComponent_C");
		return ptr;
	}



	void Combination_AK_OnStart();
	void Combination_MedicalEfficiency();
	void Combination_AddAmmo();
	void Combination_DamageUP();
	void Combination_MultiplyXP();
	void Combination_CarAcceliration();
	void Combination_XP();
	void SetAllPlacesUncomplite();
	void Get_Combination();
	void ReceiveBeginPlay();
	void CheckDistance();
	void CapturePlace();
	void DoComplite_action();
	void RemoveEffect();
	void ExecuteUbergraph_PlaceActorComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
