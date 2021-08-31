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

// BlueprintGeneratedClass StatisticZone.StatisticZone_C
// 0x0000
class AStatisticZone_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StatisticZone.StatisticZone_C");
		return ptr;
	}



	void ReceiveActorBeginOverlap();
	void ExecuteUbergraph_StatisticZone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
