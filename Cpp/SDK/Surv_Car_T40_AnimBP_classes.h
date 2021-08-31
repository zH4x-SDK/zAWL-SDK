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

// AnimBlueprintGeneratedClass Surv_Car_T40_AnimBP.Surv_Car_T40_AnimBP_C
// 0x0000
class USurv_Car_T40_AnimBP_C : public UVehicleAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Surv_Car_T40_AnimBP.Surv_Car_T40_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_Surv_Car_T40_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
