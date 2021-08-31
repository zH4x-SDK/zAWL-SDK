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

// BlueprintGeneratedClass Cv2_DesantParachute.Cv2_DesantParachute_C
// 0x0000
class ACv2_DesantParachute_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_DesantParachute.Cv2_DesantParachute_C");
		return ptr;
	}



	void ReceiveTick();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature();
	void ExecuteUbergraph_Cv2_DesantParachute();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
