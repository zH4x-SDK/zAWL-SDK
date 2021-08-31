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

// AnimBlueprintGeneratedClass StalevarkaAnimBP.StalevarkaAnimBP_C
// 0x0000
class UStalevarkaAnimBP_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass StalevarkaAnimBP.StalevarkaAnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_StalevarkaAnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
