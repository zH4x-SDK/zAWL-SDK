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

// BlueprintGeneratedClass AWL_AIController.AWL_AIController_C
// 0x0000
class AAWL_AIController_C : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_AIController.AWL_AIController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature();
	void ExecuteUbergraph_AWL_AIController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
