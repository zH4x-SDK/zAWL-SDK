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

// AnimBlueprintGeneratedClass Furniture_08_AnimBP.Furniture_08_AnimBP_C
// 0x0000
class UFurniture_08_AnimBP_C : public UFurnitureAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Furniture_08_AnimBP.Furniture_08_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_Furniture_08_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
