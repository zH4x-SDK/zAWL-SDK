﻿#pragma once

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

// AnimBlueprintGeneratedClass SK_Crazy_AnimBP.SK_Crazy_AnimBP_C
// 0x0000
class USK_Crazy_AnimBP_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Crazy_AnimBP.SK_Crazy_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void BlueprintUpdateAnimation();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Crazy_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
