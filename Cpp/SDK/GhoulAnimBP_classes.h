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

// AnimBlueprintGeneratedClass GhoulAnimBP.GhoulAnimBP_C
// 0x0000
class UGhoulAnimBP_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass GhoulAnimBP.GhoulAnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void BlueprintUpdateAnimation();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_GhoulAnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
