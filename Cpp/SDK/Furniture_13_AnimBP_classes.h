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

// AnimBlueprintGeneratedClass Furniture_13_AnimBP.Furniture_13_AnimBP_C
// 0x0000
class UFurniture_13_AnimBP_C : public UFurnitureAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Furniture_13_AnimBP.Furniture_13_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_Furniture_13_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
