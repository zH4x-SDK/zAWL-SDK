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

// BlueprintGeneratedClass Surv_Car_T40.Surv_Car_T40_C
// 0x0000
class ASurv_Car_T40_C : public ACv2_BaseCar_4W_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv_Car_T40.Surv_Car_T40_C");
		return ptr;
	}



	void UserConstructionScript();
	void InpActEvt_V_K2Node_InputKeyEvent_1();
	void ExecuteUbergraph_Surv_Car_T40();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
