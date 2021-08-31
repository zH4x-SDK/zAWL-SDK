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

// BlueprintGeneratedClass Cv2_MineBase.Cv2_MineBase_C
// 0x0000
class ACv2_MineBase_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_MineBase.Cv2_MineBase_C");
		return ptr;
	}



	void OnRep_isBoom();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BoomMineServer();
	void ExecuteUbergraph_Cv2_MineBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
