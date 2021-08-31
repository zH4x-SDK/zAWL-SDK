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

// BlueprintGeneratedClass Cv2_HouseBase.Cv2_HouseBase_C
// 0x0000
class ACv2_HouseBase_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_HouseBase.Cv2_HouseBase_C");
		return ptr;
	}



	void CheckSpawnBot();
	void CheckDestoyPercent();
	void OnRep_DestroyObjects();
	void OnLoaded_E945D1C649384BD7045B4BBB712F78DA();
	void OnLoaded_337361B14043E5B9D49A1D99BA6EFE26();
	void ReceiveBeginPlay();
	void AsyncLoadDestroyMesh();
	void ExecuteUbergraph_Cv2_HouseBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
