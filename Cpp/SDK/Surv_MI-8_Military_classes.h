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

// BlueprintGeneratedClass Surv_MI-8_Military.Surv_MI-8_Military_C
// 0x0000
class ASurv_MI_8_Military_C : public ACv2_BaseCar_4W_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv_MI-8_Military.Surv_MI-8_Military_C");
		return ptr;
	}



	void CheckGroundDistance();
	void HelicopterLogic();
	void UserConstructionScript();
	void InpActEvt_Fire_K2Node_InputActionEvent_1();
	void ClientApplyDamageToServer();
	void ReceiveBeginPlay();
	void ServerFireHelicopter();
	void ServerFireHelicopterAll();
	void ExecuteUbergraph_Surv_MI_8_Military();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
