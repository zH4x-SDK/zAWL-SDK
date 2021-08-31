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

// AnimBlueprintGeneratedClass WeaponBox3_AnimBP.WeaponBox3_AnimBP_C
// 0x0000
class UWeaponBox3_AnimBP_C : public UFurnitureAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass WeaponBox3_AnimBP.WeaponBox3_AnimBP_C");
		return ptr;
	}



	void AnimGraph();
	void ExecuteUbergraph_WeaponBox3_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
