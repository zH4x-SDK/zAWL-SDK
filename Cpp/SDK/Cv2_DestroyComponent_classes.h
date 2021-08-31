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

// BlueprintGeneratedClass Cv2_DestroyComponent.Cv2_DestroyComponent_C
// 0x0000
class UCv2_DestroyComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_DestroyComponent.Cv2_DestroyComponent_C");
		return ptr;
	}



	void RepairHouse();
	void ServerDestroyFences();
	void DestroySphereRayCast();
	void DestroyHouse();
	void FindUpHouse();
	void DestroyFoliage();
	void ServerDestroyFurniture();
	void ClientDestroyFurniture();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cv2_DestroyComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
