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

// BlueprintGeneratedClass AssetObject_Root.AssetObject_Root_C
// 0x0000
class AAssetObject_Root_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AssetObject_Root.AssetObject_Root_C");
		return ptr;
	}



	void ZInv_GetCountConsumeLoot();
	void ObjInf_GetLootInfo();
	void ObjInv_FindObjWithLoot();
	void Consume();
	void Produce();
	void ObjInv_IncrementLoot();
	void ObjInv_DecrementLoot();
	void GetEnums();
	void ObjInv_FindLoot();
	void ZInv_TryAddloot();
	void ZInv_TryAddLootArray();
	void ZInv_GetLoot();
	void UpdateInventorySize();
	void ReceiveBeginPlay();
	void UpdateAssetObjects_Event_1();
	void AddLoot();
	void ProduceTick();
	void Break_Produce();
	void Break_Consume();
	void SetState();
	void ExecuteUbergraph_AssetObject_Root();
	void OnUpdate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
