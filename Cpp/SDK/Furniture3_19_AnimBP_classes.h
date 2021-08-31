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

// AnimBlueprintGeneratedClass Furniture3_19_AnimBP.Furniture3_19_AnimBP_C
// 0x0000
class UFurniture3_19_AnimBP_C : public UFurnitureAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Furniture3_19_AnimBP.Furniture3_19_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_Furniture3_19_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
