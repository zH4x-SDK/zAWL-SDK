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

// AnimBlueprintGeneratedClass MI-8_Military_AnimBP.MI-8_Military_AnimBP_C
// 0x0000
class UMI_8_Military_AnimBP_C : public UVehicleAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass MI-8_Military_AnimBP.MI-8_Military_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MI_8_Military_AnimBP_AnimGraphNode_ModifyBone_6E7C98324963B8075A6C45823F7565A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MI_8_Military_AnimBP_AnimGraphNode_ModifyBone_EB8E7631445C56FEFD42579E68E7F6E7();
	void BlueprintUpdateAnimation();
	void ExecuteUbergraph_MI_8_Military_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
