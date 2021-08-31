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

// BlueprintGeneratedClass Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C
// 0x0000
class ACv2_ProjectileBase_ChildRocket_C : public ACv2_ProjectileBase_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void EmitterSpawnSmoke();
	void ExecuteUbergraph_Cv2_ProjectileBase_ChildRocket();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
