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

// BlueprintGeneratedClass Cv3_BulletBase.Cv3_BulletBase_C
// 0x0000
class ACv3_BulletBase_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_BulletBase.Cv3_BulletBase_C");
		return ptr;
	}



	void FoliageHitPointTimer();
	void SpawnBloodDecal();
	void ApplyDamageServer();
	void CheckParticle();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature();
	void ExecuteUbergraph_Cv3_BulletBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
