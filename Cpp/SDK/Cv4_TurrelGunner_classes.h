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

// AnimBlueprintGeneratedClass Cv4_TurrelGunner.Cv4_TurrelGunner_C
// 0x0000
class UCv4_TurrelGunner_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cv4_TurrelGunner.Cv4_TurrelGunner_C");
		return ptr;
	}



	void AnimGraph();
	void BlueprintUpdateAnimation();
	void ExecuteUbergraph_Cv4_TurrelGunner();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
