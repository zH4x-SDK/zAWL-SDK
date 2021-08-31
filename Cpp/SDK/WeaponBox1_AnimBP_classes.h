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

// AnimBlueprintGeneratedClass WeaponBox1_AnimBP.WeaponBox1_AnimBP_C
// 0x0000
class UWeaponBox1_AnimBP_C : public UFurnitureAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass WeaponBox1_AnimBP.WeaponBox1_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_WeaponBox1_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
