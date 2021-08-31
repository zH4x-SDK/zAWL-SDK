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

// AnimBlueprintGeneratedClass BaseHands_Default_AnimBlueprint.BaseHands_Default_AnimBlueprint_C
// 0x0000
class UBaseHands_Default_AnimBlueprint_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseHands_Default_AnimBlueprint.BaseHands_Default_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_BaseHands_Default_AnimBlueprint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
