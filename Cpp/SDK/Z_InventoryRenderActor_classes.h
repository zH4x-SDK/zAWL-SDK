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

// BlueprintGeneratedClass Z_InventoryRenderActor.Z_InventoryRenderActor_C
// 0x0000
class AZ_InventoryRenderActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_InventoryRenderActor.Z_InventoryRenderActor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void RotateActor();
	void ExecuteUbergraph_Z_InventoryRenderActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
