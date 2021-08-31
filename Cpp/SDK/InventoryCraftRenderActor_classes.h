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

// BlueprintGeneratedClass InventoryCraftRenderActor.InventoryCraftRenderActor_C
// 0x0000
class AInventoryCraftRenderActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCraftRenderActor.InventoryCraftRenderActor_C");
		return ptr;
	}



	void RotateActor();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SetActor();
	void SetLootActor();
	void ExecuteUbergraph_InventoryCraftRenderActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
