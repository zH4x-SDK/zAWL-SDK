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

// BlueprintGeneratedClass Cv2_LootBP.Cv2_LootBP_C
// 0x0000
class ACv2_LootBP_C : public AZ_LootActor_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_LootBP.Cv2_LootBP_C");
		return ptr;
	}



	void GetIsFocusedNow();
	void OnRep_LootName();
	void OnRep_isLooted();
	void OnRep_isDrop();
	void SetStaticMesh();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetPhysics();
	void GenerateLoot();
	void SetZLoot();
	void Root_UpdateMesh();
	void OffPhysics();
	void SetCustomLoot();
	void SetCustomLootName();
	void SetIsFocusedNow();
	void ExecuteUbergraph_Cv2_LootBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
