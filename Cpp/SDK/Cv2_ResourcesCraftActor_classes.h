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

// BlueprintGeneratedClass Cv2_ResourcesCraftActor.Cv2_ResourcesCraftActor_C
// 0x0000
class ACv2_ResourcesCraftActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_ResourcesCraftActor.Cv2_ResourcesCraftActor_C");
		return ptr;
	}



	void OnRep_isJob();
	void OnRep_isDestroy();
	void UpdateLootArray();
	void ReceiveAnyDamage();
	void CheckCraftRes();
	void ReceiveBeginPlay();
	void BndEvt__INTERACTIVE_Component_K2Node_ComponentBoundEvent_0_ACTIVATE_EVENT__DelegateSignature();
	void BndEvt__INTERACTIVE_Component_K2Node_ComponentBoundEvent_1_STOP_EVENT__DelegateSignature();
	void ExecuteUbergraph_Cv2_ResourcesCraftActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
