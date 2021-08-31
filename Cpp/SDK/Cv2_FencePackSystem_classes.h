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

// BlueprintGeneratedClass Cv2_FencePackSystem.Cv2_FencePackSystem_C
// 0x0000
class ACv2_FencePackSystem_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_FencePackSystem.Cv2_FencePackSystem_C");
		return ptr;
	}



	void AttackToFence();
	void OnRep_DestroyObjects();
	void ReceiveBeginPlay();
	void INITIALIZATION();
	void AsyncLoadDestroy();
	void ExecuteUbergraph_Cv2_FencePackSystem();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
