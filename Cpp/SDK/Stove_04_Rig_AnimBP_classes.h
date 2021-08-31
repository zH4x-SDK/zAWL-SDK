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

// AnimBlueprintGeneratedClass Stove_04_Rig_AnimBP.Stove_04_Rig_AnimBP_C
// 0x0000
class UStove_04_Rig_AnimBP_C : public UFurnitureAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stove_04_Rig_AnimBP.Stove_04_Rig_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_Stove_04_Rig_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
