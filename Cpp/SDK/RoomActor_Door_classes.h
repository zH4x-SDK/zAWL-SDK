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

// BlueprintGeneratedClass RoomActor_Door.RoomActor_Door_C
// 0x0000
class ARoomActor_Door_C : public AROOM_ACTOR_BASE_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RoomActor_Door.RoomActor_Door_C");
		return ptr;
	}



	void OnRep_isOpen();
	void Door__FinishedFunc();
	void Door__UpdateFunc();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void OpenDoor();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RoomActor_Door();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
