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

// BlueprintGeneratedClass DeathBox.DeathBox_C
// 0x0000
class ADeathBox_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DeathBox.DeathBox_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__Z_InventoryComponent_K2Node_ComponentBoundEvent_0_OnCloseInventory__DelegateSignature();
	void ExecuteUbergraph_DeathBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
