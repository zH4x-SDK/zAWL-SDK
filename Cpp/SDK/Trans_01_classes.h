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

// BlueprintGeneratedClass Trans_01.Trans_01_C
// 0x0000
class ATrans_01_C : public ABuildings_Base_Surv_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Trans_01.Trans_01_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__Z_InventoryComponent_K2Node_ComponentBoundEvent_0_OnLootAdded_ServerOnly___DelegateSignature();
	void BndEvt__Z_InventoryComponent_K2Node_ComponentBoundEvent_1_OnLootRemove__DelegateSignature();
	void ExecuteUbergraph_Trans_01();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
