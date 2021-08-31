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

// AnimBlueprintGeneratedClass ABP_AnimalsBear_Bear.ABP_AnimalsBear_Bear_C
// 0x0000
class UABP_AnimalsBear_Bear_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AnimalsBear_Bear.ABP_AnimalsBear_Bear_C");
		return ptr;
	}



	void AnimGraph();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_ABBBC7944CA7FD4E182B8FAB5A5D616E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_759329CF4DED97B8F29DC4BD88F4129D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_68261D834E920027326D37876E661C59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_RotationOffsetBlendSpace_2FEE535441FBB7341EB2B98AD3502629();
	void BlueprintUpdateAnimation();
	void AnimNotify_AttackStart();
	void AnimNotify_AttackEnd();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_3E15A6104C0104D1AFF656903FB5917F();
	void ExecuteUbergraph_ABP_AnimalsBear_Bear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
