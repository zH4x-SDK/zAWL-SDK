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

// AnimBlueprintGeneratedClass ABP_AnimalsWolf_Wolf.ABP_AnimalsWolf_Wolf_C
// 0x0000
class UABP_AnimalsWolf_Wolf_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AnimalsWolf_Wolf.ABP_AnimalsWolf_Wolf_C");
		return ptr;
	}



	void AnimGraph();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_1C287C424D98A1D2075A6E952A6471B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_3399611A4CF3CA73BAE519AB3F35C90E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_5E568E9A4F8C78798C50C7A711C74094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_RotationOffsetBlendSpace_1FFF150C415491B5E6A4548ED485A0C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_7B5843DB4952D0F4F14781B707FCDABD();
	void BlueprintUpdateAnimation();
	void AnimNotify_AttackStart();
	void AnimNotify_AttackEnd();
	void ExecuteUbergraph_ABP_AnimalsWolf_Wolf();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
