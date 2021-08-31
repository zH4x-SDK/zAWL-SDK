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

// BlueprintGeneratedClass RoomInterfaceActor.RoomInterfaceActor_C
// 0x0000
class ARoomInterfaceActor_C : public AROOM_ACTOR_BASE_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RoomInterfaceActor.RoomInterfaceActor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_RoomInterfaceActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
