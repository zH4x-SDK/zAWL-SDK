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

// BlueprintGeneratedClass Asset_InventoryFace.Asset_InventoryFace_C
// 0x0000
class AAsset_InventoryFace_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Asset_InventoryFace.Asset_InventoryFace_C");
		return ptr;
	}



	void Action();
	void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void hover();
	void Unhover();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Asset_InventoryFace();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
