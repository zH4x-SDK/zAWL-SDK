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

// BlueprintGeneratedClass BOT_Creature_WOLF.BOT_Creature_WOLF_C
// 0x0000
class ABOT_Creature_WOLF_C : public ABOT_CreatureBase_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BOT_Creature_WOLF.BOT_Creature_WOLF_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BOT_Creature_WOLF();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
