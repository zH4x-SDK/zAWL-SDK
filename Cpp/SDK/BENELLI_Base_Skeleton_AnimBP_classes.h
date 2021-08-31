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

// AnimBlueprintGeneratedClass BENELLI_Base_Skeleton_AnimBP.BENELLI_Base_Skeleton_AnimBP_C
// 0x0000
class UBENELLI_Base_Skeleton_AnimBP_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BENELLI_Base_Skeleton_AnimBP.BENELLI_Base_Skeleton_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_BENELLI_Base_Skeleton_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
