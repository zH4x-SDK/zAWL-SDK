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

// AnimBlueprintGeneratedClass AK47_Base_Skeleton_AnimBP.AK47_Base_Skeleton_AnimBP_C
// 0x0000
class UAK47_Base_Skeleton_AnimBP_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK47_Base_Skeleton_AnimBP.AK47_Base_Skeleton_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_AK47_Base_Skeleton_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
