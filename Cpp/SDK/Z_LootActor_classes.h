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

// BlueprintGeneratedClass Z_LootActor.Z_LootActor_C
// 0x0000
class AZ_LootActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_LootActor.Z_LootActor_C");
		return ptr;
	}



	void Root_UpdateMesh();
	void OnRep_ZTransportLoot();
	void LootIsValid();
	void ReceiveBeginPlay();
	void DRAW_LOOT();
	void ExecuteUbergraph_Z_LootActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
