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

// AnimBlueprintGeneratedClass Stone_Craft_Skeleton_AnimBlueprint.Stone_Craft_Skeleton_AnimBlueprint_C
// 0x0000
class UStone_Craft_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stone_Craft_Skeleton_AnimBlueprint.Stone_Craft_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_Stone_Craft_Skeleton_AnimBlueprint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
