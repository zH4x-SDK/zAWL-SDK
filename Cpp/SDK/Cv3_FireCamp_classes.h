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

// BlueprintGeneratedClass Cv3_FireCamp.Cv3_FireCamp_C
// 0x0000
class ACv3_FireCamp_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_FireCamp.Cv3_FireCamp_C");
		return ptr;
	}



	void OnRep_isDestroy();
	void CheckWoodFire();
	void FlickeringLight();
	void OnRep_isFired();
	void OnRep_LoadedFood();
	void CheckFoodComplete();
	void OnRep_LoadedPans();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage();
	void BndEvt__INTERACTIVE_Component_K2Node_ComponentBoundEvent_2_ACTIVATE_EVENT__DelegateSignature();
	void BndEvt__INTERACTIVE_Component_K2Node_ComponentBoundEvent_3_STOP_EVENT__DelegateSignature();
	void ExecuteUbergraph_Cv3_FireCamp();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
