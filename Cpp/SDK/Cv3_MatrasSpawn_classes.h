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

// BlueprintGeneratedClass Cv3_MatrasSpawn.Cv3_MatrasSpawn_C
// 0x0000
class ACv3_MatrasSpawn_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_MatrasSpawn.Cv3_MatrasSpawn_C");
		return ptr;
	}



	void OnRep_isDestroy();
	void ReceiveAnyDamage();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Cv3_MatrasSpawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
