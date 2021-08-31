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

// BlueprintGeneratedClass Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C
// 0x0000
class ACv4_DestoryedPrefab_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_DestoryedPrefab.Cv4_DestoryedPrefab_C");
		return ptr;
	}



	void CheckRespawnPrefab();
	void OnRep_isDestroy();
	void ReceiveBeginPlay();
	void CustomApplyDamage();
	void ExecuteUbergraph_Cv4_DestoryedPrefab();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
