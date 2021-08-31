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

// BlueprintGeneratedClass AssetObjMesh.AssetObjMesh_C
// 0x0000
class AAssetObjMesh_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AssetObjMesh.AssetObjMesh_C");
		return ptr;
	}



	void SpawnBloodEffect();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void ApplyHitDamage();
	void OnTakeAnyDamage_Event_1();
	void ExecuteUbergraph_AssetObjMesh();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
