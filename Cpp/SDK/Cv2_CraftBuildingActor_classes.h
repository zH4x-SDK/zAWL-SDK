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

// BlueprintGeneratedClass Cv2_CraftBuildingActor.Cv2_CraftBuildingActor_C
// 0x0000
class ACv2_CraftBuildingActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_CraftBuildingActor.Cv2_CraftBuildingActor_C");
		return ptr;
	}



	void SetStaticMeshColor();
	void CheckEnableBuilding();
	void ReceiveBeginPlay();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void ExecuteUbergraph_Cv2_CraftBuildingActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
