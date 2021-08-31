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

// BlueprintGeneratedClass Cv4_DestoryedGLASS_01.Cv4_DestoryedGLASS_01_C
// 0x0000
class ACv4_DestoryedGLASS_01_C : public ACv4_DestoryedPrefab_Child_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_DestoryedGLASS_01.Cv4_DestoryedGLASS_01_C");
		return ptr;
	}



	void SpawnBloodEffect();
	void ApplyHitDamage();
	void ExecuteUbergraph_Cv4_DestoryedGLASS_01();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
