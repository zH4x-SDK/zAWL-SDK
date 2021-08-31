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

// BlueprintGeneratedClass Cv2_ProjectileBase.Cv2_ProjectileBase_C
// 0x0000
class ACv2_ProjectileBase_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_ProjectileBase.Cv2_ProjectileBase_C");
		return ptr;
	}



	void Initialize();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature();
	void DestroyGrenade();
	void ReceiveTick();
	void ExecuteUbergraph_Cv2_ProjectileBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
