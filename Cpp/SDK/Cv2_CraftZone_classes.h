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

// BlueprintGeneratedClass Cv2_CraftZone.Cv2_CraftZone_C
// 0x0000
class ACv2_CraftZone_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_CraftZone.Cv2_CraftZone_C");
		return ptr;
	}



	void OnRep_isDestroy();
	void HideZone();
	void ShowZone();
	void BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void UpdateLootArray();
	void PlayActionAnimation();
	void ExecuteUbergraph_Cv2_CraftZone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
