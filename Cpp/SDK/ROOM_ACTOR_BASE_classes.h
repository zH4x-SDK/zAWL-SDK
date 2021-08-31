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

// BlueprintGeneratedClass ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C
// 0x0000
class AROOM_ACTOR_BASE_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ROOM_ACTOR_BASE.ROOM_ACTOR_BASE_C");
		return ptr;
	}



	void PlayerInteraction();
	void ini();
	void ExecuteUbergraph_ROOM_ACTOR_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
