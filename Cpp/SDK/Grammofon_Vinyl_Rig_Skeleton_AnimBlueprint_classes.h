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

// AnimBlueprintGeneratedClass Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint.Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint_C
// 0x0000
class UGrammofon_Vinyl_Rig_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint.Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_0592796B48355961CA61F298CF48AB5C();
	void BlueprintUpdateAnimation();
	void ExecuteUbergraph_Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
