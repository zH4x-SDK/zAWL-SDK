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

// BlueprintGeneratedClass Cv2_ActionComponent.Cv2_ActionComponent_C
// 0x0000
class UCv2_ActionComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_ActionComponent.Cv2_ActionComponent_C");
		return ptr;
	}



	void CheckStateNPCs();
	void DropMeatToCreatures();
	void Action();
	void Room_Interface();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cv2_ActionComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
